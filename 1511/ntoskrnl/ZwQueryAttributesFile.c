/*
 * XREFs of ZwQueryAttributesFile @ 0x140150DC0
 * Callers:
 *     CmpOpenFileWithExtremePrejudice @ 0x1403B5538 (CmpOpenFileWithExtremePrejudice.c)
 *     BiDoesHiveExist @ 0x1404FE728 (BiDoesHiveExist.c)
 *     BiResolveLocateDevice @ 0x14068E06C (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
