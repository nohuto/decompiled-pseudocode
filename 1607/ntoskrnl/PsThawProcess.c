/*
 * XREFs of PsThawProcess @ 0x140501050
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14061A4BC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x14061AD54 (DbgkpResumeProcess.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeThawProcess @ 0x1400C52E8 (KeThawProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x14051B7DC (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1406A1804 (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1406A60DC (EtwTiLogSuspendResumeProcess.c)
 */

void __fastcall PsThawProcess(ULONG_PTR BugCheckParameter1, char a2)
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
    PsSetProcessTelemetryAppState(BugCheckParameter1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v4 )
        EtwTraceFreezeThawProcess(BugCheckParameter1, 0LL);
    }
  }
}
