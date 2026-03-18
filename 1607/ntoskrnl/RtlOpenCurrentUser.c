/*
 * XREFs of RtlOpenCurrentUser @ 0x14054960C
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140132358 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403F7A20 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 */

NTSTATUS __stdcall RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  int v4; // ebx
  UNICODE_STRING KeyPath; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  v4 = RtlFormatCurrentUserKeyPath(&KeyPath);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &KeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
    RtlFreeAnsiString(&KeyPath);
  }
  if ( v4 == -1073741772 )
  {
    RtlInitUnicodeString(&KeyPath, L"\\Registry\\User\\.Default");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &KeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
  }
  return v4;
}
