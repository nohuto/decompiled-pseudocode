/*
 * XREFs of PpProfileMarkAllTransitioningDocksEjected @ 0x1406426CC
 * Callers:
 *     PnpProcessCompletedEject @ 0x14062E050 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
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
