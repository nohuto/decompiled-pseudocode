/*
 * XREFs of CmpFindKeyNameAtIndex @ 0x140050190
 * Callers:
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpFindKeyNameAtIndex(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 >= 8 )
    return a2 + 16 * (a3 - 8 + 6LL);
  else
    return a1 + 16LL * a3;
}
