/*
 * XREFs of FsRtlIsPagingFile @ 0x140097410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __stdcall FsRtlIsPagingFile(PFILE_OBJECT FileObject)
{
  _BYTE *FsContext; // rax

  FsContext = FileObject->FsContext;
  return FsContext && (FsContext[6] & 8) != 0;
}
