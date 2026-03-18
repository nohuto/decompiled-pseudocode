/*
 * XREFs of SepRegOpenKey @ 0x140476484
 * Callers:
 *     SepBuildCapPolicyTable @ 0x140144EF0 (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x140476340 (SepRegQueryDwordValue.c)
 *     SepRmFetchGlobalSacl @ 0x14056B6F0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x14056BD0C (SepReadAndPopulateCapes.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14056FABC (SepAdtOpenRegAndSetupNotification.c)
 *     SepReadAndInsertCaps @ 0x140696138 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     memset @ 0x1401715C0 (memset.c)
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
