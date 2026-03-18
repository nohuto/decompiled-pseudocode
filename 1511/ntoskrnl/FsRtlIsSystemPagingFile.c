/*
 * XREFs of FsRtlIsSystemPagingFile @ 0x140103640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall FsRtlIsSystemPagingFile(__int64 a1)
{
  return MmIsFileObjectAPagingFile(a1);
}
