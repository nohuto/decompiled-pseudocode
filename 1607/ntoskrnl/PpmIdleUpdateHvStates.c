/*
 * XREFs of PpmIdleUpdateHvStates @ 0x140676470
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x1401BAD24 (HvlGetLpIndexFromApicId.c)
 */

__int64 __fastcall PpmIdleUpdateHvStates(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int LpIndexFromApicId; // eax

  if ( (HvlEnlightenments & 0x408) == 0 )
    return 3221225659LL;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(*(unsigned int *)(a1 + 4), a2, a3, a4);
  if ( LpIndexFromApicId == -1 )
    return 3221225485LL;
  else
    return HvlConfigureIdleStates(LpIndexFromApicId, *(_OWORD **)(a1 + 8));
}
