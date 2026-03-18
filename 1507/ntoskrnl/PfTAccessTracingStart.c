/*
 * XREFs of PfTAccessTracingStart @ 0x1403EBE7C
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x1403EEF80 (PfpPowerActionStartScenarioTracing.c)
 *     PfGetCompletedTrace @ 0x1404F74C8 (PfGetCompletedTrace.c)
 *     PfTStart @ 0x1405B6200 (PfTStart.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x140043E3C (MmGetDefaultPagePriority.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x140100EDC (MmSetAccessLogging.c)
 *     MmEnablePeriodicAccessClearing @ 0x1403EC110 (MmEnablePeriodicAccessClearing.c)
 */

void __fastcall PfTAccessTracingStart(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // ebp
  bool v13; // zf
  int DefaultPagePriority; // eax
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(a1 + 16, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (ULONG_PTR)v5, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = ~a3;
  v13 = (v12 & *(_DWORD *)(a1 + 12)) == 0;
  *(_DWORD *)(a1 + 12) &= v12;
  if ( v13 )
  {
    *(_DWORD *)(a2 + 40) = 256;
    DefaultPagePriority = MmGetDefaultPagePriority();
    MmSetAccessLogging(1, DefaultPagePriority);
    LOBYTE(v15) = 1;
    MmEnablePeriodicAccessClearing(v15);
  }
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
