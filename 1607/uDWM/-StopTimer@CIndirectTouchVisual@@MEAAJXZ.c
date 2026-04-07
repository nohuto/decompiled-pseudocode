/*
 * XREFs of ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x180091770
 * Callers:
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x180091680 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800917D0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800488A0 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800916B0 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StopTimer(CIndirectTouchVisual *this)
{
  CTouchVisual *v1; // rcx

  CIndirectTouchVisual::StopAllTimelines(this);
  CTouchVisual::UnRegisterGlobalTimer(v1);
  return 0LL;
}
