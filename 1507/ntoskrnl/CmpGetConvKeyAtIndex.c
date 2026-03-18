/*
 * XREFs of CmpGetConvKeyAtIndex @ 0x140050170
 * Callers:
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetConvKeyAtIndex(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 >= 8 )
    return *(unsigned int *)(a2 + 4LL * (a3 - 8));
  else
    return *(unsigned int *)(a1 + 4LL * a3);
}
