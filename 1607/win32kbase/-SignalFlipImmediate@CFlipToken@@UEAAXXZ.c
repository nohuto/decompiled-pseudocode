/*
 * XREFs of ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C001C8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CFlipToken::SignalFlipImmediate(CFlipToken *this)
{
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this);
}
