/*
 * XREFs of ExDeletePagedLookasideList @ 0x1400A6CD8
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14061D45C (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x1400A6DAC (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside, 1LL);
}
