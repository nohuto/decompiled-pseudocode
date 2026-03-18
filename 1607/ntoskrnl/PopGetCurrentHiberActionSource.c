/*
 * XREFs of PopGetCurrentHiberActionSource @ 0x14010E88C
 * Callers:
 *     PopWnfAudioCallback @ 0x14052925C (PopWnfAudioCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopGetCurrentHiberActionSource()
{
  unsigned int v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_1403033C4 )
    v0 = dword_1403033C8;
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
  return v0;
}
