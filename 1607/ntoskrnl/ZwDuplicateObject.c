/*
 * XREFs of ZwDuplicateObject @ 0x14015A400
 * Callers:
 *     SepReferenceLowBoxObjects @ 0x1400B1F38 (SepReferenceLowBoxObjects.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1404E9174 (SeAuditHandleCreation.c)
 *     SmKmFileInfoDuplicate @ 0x140697E7C (SmKmFileInfoDuplicate.c)
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
  return KiServiceInternal(SourceProcessHandle, SourceHandle, TargetProcessHandle);
}
