/*
 * XREFs of ZwQueryAttributesFile @ 0x14015A990
 * Callers:
 *     CmpOpenFileWithExtremePrejudice @ 0x1404D1584 (CmpOpenFileWithExtremePrejudice.c)
 *     BiDoesHiveExist @ 0x14053F544 (BiDoesHiveExist.c)
 *     BiResolveLocateDevice @ 0x1406D2A04 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
