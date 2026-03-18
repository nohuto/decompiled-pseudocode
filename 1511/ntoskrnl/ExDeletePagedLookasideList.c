/*
 * XREFs of ExDeletePagedLookasideList @ 0x1400E9298
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14051B0C0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 *     VerifierExDeletePagedLookasideList @ 0x1406C8888 (VerifierExDeletePagedLookasideList.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x1400E93A0 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside, 1LL);
}
