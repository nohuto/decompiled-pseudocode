/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C00F3F70
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C001D8C0 (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C001D958 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CRegion **this)
{
  CFlipExBuffer::SignalMaxGpuFence((CFlipExBuffer *)this);
  CFlipExBuffer::ReleasePendingPresentLimits((CFlipExBuffer *)this);
  CRegion::SetFullRegion(this[32]);
}
