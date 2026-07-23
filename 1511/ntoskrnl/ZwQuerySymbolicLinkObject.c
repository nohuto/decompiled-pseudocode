/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x140152F00
 * Callers:
 *     sub_140495F7C @ 0x140495F7C (sub_140495F7C.c)
 *     BiTranslateSymbolicLink @ 0x1404FC3EC (BiTranslateSymbolicLink.c)
 *     SiTranslateSymbolicLink @ 0x14050692C (SiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x1405FAB5C (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1406703B8 (ExpTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x14069230C (SiGetBiosSystemDisk.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1406D3CFC (VfZwQuerySymbolicLinkObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
