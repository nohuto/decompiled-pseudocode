/*
 * XREFs of ZwDuplicateObject @ 0x14015A970
 * Callers:
 *     SepReferenceLowBoxObjects @ 0x1400AFE78 (SepReferenceLowBoxObjects.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1404CB264 (SeAuditHandleCreation.c)
 *     SmKmFileInfoDuplicate @ 0x140697F60 (SmKmFileInfoDuplicate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SourceProcessHandle);
}
