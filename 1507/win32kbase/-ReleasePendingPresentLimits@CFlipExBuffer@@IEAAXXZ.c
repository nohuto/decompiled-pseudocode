/*
 * XREFs of ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0049358
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C0049E18 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C00DF990 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C004C348 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 */

void __fastcall CFlipExBuffer::ReleasePendingPresentLimits(CFlipExBuffer *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 88);
  if ( v1 > 0 )
  {
    SignalPresentLimitSemaphore(*((struct _KSEMAPHORE **)this + 43), v1);
    *((_DWORD *)this + 88) = 0;
  }
}
