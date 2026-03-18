/*
 * XREFs of FsRtlInsertPerFileContext @ 0x1401E3B3C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlInsertPerFileContext(PVOID *PerFileContextPointer, PFSRTL_PER_FILE_CONTEXT Ptr)
{
  return FsRtlInsertPerFileContextInternal(PerFileContextPointer, Ptr, 0LL);
}
