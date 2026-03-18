/*
 * XREFs of CmpFindKeyNameAtIndex @ 0x140041F60
 * Callers:
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
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
