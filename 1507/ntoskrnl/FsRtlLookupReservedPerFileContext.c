/*
 * XREFs of FsRtlLookupReservedPerFileContext @ 0x1401E4204
 * Callers:
 *     FsRtlRemoveReservedPerFileContext @ 0x1401E45F8 (FsRtlRemoveReservedPerFileContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlLookupReservedPerFileContext(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
    return *(_QWORD *)(result + 24);
  return result;
}
