/*
 * XREFs of ZwQueryAttributesFile @ 0x14017F790
 * Callers:
 *     CmpOpenFileWithExtremePrejudice @ 0x14055B714 (CmpOpenFileWithExtremePrejudice.c)
 *     BiDoesHiveExist @ 0x140571370 (BiDoesHiveExist.c)
 *     BiResolveLocateDevice @ 0x14070DB84 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
