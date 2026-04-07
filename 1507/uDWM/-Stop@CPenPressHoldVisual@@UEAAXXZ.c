/*
 * XREFs of ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800883E0
 * Callers:
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180088218 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     Template_q @ 0x180074F24 (Template_q.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x180088420 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CPenPressHoldVisual::Stop(CPenPressHoldVisual *this)
{
  __int64 v2; // rcx

  CPenPressHoldVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v2, (__int64)&UdwmPenPressHoldVisual_End, 0);
}
