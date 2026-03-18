/*
 * XREFs of PsResumeProcess @ 0x1404A75D0
 * Callers:
 *     NtResumeProcess @ 0x14051A788 (NtResumeProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResumeThread @ 0x1400E2E00 (KeResumeThread.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PsResumeProcess(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v3; // r14
  _QWORD *NextProcessThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  _QWORD *v8; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 92;
  if ( ExAcquireRundownProtection(a1 + 92) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread((__int64)a1, 0LL);
    v7 = 0;
    while ( 1 )
    {
      v8 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      KeResumeThread((__int64)NextProcessThread, v5, v6);
      NextProcessThread = PsGetNextProcessThread((__int64)a1, v8);
    }
    ExReleaseRundownProtection_0(v3);
  }
  else
  {
    v7 = -1073741558;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v7;
}
