/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x140181870
 * Callers:
 *     sub_140459F24 @ 0x140459F24 (sub_140459F24.c)
 *     BiTranslateSymbolicLink @ 0x14056EE8C (BiTranslateSymbolicLink.c)
 *     SiTranslateSymbolicLink @ 0x14057FC04 (SiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140674FB0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1406F3F64 (ExpTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x140711E24 (SiGetBiosSystemDisk.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1407578C4 (VfZwQuerySymbolicLinkObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
