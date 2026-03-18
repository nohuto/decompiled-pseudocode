/*
 * XREFs of FsRtlInsertPerFileContext @ 0x1401AD950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlInsertPerFileContext(PVOID *PerFileContextPointer, PFSRTL_PER_FILE_CONTEXT Ptr)
{
  return FsRtlInsertPerFileContextInternal((volatile signed __int64 *)PerFileContextPointer, Ptr, 0);
}
