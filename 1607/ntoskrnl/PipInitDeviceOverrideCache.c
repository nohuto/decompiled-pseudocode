/*
 * XREFs of PipInitDeviceOverrideCache @ 0x1407990C4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1404E21B0 (RtlHashUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x140550B8C (IopOpenRegistryKeyEx.c)
 */

__int64 PipInitDeviceOverrideCache()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  unsigned int v2; // edx
  unsigned int *v3; // r8
  unsigned int v4; // ecx
  _QWORD *PoolWithTag; // rax
  __int64 v6; // rdx
  ULONG i; // esi
  NTSTATUS v8; // eax
  UNICODE_STRING *v10; // rax
  UNICODE_STRING *v11; // rdi
  NTSTATUS v12; // eax
  ULONG v13; // ecx
  __int64 v14; // rcx
  UNICODE_STRING **v15; // rax
  ULONG HashValue[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v19; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE KeyInformation[20]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v21; // [rsp+74h] [rbp-94h]
  _BYTE v22[12]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v23; // [rsp+A4h] [rbp-64h]
  WCHAR SourceString[264]; // [rsp+A8h] [rbp-60h] BYREF

  *(_DWORD *)&v19.Length = 8781956;
  v19.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceOverrides";
  KeyHandle = 0LL;
  v0 = IopOpenRegistryKeyEx(&KeyHandle, 0LL, &v19, 0x20019u);
  v1 = v0;
  if ( v0 == -1073741772 )
    goto LABEL_17;
  if ( v0 < 0 )
    goto LABEL_18;
  v1 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( (int)(v1 + 0x80000000) >= 0 && v1 != -2147483643 )
    goto LABEL_18;
  if ( !v21 )
  {
LABEL_17:
    v1 = 0;
    goto LABEL_18;
  }
  v2 = 0;
  v3 = (unsigned int *)&unk_140279430;
  do
  {
    v4 = *v3;
    if ( v21 < 3 * *v3 )
    {
      PnpDeviceOverrideHashListSize = *v3;
      goto LABEL_8;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  v4 = PnpDeviceOverrideHashListSize;
LABEL_8:
  if ( !v4 )
  {
    v4 = 257;
    PnpDeviceOverrideHashListSize = 257;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v4, 0x6E697050u);
  PnpDeviceOverrideHashList = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( PnpDeviceOverrideHashListSize )
    {
      v6 = (unsigned int)PnpDeviceOverrideHashListSize;
      do
      {
        PoolWithTag[1] = PoolWithTag;
        *PoolWithTag = PoolWithTag;
        PoolWithTag += 2;
        --v6;
      }
      while ( v6 );
    }
    for ( i = 0; ; ++i )
    {
      v8 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v22, 0x218u, &ResultLength);
      v1 = v8;
      if ( v8 >= 0 )
      {
        if ( v23 <= 0x200 )
        {
          SourceString[(unsigned __int64)v23 >> 1] = 0;
          v10 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6E697050u);
          v11 = v10;
          if ( !v10 )
            goto LABEL_34;
          if ( !RtlCreateUnicodeString(v10 + 1, SourceString) )
          {
            v1 = -1073741670;
            ExFreePoolWithTag(v11, 0);
            goto LABEL_18;
          }
          v12 = RtlHashUnicodeString(v11 + 1, 1u, 0, HashValue);
          v13 = HashValue[0];
          if ( v12 < 0 )
            v13 = 0;
          HashValue[0] = v13;
          v14 = PnpDeviceOverrideHashList + 16LL * (v13 % PnpDeviceOverrideHashListSize);
          v15 = *(UNICODE_STRING ***)(v14 + 8);
          if ( *v15 != (UNICODE_STRING *)v14 )
            __fastfail(3u);
          *(_QWORD *)&v11->Length = v14;
          v11->Buffer = (wchar_t *)v15;
          *v15 = v11;
          *(_QWORD *)(v14 + 8) = v11;
        }
      }
      else
      {
        if ( v8 == -2147483622 )
          goto LABEL_17;
        if ( v8 != -2147483643 )
          goto LABEL_18;
      }
    }
  }
  PnpDeviceOverrideHashListSize = 0;
LABEL_34:
  v1 = -1073741670;
LABEL_18:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v1;
}
