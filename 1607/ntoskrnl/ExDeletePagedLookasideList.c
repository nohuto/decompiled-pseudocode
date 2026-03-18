/*
 * XREFs of ExDeletePagedLookasideList @ 0x1400A8760
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14061D3A8 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x1400A8834 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside, 1LL);
}
