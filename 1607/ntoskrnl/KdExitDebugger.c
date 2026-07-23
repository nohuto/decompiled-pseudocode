/*
 * XREFs of KdExitDebugger @ 0x1406F24D0
 * Callers:
 *     KdpReport @ 0x1400F4360 (KdpReport.c)
 *     KdRefreshDebuggerNotPresent @ 0x14014C9B4 (KdRefreshDebuggerNotPresent.c)
 *     KdpCreateRemoteFile @ 0x1406F20D0 (KdpCreateRemoteFile.c)
 *     KdpSymbol @ 0x1406F227C (KdpSymbol.c)
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 *     KdpPrint @ 0x1406F2E34 (KdpPrint.c)
 *     KdpCommandString @ 0x1406F3C28 (KdpCommandString.c)
 *     KdSendTraceData @ 0x1406F51EC (KdSendTraceData.c)
 *     KdpPrompt @ 0x1406F5E00 (KdpPrompt.c)
 *     KdpSetOwedBreakpoints @ 0x1406F640C (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x1406F6720 (KdpCloseRemoteFile.c)
 *     KdpReadRemoteFile @ 0x1406F6854 (KdpReadRemoteFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     VfIsVerifierEnabled @ 0x140082F44 (VfIsVerifierEnabled.c)
 *     KeThawExecution @ 0x140083258 (KeThawExecution.c)
 *     ExQueueDebuggerWorker @ 0x140083F98 (ExQueueDebuggerWorker.c)
 *     KeInsertQueueDpc @ 0x1400D6140 (KeInsertQueueDpc.c)
 *     VfNotifyVerifierOfEvent @ 0x1407028E0 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(char a1)
{
  __int64 v1; // rax
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = (_DWORD *)KdLogBuffer[v1];
  if ( v3 )
  {
    v4 = (unsigned int)*v3;
    v5 = __rdtsc();
    *(_QWORD *)&v3[4 * v4 + 6] = v3[4 * v4 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1LL | ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - *(_QWORD *)&v3[4 * v4 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v4 == 254 )
      *v3 = 0;
    else
      *v3 = v4 + 1;
  }
  off_1402F25C8();
  KeThawExecution(a1);
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
