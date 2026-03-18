/*
 * XREFs of ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C003ED88
 * Callers:
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C003DAF0 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?SignalPresentLimitSemaphore@CFlipExBuffer@@UEBAXXZ @ 0x1C003E020 (-SignalPresentLimitSemaphore@CFlipExBuffer@@UEBAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SignalPresentLimitSemaphore(struct _KSEMAPHORE *a1, LONG a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 <= 0 )
    return (unsigned int)-1073741811;
  else
    KeReleaseSemaphore(a1, 1, a2, 0);
  return v2;
}
