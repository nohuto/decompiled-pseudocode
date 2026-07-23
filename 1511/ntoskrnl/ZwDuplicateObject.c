/*
 * XREFs of ZwDuplicateObject @ 0x140150DA0
 * Callers:
 *     SepReferenceLowBoxObjects @ 0x140003560 (SepReferenceLowBoxObjects.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1404BD7B8 (SeAuditHandleCreation.c)
 *     SmKmFileInfoDuplicate @ 0x14065A2A4 (SmKmFileInfoDuplicate.c)
 *     VfZwDuplicateObject @ 0x1406D21AC (VfZwDuplicateObject.c)
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
