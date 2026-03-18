/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x140149954
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14061D3A8 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x1400A8834 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside, 1);
}
