/*
 * XREFs of ?SignalPresentLimitSemaphore@CFlipExBuffer@@UEBAXXZ @ 0x1C0049950
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C004C348 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 */

void __fastcall CFlipExBuffer::SignalPresentLimitSemaphore(struct _KSEMAPHORE **this)
{
  if ( *((int *)this + 88) > 0 )
  {
    SignalPresentLimitSemaphore(this[43], 1);
    --*((_DWORD *)this + 88);
  }
}
