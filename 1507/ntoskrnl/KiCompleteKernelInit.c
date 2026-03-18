/*
 * XREFs of KiCompleteKernelInit @ 0x1403F98E4
 * Callers:
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeInitializeTimer2 @ 0x14002F848 (KeInitializeTimer2.c)
 *     KiAbProcessThreadPriorityModification @ 0x14009C0D0 (KiAbProcessThreadPriorityModification.c)
 *     KiSetProcessorIdle @ 0x1400D53B0 (KiSetProcessorIdle.c)
 *     KeAttachProcess @ 0x14010C324 (KeAttachProcess.c)
 *     KeAbInitialize @ 0x14016354C (KeAbInitialize.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiUpdatePriorityMatrix @ 0x14017E4D4 (KiUpdatePriorityMatrix.c)
 *     RtlInitializeHistoryTable @ 0x1407E36A4 (RtlInitializeHistoryTable.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  char v6; // bp
  unsigned int v7; // edi
  bool v8; // zf

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
    qword_140338F98 = 0LL;
    qword_140338F90 = (__int64)&qword_140338F88;
    qword_140338F88 = (__int64)&qword_140338F88;
    KeInitializeTimer2((__int64)&KiForegroundState, (__int64)KiForegroundTimerCallback, 0LL, 8);
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc(&stru_140338F48, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
  }
  v6 = 0;
  _interlockedbittestandset64(
    (volatile signed __int32 *)(*(_QWORD *)(a1 + 1600) + 80LL),
    *(unsigned __int8 *)(a1 + 1617));
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( *(_QWORD *)(a1 + 48) );
  }
  v8 = *(_QWORD *)(a1 + 16) == 0LL;
  *(_BYTE *)(a1 + 35) = 1;
  if ( v8 )
  {
    v6 = 1;
    KiSetProcessorIdle(a1, 1, 1);
  }
  KiAbProcessThreadPriorityModification(a2, 0, 1);
  *(_BYTE *)(a2 + 195) = 0;
  if ( v6 )
    KiUpdatePriorityMatrix(a1, a2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  return KiCreateCpuSetForProcessor(a1);
}
