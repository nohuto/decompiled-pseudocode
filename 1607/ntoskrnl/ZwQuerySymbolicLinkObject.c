/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x14015C5E0
 * Callers:
 *     sub_1404DB28C @ 0x1404DB28C (sub_1404DB28C.c)
 *     BiTranslateSymbolicLink @ 0x14053CCF0 (BiTranslateSymbolicLink.c)
 *     SiTranslateSymbolicLink @ 0x1405422D8 (SiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406245F0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1406B30A8 (ExpTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x1406D6AA4 (SiGetBiosSystemDisk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, LinkTarget, ReturnedLength);
}
