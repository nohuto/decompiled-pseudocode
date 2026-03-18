/*
 * XREFs of ?SignalDirectFlipFence@CFlipToken@@UEAAXXZ @ 0x1C00E1140
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalGpuFence@CFlipToken@@IEAAXXZ @ 0x1C00A40D8 (-SignalGpuFence@CFlipToken@@IEAAXXZ.c)
 */

void __fastcall CFlipToken::SignalDirectFlipFence(CFlipToken *this)
{
  CFlipToken::SignalGpuFence(this);
  CFlipToken::SignalPresentLimitSemaphore(this);
}
