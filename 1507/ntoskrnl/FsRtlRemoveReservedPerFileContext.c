/*
 * XREFs of FsRtlRemoveReservedPerFileContext @ 0x1401E45F8
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlLookupReservedPerFileContext @ 0x1401E4204 (FsRtlLookupReservedPerFileContext.c)
 */

__int64 __fastcall FsRtlRemoveReservedPerFileContext(__int64 *a1)
{
  __int64 result; // rax

  result = FsRtlLookupReservedPerFileContext(a1);
  if ( result )
    *(_QWORD *)(*a1 + 24) = 0LL;
  return result;
}
