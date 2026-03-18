/*
 * XREFs of KiCompleteKernelInit @ 0x1403A9A9C
 * Callers:
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KeInitializeTimer2 @ 0x140093234 (KeInitializeTimer2.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     KeAttachProcess @ 0x1400C7800 (KeAttachProcess.c)
 *     KiSetProcessorIdle @ 0x1400EC330 (KiSetProcessorIdle.c)
 *     KeAbInitialize @ 0x140136E14 (KeAbInitialize.c)
 *     RtlInitializeHistoryTable @ 0x14076E324 (RtlInitializeHistoryTable.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // di
  bool v9; // zf
  int v11; // [rsp+40h] [rbp+18h] BYREF

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
    KeAbInitialize();
    qword_1402E8B18 = 0LL;
    qword_1402E8B10 = (__int64)&qword_1402E8B08;
    qword_1402E8B08 = (__int64)&qword_1402E8B08;
    KeInitializeTimer2((__int64)KiForegroundState, (__int64)KiForegroundTimerCallback, 0LL, 8);
    KeInitializeDpc((PRKDPC)&Dpc, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc((PRKDPC)&stru_1402E8AC8, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
  }
  v8 = 0;
  _interlockedbittestandset64(
    (volatile signed __int32 *)(*(_QWORD *)(a1 + 1600) + 80LL),
    *(unsigned __int8 *)(a1 + 1617));
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v11, v6, v7);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v9 = *(_QWORD *)(a1 + 16) == 0LL;
  *(_BYTE *)(a1 + 35) = 1;
  if ( v9 )
  {
    v8 = 1;
    KiSetProcessorIdle(a1, 1, 1);
  }
  KiUpdateThreadPriority(a1, a2, 0, v8);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  return KiCreateCpuSetForProcessor(a1);
}
