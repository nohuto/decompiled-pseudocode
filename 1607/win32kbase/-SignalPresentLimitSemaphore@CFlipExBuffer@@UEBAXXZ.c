/*
 * XREFs of ?SignalPresentLimitSemaphore@CFlipExBuffer@@UEBAXXZ @ 0x1C001E130
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C001F138 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 */

void __fastcall CFlipExBuffer::SignalPresentLimitSemaphore(struct _KSEMAPHORE **this)
{
  if ( *((int *)this + 78) > 0 )
  {
    SignalPresentLimitSemaphore(this[38], 1);
    --*((_DWORD *)this + 78);
  }
}
