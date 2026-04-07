/*
 * XREFs of ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x18008B290
 * Callers:
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18008B0C8 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x18008B2D0 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CPenPressHoldVisual::Stop(CPenPressHoldVisual *this)
{
  __int64 v2; // rcx

  CPenPressHoldVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v2, (__int64)&UdwmPenPressHoldVisual_End, 0);
}
