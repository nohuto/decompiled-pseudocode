/*
 * XREFs of RtlOpenCurrentUser @ 0x180071890
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18007181C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x180015290 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 */

NTSTATUS __cdecl RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE CurrentUserKey)
{
  int v4; // ebx
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  v4 = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = NtOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
    RtlFreeAnsiString(&CurrentUserKeyPath);
  }
  if ( v4 == -1073741772 )
  {
    RtlInitUnicodeString(&CurrentUserKeyPath, L"\\Registry\\User\\.Default");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return NtOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
  }
  return v4;
}
