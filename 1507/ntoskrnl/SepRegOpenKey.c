/*
 * XREFs of SepRegOpenKey @ 0x140411114
 * Callers:
 *     SepBuildCapPolicyTable @ 0x140130FF8 (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x140410FD0 (SepRegQueryDwordValue.c)
 *     SepReadAndPopulateCapes @ 0x14055C3A8 (SepReadAndPopulateCapes.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1405929F4 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x1405A77D8 (SepRmFetchGlobalSacl.c)
 *     SepReadAndInsertCaps @ 0x1406D8C80 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memset @ 0x140195A80 (memset.c)
 */

NTSTATUS __fastcall SepRegOpenKey(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  *KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
