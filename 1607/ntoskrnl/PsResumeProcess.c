/*
 * XREFs of PsResumeProcess @ 0x1404B270C
 * Callers:
 *     NtResumeProcess @ 0x140682040 (NtResumeProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResumeThread @ 0x1400A1168 (KeResumeThread.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A60DC (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsResumeProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 NextProcessThread; // rax
  unsigned int v8; // ebx
  __int64 v9; // rbp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 736);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 736)) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v8 = 0;
    while ( 1 )
    {
      v9 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      KeResumeThread(NextProcessThread);
      NextProcessThread = PsGetNextProcessThread(a1, v9);
    }
    ExReleaseRundownProtection(v3);
  }
  else
  {
    v8 = -1073741558;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v4, v5, v6);
  if ( (*(_DWORD *)(a1 + 1740) & 0x10000000) != 0 )
    EtwTiLogSuspendResumeProcess(v8, CurrentThread, a1, 1LL);
  return v8;
}
