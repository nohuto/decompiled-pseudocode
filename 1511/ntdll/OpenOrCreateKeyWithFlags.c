/*
 * XREFs of OpenOrCreateKeyWithFlags @ 0x1800F83B0
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800F821C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A5460 (ZwCreateKey.c)
 */

int __fastcall OpenOrCreateKeyWithFlags(
        ACCESS_MASK DesiredAccess,
        char a2,
        _UNICODE_STRING *a3,
        HANDLE *a4,
        PULONG Disposition)
{
  int result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( !a3 || !Disposition )
    return -1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *Disposition = 2;
  result = ZwOpenKey(a4, DesiredAccess, &ObjectAttributes);
  if ( result < 0 && (a2 & 2) != 0 )
    return ZwCreateKey(a4, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, Disposition);
  return result;
}
