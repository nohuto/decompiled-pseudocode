/*
 * XREFs of ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180046E50
 * Callers:
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180046F68 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F33C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x18006F4F4 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 * Callees:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180046E00 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::Stop(CDirectTouchVisual *this)
{
  CDirectTouchVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
