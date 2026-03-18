/*
 * XREFs of PsSuspendProcess @ 0x1404098CC
 * Callers:
 *     NtSuspendProcess @ 0x140409864 (NtSuspendProcess.c)
 *     PspFreezeProcessWorker @ 0x1406C3DD0 (PspFreezeProcessWorker.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     PsSuspendThread @ 0x1404F399C (PsSuspendThread.c)
 */

__int64 __fastcall PsSuspendProcess(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *v3; // rbx
  unsigned __int64 v4; // rtt
  __int64 i; // rdx
  __int64 NextProcessThread; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rtt
  unsigned int v9; // ebx
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 92;
  _m_prefetchw(&a1[92]);
  v4 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v4 == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v4 + 2, v4)
    || ExfAcquireRundownProtection(a1 + 92) == 1 )
  {
    for ( i = 0LL; ; i = v7 )
    {
      NextProcessThread = PsGetNextProcessThread(a1, i);
      v7 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      PsSuspendThread(NextProcessThread, 0LL);
    }
    _m_prefetchw(v3);
    v8 = v3->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8 - 2, v8) )
      ExfReleaseRundownProtection(v3);
    v9 = 0;
  }
  else
  {
    v9 = -1073741558;
  }
  v10 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v9;
}
