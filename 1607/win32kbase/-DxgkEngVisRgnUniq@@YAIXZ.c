/*
 * XREFs of ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C007D6E0
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 DxgkEngVisRgnUniq(void)
{
  unsigned int v0; // ebx

  if ( ghsemVisRgnUniqueness )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemVisRgnUniqueness");
  v0 = giVisRgnUniqueness + LODWORD(WPP_MAIN_CB.DeviceQueue.Lock);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemVisRgnUniqueness");
  GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
  return v0;
}
