/*
 * XREFs of PsFreezeProcess @ 0x14051E428
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140469960 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x14061ADB4 (DbgkpSuspendProcess.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     PspLockProcessExclusive @ 0x140088FB8 (PspLockProcessExclusive.c)
 *     KeForceResumeProcess @ 0x1400C8E70 (KeForceResumeProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     PspUnlockProcessExclusive @ 0x1400F22D8 (PspUnlockProcessExclusive.c)
 *     KeFreezeProcessNew @ 0x1401D2130 (KeFreezeProcessNew.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1404A33DC (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1406A16CC (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A5FA4 (EtwTiLogSuspendResumeProcess.c)
 */

char __fastcall PsFreezeProcess(__int64 BugCheckParameter1, char a2)
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
    PsSetProcessTelemetryAppState((struct _EX_RUNDOWN_REF *)BugCheckParameter1, 1);
  }
  return 1;
}
