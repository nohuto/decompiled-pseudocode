/*
 * XREFs of PpProfileMarkAllTransitioningDocksEjected @ 0x1406425E8
 * Callers:
 *     PnpProcessCompletedEject @ 0x14062DF9C (PnpProcessCompletedEject.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 */

void PpProfileMarkAllTransitioningDocksEjected()
{
  __int64 *i; // rax

  ExAcquireFastMutex(&PiProfileDeviceListLock);
  for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) != 1 )
      *((_DWORD *)i - 2) = 4;
  }
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
}
