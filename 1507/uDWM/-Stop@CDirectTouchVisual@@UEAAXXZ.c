/*
 * XREFs of ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180046F50
 * Callers:
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180047068 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180081E04 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180081F14 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180046F00 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::Stop(CDirectTouchVisual *this)
{
  CDirectTouchVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
