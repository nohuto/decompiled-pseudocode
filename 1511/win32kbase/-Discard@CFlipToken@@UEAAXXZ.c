/*
 * XREFs of ?Discard@CFlipToken@@UEAAXXZ @ 0x1C003BF70
 * Callers:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C003C4BC (--1CFlipToken@@MEAA@XZ.c)
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C003BC84 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C003BE18 (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 */

void __fastcall CFlipToken::Discard(CFlipToken *this)
{
  *((_DWORD *)this + 6) = 6;
  CFlipToken::TraceStateChanged(this);
  CFlipToken::ConfirmIndependentFlipEntry(this);
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, 0);
}
