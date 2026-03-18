/*
 * XREFs of CmpGetConvKeyAtIndex @ 0x140041F90
 * Callers:
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
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
