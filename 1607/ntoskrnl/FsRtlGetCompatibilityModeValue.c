/*
 * XREFs of FsRtlGetCompatibilityModeValue @ 0x1407B6BB0
 * Callers:
 *     FsRtlInitSystem @ 0x1407B6884 (FsRtlInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall FsRtlGetCompatibilityModeValue(PUNICODE_STRING ValueName, _DWORD *a2)
{
  NTSTATUS result; // eax
  ULONG Length; // esi
  unsigned int *v6; // rbx
  _BYTE *i; // r9
  NTSTATUS v8; // edi
  _BYTE *PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  int v12; // [rsp+40h] [rbp-79h] BYREF
  const wchar_t *v13; // [rsp+48h] [rbp-71h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-69h] BYREF
  _BYTE KeyValueInformation[96]; // [rsp+80h] [rbp-39h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  v13 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem";
  v12 = 8126586;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    Length = 92;
    v6 = (unsigned int *)KeyValueInformation;
    for ( i = KeyValueInformation; ; i = PoolWithTag )
    {
      v8 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, i, Length, &ResultLength);
      if ( v8 != -2147483643 )
        break;
      if ( v6 != (unsigned int *)KeyValueInformation )
        ExFreePoolWithTag(v6, 0);
      Length += 256;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x20746146u);
      v6 = (unsigned int *)PoolWithTag;
      if ( !PoolWithTag )
        return -1073741801;
    }
    ZwClose(KeyHandle);
    if ( v8 >= 0 )
    {
      if ( v6[3] )
        *a2 = *(unsigned int *)((char *)v6 + v6[2]);
      else
        v8 = -1073741772;
    }
    if ( v6 != (unsigned int *)KeyValueInformation )
      ExFreePoolWithTag(v6, 0);
    return v8;
  }
  return result;
}
