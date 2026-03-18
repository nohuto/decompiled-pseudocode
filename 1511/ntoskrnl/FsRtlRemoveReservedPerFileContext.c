/*
 * XREFs of FsRtlRemoveReservedPerFileContext @ 0x1401ADE94
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlLookupReservedPerFileContext @ 0x1400F2F28 (FsRtlLookupReservedPerFileContext.c)
 */

__int64 __fastcall FsRtlRemoveReservedPerFileContext(__int64 *a1)
{
  __int64 result; // rax

  result = FsRtlLookupReservedPerFileContext(a1);
  if ( result )
    *(_QWORD *)(*a1 + 24) = 0LL;
  return result;
}
