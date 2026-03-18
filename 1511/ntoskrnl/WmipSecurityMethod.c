/*
 * XREFs of WmipSecurityMethod @ 0x1404C19F8
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1403E01D8 (ObAssignObjectSecurityDescriptor.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140420A4C (ObQuerySecurityDescriptorInfo.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x14046B450 (ObSetSecurityDescriptorInfo.c)
 *     ObDeassignSecurity @ 0x1404C1A9C (ObDeassignSecurity.c)
 *     RtlWriteRegistryValue @ 0x1404C8708 (RtlWriteRegistryValue.c)
 */

__int64 __fastcall WmipSecurityMethod(
        unsigned __int64 *Object,
        int a2,
        DWORD *a3,
        void *a4,
        ULONG *a5,
        __int64 a6,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING a8)
{
  int v9; // edx
  int v10; // edx
  int v12; // ebx
  SIZE_T v13; // rdx
  PVOID PoolWithTag; // rax
  void *v15; // r14
  ULONG v16; // eax
  PVOID ValueData; // [rsp+20h] [rbp-F8h]
  ULONG ValueLength[2]; // [rsp+28h] [rbp-F0h]
  ULONG NumberOfBytes; // [rsp+70h] [rbp-A8h] BYREF
  DWORD NumberOfBytes_4; // [rsp+74h] [rbp-A4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-A0h] BYREF
  wchar_t pszDest[40]; // [rsp+90h] [rbp-88h] BYREF

  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          KeBugCheckEx(0x29u, 1uLL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
        return ObAssignObjectSecurityDescriptor((__int64)Object, a4);
      }
      else
      {
        return ObDeassignSecurity(a6);
      }
    }
    else
    {
      return ObQuerySecurityDescriptorInfo((__int64)Object, a3, a4, a5);
    }
  }
  else
  {
    v12 = ObSetSecurityDescriptorInfo(Object, a3, a4, a6, PoolType, a8);
    if ( v12 >= 0 )
    {
      v13 = 1024LL;
      for ( NumberOfBytes = 1024; ; v13 = NumberOfBytes )
      {
        PoolWithTag = ExAllocatePoolWithTag(PoolType, v13, 0x70696D57u);
        v15 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        NumberOfBytes_4 = -1;
        v12 = ObQuerySecurityDescriptorInfo((__int64)Object, &NumberOfBytes_4, PoolWithTag, &NumberOfBytes);
        if ( v12 != -1073741789 )
          goto LABEL_15;
        ExFreePoolWithTag(v15, 0);
      }
      v12 = -1073741670;
LABEL_15:
      if ( v12 >= 0 )
      {
        ValueLength[0] = *((unsigned __int16 *)Object + 15);
        LODWORD(ValueData) = *((unsigned __int16 *)Object + 14);
        RtlStringCbPrintfW(
          pszDest,
          0x4CuLL,
          L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
          *((unsigned int *)Object + 6),
          ValueData,
          *(_QWORD *)ValueLength,
          *((unsigned __int8 *)Object + 32),
          *((unsigned __int8 *)Object + 33),
          *((unsigned __int8 *)Object + 34),
          *((unsigned __int8 *)Object + 35),
          *((unsigned __int8 *)Object + 36),
          *((unsigned __int8 *)Object + 37),
          *((unsigned __int8 *)Object + 38),
          *((unsigned __int8 *)Object + 39));
        RtlInitUnicodeString(&DestinationString, pszDest);
        v16 = RtlLengthSecurityDescriptor(v15);
        v12 = RtlWriteRegistryValue(2u, L"WMI\\Security", DestinationString.Buffer, 3u, v15, v16);
        ExFreePoolWithTag(v15, 0);
      }
    }
    return (unsigned int)v12;
  }
}
