/*
 * XREFs of PsResumeProcess @ 0x140551728
 * Callers:
 *     NtResumeProcess @ 0x14040A48C (NtResumeProcess.c)
 * Callees:
 *     KeResumeThread @ 0x14000C8A4 (KeResumeThread.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PsResumeProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *v6; // rbx
  unsigned __int64 v7; // rtt
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rtt
  unsigned int v12; // ebx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = a1 + 92;
  _m_prefetchw(&a1[92]);
  v7 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v7 + 2, v7)
    || ExfAcquireRundownProtection(a1 + 92) == 1 )
  {
    for ( i = 0LL; ; i = v10 )
    {
      NextProcessThread = PsGetNextProcessThread((__int64)a1, i, a3, a4);
      v10 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      KeResumeThread((__int64)NextProcessThread);
    }
    _m_prefetchw(v6);
    v11 = v6->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v11 - 2, v11) )
      ExfReleaseRundownProtection(v6);
    v12 = 0;
  }
  else
  {
    v12 = -1073741558;
  }
  v13 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v12;
}
