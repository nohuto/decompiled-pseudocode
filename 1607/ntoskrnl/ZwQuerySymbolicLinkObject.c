/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x14015CB50
 * Callers:
 *     sub_1404BE890 @ 0x1404BE890 (sub_1404BE890.c)
 *     BiTranslateSymbolicLink @ 0x14053D230 (BiTranslateSymbolicLink.c)
 *     SiTranslateSymbolicLink @ 0x140542818 (SiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406246A4 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1406B31E0 (ExpTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x1406D6BDC (SiGetBiosSystemDisk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
