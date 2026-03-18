/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C00DF990
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0049358 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C0049480 (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CRegion **this)
{
  CFlipExBuffer::SignalMaxGpuFence((CFlipExBuffer *)this);
  CFlipExBuffer::ReleasePendingPresentLimits((CFlipExBuffer *)this);
  CRegion::SetFullRegion(this[36]);
}
