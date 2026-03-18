/*
 * XREFs of PsSuspendProcess @ 0x140518CC0
 * Callers:
 *     NtSuspendProcess @ 0x140518C58 (NtSuspendProcess.c)
 *     PspFreezeProcessWorker @ 0x1406418B0 (PspFreezeProcessWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 *     PsSuspendThread @ 0x1404B09A0 (PsSuspendThread.c)
 */

__int64 __fastcall PsSuspendProcess(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *v3; // r14
  _QWORD *NextProcessThread; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 92;
  if ( ExAcquireRundownProtection(a1 + 92) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread((__int64)a1, 0LL);
    v5 = 0;
    while ( 1 )
    {
      v6 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      PsSuspendThread((__int64)NextProcessThread, 0LL);
      NextProcessThread = PsGetNextProcessThread((__int64)a1, v6);
    }
    ExReleaseRundownProtection_0(v3);
  }
  else
  {
    v5 = -1073741558;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v5;
}
