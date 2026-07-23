/*
 * XREFs of ZwDuplicateObject @ 0x14017F770
 * Callers:
 *     SepReferenceLowBoxObjects @ 0x140007848 (SepReferenceLowBoxObjects.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x140554E5C (SeAuditHandleCreation.c)
 *     SmKmFileInfoDuplicate @ 0x1406DC9E8 (SmKmFileInfoDuplicate.c)
 *     VfZwDuplicateObject @ 0x140755D74 (VfZwDuplicateObject.c)
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
