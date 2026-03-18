/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x14015C040
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     sub_1404DB28C @ 0x1404DB28C (sub_1404DB28C.c)
 *     BiTranslateSymbolicLink @ 0x14053CCF0 (BiTranslateSymbolicLink.c)
 *     SiTranslateSymbolicLink @ 0x1405422D8 (SiTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x140547320 (IoDeleteSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406245F0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1406B30A8 (ExpTranslateSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x1406D6E20 (SiOpenArcNameObject.c)
 *     IopStoreSystemPartitionInformation @ 0x140798C34 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
