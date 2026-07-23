/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x14015C5B0
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     sub_1404BE890 @ 0x1404BE890 (sub_1404BE890.c)
 *     BiTranslateSymbolicLink @ 0x14053D230 (BiTranslateSymbolicLink.c)
 *     SiTranslateSymbolicLink @ 0x140542818 (SiTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x140547860 (IoDeleteSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406246A4 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1406B31E0 (ExpTranslateSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x1406D6F58 (SiOpenArcNameObject.c)
 *     IopStoreSystemPartitionInformation @ 0x140798C34 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
