/*
 * XREFs of FsRtlpGetMaxVirtualDiskNestingLevel @ 0x14016F680
 * Callers:
 *     FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x14016F660 (FsRtlQueryMaximumVirtualDiskNestingLevel.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 */

__int64 FsRtlpGetMaxVirtualDiskNestingLevel()
{
  unsigned int v0; // edi
  unsigned int v1; // ebx
  UNICODE_STRING *p_DestinationString; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  UNICODE_STRING v9; // [rsp+90h] [rbp+27h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+A0h] [rbp+37h] BYREF
  unsigned int v11; // [rsp+ACh] [rbp+43h]

  KeyHandle = 0LL;
  v0 = 0;
  v1 = 2;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem\\GroupPolicyKeys");
  RtlInitUnicodeString(&v9, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FsDepends\\Parameters");
  do
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ++v0;
    ObjectAttributes.Attributes = 576;
    p_DestinationString = &v9;
    if ( v0 != 1 )
      p_DestinationString = &DestinationString;
    ObjectAttributes.ObjectName = p_DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"VirtualDiskMaxTreeDepth");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v11 <= 2 )
      {
        v1 = v11;
      }
      ZwClose(KeyHandle);
    }
  }
  while ( v0 < 2 );
  return v1;
}
