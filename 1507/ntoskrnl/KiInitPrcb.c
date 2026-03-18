/*
 * XREFs of KiInitPrcb @ 0x1403F7D4C
 * Callers:
 *     KiInitializeBootStructures @ 0x1403F77B0 (KiInitializeBootStructures.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     KiInitializeDpcList @ 0x140131B94 (KiInitializeDpcList.c)
 *     KiIntSteerInitPrcb @ 0x140131BA0 (KiIntSteerInitPrcb.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall KiInitPrcb(__int64 a1, int a2)
{
  _QWORD *v3; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 i; // rcx

  *(_DWORD *)(a1 + 22688) = 1;
  *(_DWORD *)(a1 + 22680) = 0;
  *(_QWORD *)(a1 + 11400) = 0LL;
  v3 = (_QWORD *)(a1 + 22784);
  v5 = 32LL;
  v6 = 32LL;
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v6;
  }
  while ( v6 );
  v7 = 0LL;
  **(_QWORD **)(a1 + 24776) = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 24776) + 8LL) = 0;
  do
  {
    v8 = (_QWORD *)(v7 + *(_QWORD *)(a1 + 24776) + 16LL);
    v7 += 16LL;
    v8[1] = v8;
    *v8 = v8;
    --v5;
  }
  while ( v5 );
  memset((void *)(*(_QWORD *)(a1 + 24776) + 528LL), 127, 0x40uLL);
  *(_BYTE *)(*(_QWORD *)(a1 + 24776) + 592LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 24776) + 593LL) = *(_BYTE *)(a1 + 1617);
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(*(_QWORD *)(a1 + 24776) + i + 594) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 24776) + 600LL) = *(_QWORD *)(a1 + 1608);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 24776) + 528LL;
  KiInitializeDpcList((_QWORD *)(a1 + 11648));
  *(_QWORD *)(a1 + 11664) = 0LL;
  *(_DWORD *)(a1 + 11672) = 0;
  *(_DWORD *)(a1 + 11676) = 0;
  *(_DWORD *)(a1 + 11756) = 0;
  *(_BYTE *)(a1 + 11754) = 0;
  *(_DWORD *)(a1 + 11736) = KiMaximumDpcQueueDepth;
  *(_DWORD *)(a1 + 11744) = KiMinimumDpcRate;
  *(_DWORD *)(a1 + 23316) = KiAdjustDpcThreshold;
  KeInitializeDpc((PRKDPC)(a1 + 22560), (PKDEFERRED_ROUTINE)KiDpcWatchdog, 0LL);
  *(_BYTE *)(a1 + 22561) = 2;
  *(_WORD *)(a1 + 22562) = a2 + 640;
  *(_QWORD *)(a1 + 22664) = a1 + 22656;
  *(_QWORD *)(a1 + 22656) = a1 + 22656;
  InitializeSListHead((PSLIST_HEADER)(a1 + 24544));
  KeGetPcr()->NtTib.ArbitraryUserPointer = (void *)(a1 + 1648);
  *(_QWORD *)(a1 + 1880) = &CcBcbSpinLock;
  *(_QWORD *)(a1 + 1872) = 0LL;
  *(_QWORD *)(a1 + 1736) = &CcMasterSpinLock;
  *(_QWORD *)(a1 + 1720) = &CcVacbSpinLock;
  *(_QWORD *)(a1 + 1784) = &CcWorkQueueSpinLock;
  *(_QWORD *)(a1 + 1752) = &NonPagedPoolLock;
  *(_QWORD *)(a1 + 1768) = &IopCancelSpinLock;
  *(_QWORD *)(a1 + 1800) = &IopVpbSpinLock;
  *(_QWORD *)(a1 + 1816) = &IopDatabaseLock;
  *(_QWORD *)(a1 + 1832) = &IopCompletionLock;
  *(_QWORD *)(a1 + 1848) = &NtfsStructLock;
  *(_QWORD *)(a1 + 1864) = &AfdWorkQueueSpinLock;
  *(_QWORD *)(a1 + 1728) = 0LL;
  *(_QWORD *)(a1 + 1712) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_QWORD *)(a1 + 1744) = 0LL;
  *(_QWORD *)(a1 + 1760) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1808) = 0LL;
  *(_QWORD *)(a1 + 1824) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1856) = 0LL;
  *(_QWORD *)(a1 + 1904) = 0LL;
  *(_QWORD *)(a1 + 1912) = 0LL;
  *(_DWORD *)(a1 + 25248) = (3 * (_WORD)a2) & 0x3FF;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 22672) = 0LL;
  *(_DWORD *)(a1 + 22624) = 1;
  KeInitializeDpc((PRKDPC)(a1 + 25512), (PKDEFERRED_ROUTINE)KiEntropyDpcRoutine, (PVOID)(a1 + 25248));
  if ( !a2 )
  {
    KiClockPollCycle = KiClockKeepAliveCycle;
    KiReverseStallIpiLock = 0LL;
    CcBcbSpinLock = 0LL;
    CcMasterSpinLock = 0LL;
    CcVacbSpinLock = 0LL;
    CcWorkQueueSpinLock = 0LL;
    IopCancelSpinLock = 0LL;
    IopCompletionLock = 0LL;
    IopDatabaseLock = 0LL;
    IopVpbSpinLock = 0LL;
    NonPagedPoolLock = 0LL;
    NtfsStructLock = 0LL;
    AfdWorkQueueSpinLock = 0LL;
    KeSleepingProcessors = 1310740LL;
    memset(qword_140332B28, 0, sizeof(qword_140332B28));
  }
  KiIntSteerInitPrcb(a1);
  KeInitializeDpc((PRKDPC)(a1 + 25664), (PKDEFERRED_ROUTINE)KiAbDeferredProcessingWorker, 0LL);
  *(_WORD *)(a1 + 25666) = a2 + 640;
}
