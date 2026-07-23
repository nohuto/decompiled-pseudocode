/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x1400B33A4
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1400B337C (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x1403D3020 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140328710);
  v5 = dword_140328810;
  if ( a2 )
    dword_140328810 |= a1;
  else
    dword_140328810 &= ~a1;
  KeReleaseSpinLock(&qword_140328710, v4);
  return v5;
}
