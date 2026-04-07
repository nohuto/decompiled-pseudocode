/*
 * XREFs of ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x180092E40
 * Callers:
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x180092D30 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x180092EA0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800476B4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x180092D60 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StopTimer(CIndirectTouchVisual *this)
{
  CTouchVisual *v1; // rcx

  CIndirectTouchVisual::StopAllTimelines(this);
  CTouchVisual::UnRegisterGlobalTimer(v1);
  return 0LL;
}
