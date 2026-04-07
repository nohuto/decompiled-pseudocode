/*
 * XREFs of ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x180098F10
 * Callers:
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x18009892C (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 * Callees:
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x180098A94 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x180098FD0 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CTouchPressHoldVisual::Stop(CTouchPressHoldVisual *this)
{
  CVisual::ClearInstructions(this);
  CTouchPressHoldVisual::StopTimer(this);
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0);
}
