/*
 * XREFs of SepRegOpenKey @ 0x140475354
 * Callers:
 *     SepBuildCapPolicyTable @ 0x140145460 (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x140475210 (SepRegQueryDwordValue.c)
 *     SepRmFetchGlobalSacl @ 0x14056BC30 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x14056C24C (SepReadAndPopulateCapes.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14056FFFC (SepAdtOpenRegAndSetupNotification.c)
 *     SepReadAndInsertCaps @ 0x14069621C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
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
