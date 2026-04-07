/*
 * XREFs of ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x180082A00
 * Callers:
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x1800823A8 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180082590 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x180082AB0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 * Callees:
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x180082A30 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

void __fastcall CContactStationaryVisual::Stop(CContactStationaryVisual *this)
{
  CContactStationaryVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
