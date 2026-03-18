/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x1401489E0
 * Callers:
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 *     PfpLogScenarioEvent @ 0x1405667B8 (PfpLogScenarioEvent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(unsigned int Priority, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  unsigned int v10; // edi
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax

  if ( Priority > 0x1F )
  {
    return 32;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&PfTGlobals, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&PfTGlobals, 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&PfTGlobals, v6, (ULONG_PTR)&PfTGlobals, v7);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    if ( Thread )
      v10 = KeSetPriorityThread(Thread, Priority);
    else
      v10 = 33;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    v11 = KeGetCurrentThread();
    v12 = v11->KernelApcDisable + 1;
    v11->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
      && !v11->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v10;
}
