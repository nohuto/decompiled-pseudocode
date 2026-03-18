/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C00E1860
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C003DAF0 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C003DB2C (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CRegion **this)
{
  CFlipExBuffer::SignalMaxGpuFence((CFlipExBuffer *)this);
  CFlipExBuffer::ReleasePendingPresentLimits((CFlipExBuffer *)this);
  CRegion::SetFullRegion(this[37]);
}
