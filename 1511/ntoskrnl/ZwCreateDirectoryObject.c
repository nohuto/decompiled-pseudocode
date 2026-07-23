/*
 * XREFs of ZwCreateDirectoryObject @ 0x140151980
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1404A7BCC (SeGetTokenDeviceMap.c)
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     VfZwCreateDirectoryObject @ 0x1406D1A18 (VfZwCreateDirectoryObject.c)
 *     BuildKnownDlls @ 0x14075C938 (BuildKnownDlls.c)
 *     ExInitializeNls @ 0x140772054 (ExInitializeNls.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
