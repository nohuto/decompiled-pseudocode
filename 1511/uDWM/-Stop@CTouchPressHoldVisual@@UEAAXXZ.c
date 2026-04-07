/*
 * XREFs of ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x18009C2C0
 * Callers:
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x18009BBAC (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 * Callees:
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x18009BD74 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x18009C390 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CTouchPressHoldVisual::Stop(CTouchPressHoldVisual *this)
{
  CVisual::ClearInstructions(this);
  CTouchPressHoldVisual::StopTimer(this);
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0);
}
