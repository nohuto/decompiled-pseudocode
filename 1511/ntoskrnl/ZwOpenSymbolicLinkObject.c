/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x140152980
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     sub_140495F7C @ 0x140495F7C (sub_140495F7C.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x1404C6394 (IoDeleteSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x1404FC3EC (BiTranslateSymbolicLink.c)
 *     SiTranslateSymbolicLink @ 0x14050692C (SiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x1405FAB5C (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1406703B8 (ExpTranslateSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x140692680 (SiOpenArcNameObject.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1406D2D04 (VfZwOpenSymbolicLinkObject.c)
 *     IopStoreSystemPartitionInformation @ 0x14075363C (IopStoreSystemPartitionInformation.c)
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
