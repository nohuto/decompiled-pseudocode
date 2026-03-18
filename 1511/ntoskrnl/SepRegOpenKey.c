/*
 * XREFs of SepRegOpenKey @ 0x1403BED14
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1400F3BAC (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x1403BEBC8 (SepRegQueryDwordValue.c)
 *     SepReadAndPopulateCapes @ 0x1404C5E6C (SepReadAndPopulateCapes.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14052EE38 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x14053C4F0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndInsertCaps @ 0x1406567C8 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     memset @ 0x140166CC0 (memset.c)
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
