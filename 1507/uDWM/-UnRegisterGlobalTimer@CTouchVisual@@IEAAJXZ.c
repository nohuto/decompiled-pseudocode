/*
 * XREFs of ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800477B4
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180046F00 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x180067980 (-StopTimer@CTouchDragVisual@@MEAAJXZ.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x180082A30 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x180083AB0 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800860F0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x180086CE8 (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x180086D40 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x180087FC0 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x180088420 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x180088B10 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x18008FDD0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x18009ACC0 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18001281C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTouchVisual::UnRegisterGlobalTimer(CTouchVisual *this)
{
  if ( *((_BYTE *)this + 264) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 264) = 0;
  }
  return 0LL;
}
