/*
 * XREFs of PpmParkSnapNodeIdleTime @ 0x14020E258
 * Callers:
 *     PopAccumulateNonActivatedCpuTime @ 0x140207030 (PopAccumulateNonActivatedCpuTime.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1402009C4 (PpmIdleSnapConcurrencyIdleTime.c)
 */

void __fastcall PpmParkSnapNodeIdleTime(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  KIRQL v6; // bp
  unsigned int v7; // edx
  KSPIN_LOCK *v8; // rcx

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1600) + 146LL);
  if ( v7 <= PpmParkNumNodes )
  {
    v8 = (KSPIN_LOCK *)*((_QWORD *)PpmParkNodes + 15 * (unsigned __int16)v7 + 6);
    if ( v8 )
      PpmIdleSnapConcurrencyIdleTime(v8, a2, a3);
  }
  KeReleaseSpinLock(&PpmParkStateLock, v6);
}
