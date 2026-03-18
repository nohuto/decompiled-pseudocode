/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1400E92C4
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14051B0C0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 *     VerifierExDeleteNPagedLookasideList @ 0x1406C8868 (VerifierExDeleteNPagedLookasideList.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x1400E93A0 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside, 1LL);
}
