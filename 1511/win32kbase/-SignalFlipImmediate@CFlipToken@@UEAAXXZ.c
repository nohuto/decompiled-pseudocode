/*
 * XREFs of ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C00E3250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipToken::SignalFlipImmediate(CFlipToken *this)
{
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, 0);
}
