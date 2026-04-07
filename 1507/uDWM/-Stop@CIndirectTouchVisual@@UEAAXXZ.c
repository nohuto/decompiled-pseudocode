/*
 * XREFs of ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x18008FCC0
 * Callers:
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x18008F4A8 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 * Callees:
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x18008F730 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x18008FDD0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CIndirectTouchVisual::Stop(CIndirectTouchVisual *this)
{
  CIndirectTouchVisual::StopTimer(this);
  CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0);
}
