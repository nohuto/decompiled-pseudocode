/*
 * XREFs of PopGetCurrentHiberActionSource @ 0x14010EDF0
 * Callers:
 *     PopWnfAudioCallback @ 0x14052979C (PopWnfAudioCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopGetCurrentHiberActionSource()
{
  unsigned int v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140303304 )
    v0 = dword_140303308;
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
  return v0;
}
