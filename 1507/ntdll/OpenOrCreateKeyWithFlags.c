/*
 * XREFs of OpenOrCreateKeyWithFlags @ 0x1800F89D8
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800F8844 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     ZwCreateKey @ 0x180093AD0 (ZwCreateKey.c)
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
