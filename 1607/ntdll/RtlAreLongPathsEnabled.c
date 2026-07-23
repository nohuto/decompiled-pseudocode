/*
 * XREFs of RtlAreLongPathsEnabled @ 0x180082FE0
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222A0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlSetCurrentDirectory_U @ 0x180079050 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

BOOLEAN RtlAreLongPathsEnabled(void)
{
  char v1; // cl
  HANDLE KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+37h] BYREF
  int v6; // [rsp+74h] [rbp+3Bh]
  int v7; // [rsp+78h] [rbp+3Fh]
  char v8; // [rsp+7Ch] [rbp+43h]

  KeyHandle = 0LL;
  if ( byte_180152B30 )
    return byte_180152B40;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"|~";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
LABEL_11:
    byte_180152B30 = 1;
    return byte_180152B40;
  }
  if ( NtQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&LongPathRegKeyValue,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength) < 0 )
  {
    NtClose(KeyHandle);
    goto LABEL_11;
  }
  if ( v6 == 4 )
  {
    v1 = byte_180152B40;
    if ( v7 == 4 )
      v1 = v8;
    byte_180152B40 = v1;
  }
  byte_180152B30 = 1;
  NtClose(KeyHandle);
  return byte_180152B40;
}
