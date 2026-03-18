/*
 * XREFs of PfpServiceMainThreadBoost @ 0x1401175A4
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x1403A6580 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 */

__int64 __fastcall PfpServiceMainThreadBoost(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  KIRQL v6; // al
  __int64 v7; // r8
  KIRQL v8; // r15
  __int64 v9; // rcx

  v2 = a2[1];
  v3 = 0;
  if ( *a2 )
  {
    *(_DWORD *)(v2 + 160) = 1;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    ++*(_DWORD *)(a1 + 112);
    v8 = v6;
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(a1 + 112);
    if ( !*(_QWORD *)(a1 + 88) )
    {
      v9 = *a2;
      *(_QWORD *)(a1 + 88) = *a2;
      *a2 = 0LL;
      *(_DWORD *)(a1 + 96) = KeSetActualBasePriorityThread(v9, 12LL, v7);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 104), v8);
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_BYTE *)(v2 + 64) = 8;
    *(_QWORD *)(v2 + 80) = v2 + 72;
    *(_QWORD *)(v2 + 72) = v2 + 72;
    *(_QWORD *)(v2 + 88) = 0LL;
    *(_QWORD *)(v2 + 120) = 0LL;
    *(_QWORD *)(v2 + 24) = PfpPowerActionDpcRoutine;
    *(_DWORD *)v2 = 275;
    *(_QWORD *)(v2 + 32) = v2;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    KeSetTimer((PKTIMER)(v2 + 64), (LARGE_INTEGER)-200000000LL, (PKDPC)v2);
    a2[1] = 0LL;
  }
  else
  {
    return (unsigned int)-2147483614;
  }
  return v3;
}
