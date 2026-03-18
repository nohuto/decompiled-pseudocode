/*
 * XREFs of FsRtlInsertReservedPerFileContext @ 0x1401E3EAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlInsertReservedPerFileContext(volatile signed __int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  return FsRtlInsertPerFileContextInternal(a1, a2, 1, a4);
}
