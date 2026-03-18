/*
 * XREFs of WmipSecurityMethod @ 0x1404E1DBC
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000C1D4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObQuerySecurityDescriptorInfo @ 0x14040423C (ObQuerySecurityDescriptorInfo.c)
 *     RtlLengthSecurityDescriptor @ 0x14041FFE0 (RtlLengthSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404A5248 (ObSetSecurityDescriptorInfo.c)
 *     RtlWriteRegistryValue @ 0x1404E08E4 (RtlWriteRegistryValue.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1404E1E60 (ObAssignObjectSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x1404E1ED4 (ObDeassignSecurity.c)
 */

__int64 __fastcall WmipSecurityMethod(
        unsigned __int16 *Object,
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
        return ObAssignObjectSecurityDescriptor(Object, a4);
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
        ValueLength[0] = Object[15];
        LODWORD(ValueData) = Object[14];
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
