/*
 * XREFs of ?Discard@CFlipToken@@UEAAXXZ @ 0x1C001C6B0
 * Callers:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C001CAF8 (--1CFlipToken@@MEAA@XZ.c)
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C001C510 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C001C598 (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 */

void __fastcall CFlipToken::Discard(CFlipToken *this)
{
  *((_DWORD *)this + 6) = 6;
  CFlipToken::TraceStateChanged(this);
  CFlipToken::ConfirmIndependentFlipEntry(this);
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this);
}
