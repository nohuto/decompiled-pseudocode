/*
 * XREFs of PfTAccessTracingCleanup @ 0x1403EBF78
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x1403EEF80 (PfpPowerActionStartScenarioTracing.c)
 *     PfTTraceListAdd @ 0x1404F8FF0 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x140043E3C (MmGetDefaultPagePriority.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     MmFreeAccessPfnBuffer @ 0x1400D79C8 (MmFreeAccessPfnBuffer.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x140100EDC (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 *     PfTAccessTracingInitialize @ 0x1403EC0C0 (PfTAccessTracingInitialize.c)
 *     MmEnablePeriodicAccessClearing @ 0x1403EC110 (MmEnablePeriodicAccessClearing.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  char v8; // r15
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  int DefaultPagePriority; // eax
  unsigned __int64 v13; // rax
  PSLIST_ENTRY v14; // rsi
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 16);
  v8 = a3 == 4;
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(a1 + 16, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (ULONG_PTR)v5, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  dword_140367DA8 = 0;
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140367D88, 1LL, 0LL);
  if ( v13 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&stru_140367D88, v13);
  v14 = RtlpInterlockedFlushSList(&stru_140367DC0);
  while ( v14 )
  {
    v15 = (__int64)v14;
    v14 = v14->Next;
    MmFreeAccessPfnBuffer(v15, v8);
  }
  MmEnablePeriodicAccessClearing(0LL);
  PfTAccessTracingInitialize(a1, &PfKernelGlobals, 1LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
