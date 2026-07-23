/*
 * XREFs of ZwCreateDirectoryObject @ 0x14015B570
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1404885C0 (SeGetTokenDeviceMap.c)
 *     SepInitializationPhase1 @ 0x140553520 (SepInitializationPhase1.c)
 *     ObpInitializeRootNamespace @ 0x140579EB4 (ObpInitializeRootNamespace.c)
 *     ObpGetSilosRootDirectory @ 0x1406E64D8 (ObpGetSilosRootDirectory.c)
 *     BuildKnownDlls @ 0x1407A34E0 (BuildKnownDlls.c)
 *     ExInitializeNls @ 0x1407BCF04 (ExInitializeNls.c)
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
