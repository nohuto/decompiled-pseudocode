/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1401812F0
 * Callers:
 *     sub_140459F24 @ 0x140459F24 (sub_140459F24.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x14055CE0C (IoDeleteSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x14056EE8C (BiTranslateSymbolicLink.c)
 *     SiTranslateSymbolicLink @ 0x14057FC04 (SiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140674FB0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1406F3F64 (ExpTranslateSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x140712198 (SiOpenArcNameObject.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1407568CC (VfZwOpenSymbolicLinkObject.c)
 *     IopStoreSystemPartitionInformation @ 0x1407B634C (IopStoreSystemPartitionInformation.c)
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
