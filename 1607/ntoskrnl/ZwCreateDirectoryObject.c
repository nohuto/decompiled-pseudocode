/*
 * XREFs of ZwCreateDirectoryObject @ 0x14015B000
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1404CABA0 (SeGetTokenDeviceMap.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 *     ObpGetSilosRootDirectory @ 0x1406E63A0 (ObpGetSilosRootDirectory.c)
 *     BuildKnownDlls @ 0x1407A34E0 (BuildKnownDlls.c)
 *     ExInitializeNls @ 0x1407BCF04 (ExInitializeNls.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
