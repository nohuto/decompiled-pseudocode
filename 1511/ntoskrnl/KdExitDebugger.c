/*
 * XREFs of KdExitDebugger @ 0x1406AAD38
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x140142A68 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1401C2790 (KdpReport.c)
 *     KdSendTraceData @ 0x1406AAE38 (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x1406ABDDC (KdpSendWaitContinue.c)
 *     KdpCommandString @ 0x1406ACCEC (KdpCommandString.c)
 *     KdpPrint @ 0x1406ACDA4 (KdpPrint.c)
 *     KdpPrompt @ 0x1406ACF04 (KdpPrompt.c)
 *     KdpSymbol @ 0x1406AD058 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x1406ADCE0 (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x1406AE364 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x1406AE498 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x1406AE690 (KdpReadRemoteFile.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140001FF0 (VfIsVerifierEnabled.c)
 *     KeInsertQueueDpc @ 0x140043D30 (KeInsertQueueDpc.c)
 *     ExQueueDebuggerWorker @ 0x14013F2AC (ExQueueDebuggerWorker.c)
 *     xHalTimerWatchdogStop @ 0x140148598 (xHalTimerWatchdogStop.c)
 *     KeThawExecution @ 0x1401C8F5C (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1406B70C8 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(unsigned __int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v2 = a1;
  v3 = (_DWORD *)KdLogBuffer[v1];
  if ( v3 )
  {
    v4 = (unsigned int)*v3;
    v5 = __rdtsc();
    a1 = v3[4 * v4 + 6] & 4;
    *(_QWORD *)&v3[4 * v4 + 6] = a1 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1LL | ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5)
                                                                                               - *(_QWORD *)&v3[4 * v4 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v4 == 254 )
      *v3 = 0;
    else
      *v3 = v4 + 1;
  }
  off_1402D2928((PKFLOATING_SAVE)a1);
  KeThawExecution(v2);
  if ( KdTimerStop )
    KdTimerStart = __rdtsc();
  else
    KdTimerStart = 0LL;
  if ( !PoHiberInProgress && (KiBugCheckActive & 3) == 0 )
  {
    if ( !_InterlockedExchange(&KdpTimeSlipPending, 2) )
      KeInsertQueueDpc(&KdpTimeSlipDpc, 0LL, 0LL);
    ExQueueDebuggerWorker();
  }
  result = VfIsVerifierEnabled();
  if ( (_DWORD)result )
    return VfNotifyVerifierOfEvent(4LL);
  return result;
}
