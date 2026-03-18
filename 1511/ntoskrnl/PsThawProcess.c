/*
 * XREFs of PsThawProcess @ 0x1404529E8
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1404AAA54 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendApiMessage @ 0x1405F071C (DbgkpSendApiMessage.c)
 *     DbgkpResumeProcess @ 0x1405F0A74 (DbgkpResumeProcess.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeThawProcess @ 0x140095D30 (KeThawProcess.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x14044B0E4 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x140660954 (EtwTraceFreezeThawProcess.c)
 */

void __fastcall PsThawProcess(__int64 a1, char a2)
{
  int v4; // edi
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // r15
  int SessionId; // [rsp+60h] [rbp+18h] BYREF
  int v8; // [rsp+68h] [rbp+20h]

  v4 = *(_DWORD *)(a1 + 616) + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  v8 = v4;
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 936) && (*(_DWORD *)(a1 + 772) & 8) == 0 )
    {
      SessionId = MmGetSessionIdEx((struct _KPROCESS *)a1);
      PsInvokeWin32Callout((_KPROCESS *)0x17, a1, 1, (int)&SessionId);
    }
    v5 = 0LL;
    CurrentThread = KeGetCurrentThread();
    PspLockProcessExclusive(a1, (__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 1776) )
    {
      v5 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 1776);
      *(_QWORD *)(a1 + 1776) = 0LL;
      *(_QWORD *)(a1 + 1864) += v5;
    }
    PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
    *(_QWORD *)PspFreezeTimeBiasAddress += v5;
    if ( *(_QWORD *)(a1 + 1064) )
      *(_QWORD *)PspFreezeTimeBiasAddress32 += v5;
  }
  KeThawProcess(a1, a2);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState((_QWORD *)a1, 2);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v4 )
        EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
}
