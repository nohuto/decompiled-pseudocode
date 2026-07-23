/*
 * XREFs of PsFreezeProcess @ 0x140501490
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x14061AE68 (DbgkpSuspendProcess.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeForceResumeProcess @ 0x1400C6D10 (KeForceResumeProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 *     KeFreezeProcessNew @ 0x1401D1F5C (KeFreezeProcessNew.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x14051B7DC (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1406A1804 (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A60DC (EtwTiLogSuspendResumeProcess.c)
 */

char __fastcall PsFreezeProcess(ULONG_PTR BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v6; // eax
  struct _KTHREAD *v7; // rbx
  __int64 v8; // rdx
  int SessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 8) != 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v6 = KeFreezeProcessNew(BugCheckParameter1, a2);
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 8) != 0 )
  {
    KeForceResumeProcess(BugCheckParameter1);
    return 0;
  }
  if ( !v6 && (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x10000000) != 0 )
    EtwTiLogSuspendResumeProcess(0LL, CurrentThread, BugCheckParameter1, 2LL);
  if ( a2 )
  {
    v7 = KeGetCurrentThread();
    PspLockProcessExclusive(BugCheckParameter1, (__int64)v7);
    *(_QWORD *)(BugCheckParameter1 + 1792) = KiQueryUnbiasedInterruptTime();
    PspUnlockProcessExclusive(BugCheckParameter1, (__int64)v7);
    if ( *(_QWORD *)(BugCheckParameter1 + 936) )
    {
      SessionId = MmGetSessionIdEx((struct _KPROCESS *)BugCheckParameter1);
      PsInvokeWin32Callout(22, BugCheckParameter1, 1, (__int64)&SessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v8) = 1;
      EtwTraceFreezeThawProcess(BugCheckParameter1, v8);
    }
    PsSetProcessTelemetryAppState(BugCheckParameter1);
  }
  return 1;
}
