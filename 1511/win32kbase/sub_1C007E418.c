/*
 * XREFs of sub_1C007E418 @ 0x1C007E418
 * Callers:
 *     NtUserInitialize @ 0x1C007DC70 (NtUserInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 sub_1C007E418()
{
  unsigned int v0; // edi
  NTSTATUS v1; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-9h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+80h] [rbp+27h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp+37h] BYREF
  int v9; // [rsp+9Ch] [rbp+43h]

  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AdaptiveDisplayBrightness\\{23B44AF2-78CE-4943"
     "-81DF-89817E8D23FD}");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  v0 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  RtlInitUnicodeString(&ValueName, L"LoadCustomAdbAlgorithm");
  v1 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength);
  ZwClose(KeyHandle);
  if ( v1 < 0 )
    return 0LL;
  LOBYTE(v0) = v9 != 0;
  return v0;
}
