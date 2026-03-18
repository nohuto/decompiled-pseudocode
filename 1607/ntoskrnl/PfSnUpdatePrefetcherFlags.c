/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x1400B557C
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1400B5554 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x1403D3020 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1403286D0);
  v5 = dword_1403287D0;
  if ( a2 )
    dword_1403287D0 |= a1;
  else
    dword_1403287D0 &= ~a1;
  KeReleaseSpinLock(&qword_1403286D0, v4);
  return v5;
}
