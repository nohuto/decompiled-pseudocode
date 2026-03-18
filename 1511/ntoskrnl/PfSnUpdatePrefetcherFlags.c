/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x1400F3CC4
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1400F3C9C (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x1403A6AC8 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1403058D0);
  v5 = dword_1403059D0;
  if ( a2 )
    dword_1403059D0 |= a1;
  else
    dword_1403059D0 &= ~a1;
  KeReleaseSpinLock(&qword_1403058D0, v4);
  return v5;
}
