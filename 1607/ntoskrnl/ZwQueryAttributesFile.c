/*
 * XREFs of ZwQueryAttributesFile @ 0x14015A420
 * Callers:
 *     CmpOpenFileWithExtremePrejudice @ 0x1404EF4C0 (CmpOpenFileWithExtremePrejudice.c)
 *     BiDoesHiveExist @ 0x14053F004 (BiDoesHiveExist.c)
 *     BiResolveLocateDevice @ 0x1406D28CC (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, FileInformation, v2);
}
