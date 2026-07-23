/*
 * XREFs of ZwCreateDirectoryObject @ 0x140180350
 * Callers:
 *     SeGetTokenDeviceMap @ 0x140461F64 (SeGetTokenDeviceMap.c)
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     VfZwCreateDirectoryObject @ 0x1407555E0 (VfZwCreateDirectoryObject.c)
 *     BuildKnownDlls @ 0x1407BD39C (BuildKnownDlls.c)
 *     ExInitializeNls @ 0x1407E8AF0 (ExInitializeNls.c)
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
