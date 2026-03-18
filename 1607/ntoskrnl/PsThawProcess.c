/*
 * XREFs of PsThawProcess @ 0x14051DFE8
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140469960 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x14061A30C (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14061A408 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x14061ACA0 (DbgkpResumeProcess.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     PspLockProcessExclusive @ 0x140088FB8 (PspLockProcessExclusive.c)
 *     KeThawProcess @ 0x1400C7448 (KeThawProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     PspUnlockProcessExclusive @ 0x1400F22D8 (PspUnlockProcessExclusive.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1404A33DC (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1406A16CC (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A5FA4 (EtwTiLogSuspendResumeProcess.c)
 */

void __fastcall PsThawProcess(__int64 BugCheckParameter1, char a2)
{
  int v4; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r14
  int SessionId; // [rsp+70h] [rbp+18h] BYREF
  int v8; // [rsp+78h] [rbp+20h]

  v4 = *(_DWORD *)(BugCheckParameter1 + 616) + ((*(_DWORD *)(BugCheckParameter1 + 440) >> 3) & 1);
  v8 = v4;
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 936) && (*(_DWORD *)(BugCheckParameter1 + 772) & 8) == 0 )
    {
      SessionId = MmGetSessionIdEx((struct _KPROCESS *)BugCheckParameter1);
      PsInvokeWin32Callout(23, BugCheckParameter1, 1, (__int64)&SessionId);
    }
    v6 = 0LL;
    PspLockProcessExclusive(BugCheckParameter1, (__int64)CurrentThread);
    if ( *(_QWORD *)(BugCheckParameter1 + 1792) )
    {
      v6 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(BugCheckParameter1 + 1792);
      *(_QWORD *)(BugCheckParameter1 + 1792) = 0LL;
      *(_QWORD *)(BugCheckParameter1 + 1880) += v6;
    }
    PspUnlockProcessExclusive(BugCheckParameter1, (__int64)CurrentThread);
    if ( !*(_QWORD *)(BugCheckParameter1 + 720) )
    {
      *(_QWORD *)PspFreezeTimeBiasAddress += v6;
      if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
        *(_QWORD *)PspFreezeTimeBiasAddress32 += v6;
    }
  }
  KeThawProcess(BugCheckParameter1, a2);
  if ( v4 == 1 && (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x10000000) != 0 )
    EtwTiLogSuspendResumeProcess(0LL, CurrentThread, BugCheckParameter1, 3LL);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState((struct _EX_RUNDOWN_REF *)BugCheckParameter1, 2);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v4 )
        EtwTraceFreezeThawProcess(BugCheckParameter1, 0LL);
    }
  }
}
