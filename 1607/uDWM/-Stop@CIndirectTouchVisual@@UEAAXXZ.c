/*
 * XREFs of ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x180091680
 * Callers:
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x180091370 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 * Callees:
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800915F0 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x180091770 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CIndirectTouchVisual::Stop(CIndirectTouchVisual *this)
{
  CIndirectTouchVisual::StopTimer(this);
  CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0);
}
