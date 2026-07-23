/*
 * XREFs of KiCompleteKernelInit @ 0x1403D46A0
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KeAttachProcess @ 0x1400AC4A0 (KeAttachProcess.c)
 *     KiSetProcessorIdle @ 0x1400ACFA8 (KiSetProcessorIdle.c)
 *     RtlInitializeHistoryTable @ 0x1407B82C0 (RtlInitializeHistoryTable.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  char v6; // di
  bool v7; // zf
  int v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
  {
    *(_DWORD *)(a1 + 11736) = KiMaximumDpcQueueDepth;
    *(_DWORD *)(a1 + 11744) = KiMinimumDpcRate;
    *(_DWORD *)(a1 + 23316) = KiAdjustDpcThreshold;
    RtlInitializeHistoryTable();
  }
  __writecr8(2uLL);
  _enable();
  KeAttachProcess(PsInitialSystemProcess);
  if ( !a3 )
  {
    qword_14030E518 = 0LL;
    qword_14030E510 = (__int64)&qword_14030E508;
    qword_14030E508 = (__int64)&qword_14030E508;
    KeInitializeTimer2((__int64)&KiForegroundState, (__int64)KiForegroundTimerCallback, 0LL, 8);
    KeInitializeDpc((PRKDPC)&Dpc, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc((PRKDPC)&stru_14030E4C8, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
  }
  v6 = 0;
  _interlockedbittestandset64(
    (volatile signed __int32 *)(*(_QWORD *)(a1 + 1600) + 80LL),
    *(unsigned __int8 *)(a1 + 1617));
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v7 = *(_QWORD *)(a1 + 16) == 0LL;
  *(_BYTE *)(a1 + 35) = 1;
  if ( v7 )
  {
    v6 = 1;
    KiSetProcessorIdle(a1, 1, 1);
  }
  KiUpdateThreadPriority(a1, a2, 0, v6);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  return KiCreateCpuSetForProcessor(a1);
}
