/*
 * XREFs of PsFreezeProcess @ 0x140452D70
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x1404A46AC (DbgkpSuspendProcess.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeForceResumeProcess @ 0x1400946B4 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x140096ED4 (KeFreezeProcess.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x14044B0E4 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x140660954 (EtwTraceFreezeThawProcess.c)
 */

char __fastcall PsFreezeProcess(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rdx
  int SessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
    return 0;
  KeFreezeProcess(a1, a2);
  if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
  {
    KeForceResumeProcess(a1);
    return 0;
  }
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessExclusive(a1, (__int64)CurrentThread);
    *(_QWORD *)(a1 + 1776) = KiQueryUnbiasedInterruptTime();
    PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 936) )
    {
      SessionId = MmGetSessionIdEx((struct _KPROCESS *)a1);
      PsInvokeWin32Callout((_KPROCESS *)0x16, a1, 1, (int)&SessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v5) = 1;
      EtwTraceFreezeThawProcess(a1, v5);
    }
    PsSetProcessTelemetryAppState((_QWORD *)a1, 1);
  }
  return 1;
}
