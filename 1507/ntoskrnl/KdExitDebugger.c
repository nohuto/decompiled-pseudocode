/*
 * XREFs of KdExitDebugger @ 0x14072AD78
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1401708E8 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1401FE4B4 (KdpReport.c)
 *     KdSendTraceData @ 0x14072AE7C (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 *     KdpCommandString @ 0x14072CDA8 (KdpCommandString.c)
 *     KdpPrint @ 0x14072CE60 (KdpPrint.c)
 *     KdpPrompt @ 0x14072CFC0 (KdpPrompt.c)
 *     KdpSymbol @ 0x14072D114 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x14072DD2C (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x14072E3B8 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x14072E4EC (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x14072E6E4 (KdpReadRemoteFile.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140025ADC (VfIsVerifierEnabled.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     ExQueueDebuggerWorker @ 0x14016CFF0 (ExQueueDebuggerWorker.c)
 *     xHalTimerWatchdogStop @ 0x14017DF20 (xHalTimerWatchdogStop.c)
 *     KeThawExecution @ 0x14020657C (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x140737430 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(char a1)
{
  unsigned __int64 v2; // rcx
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  v3 = (_DWORD *)KdLogBuffer[KeGetCurrentProcessorNumberEx(0LL)];
  if ( v3 )
  {
    v4 = (unsigned int)*v3;
    v5 = __rdtsc();
    v2 = v3[4 * v4 + 6] & 4;
    *(_QWORD *)&v3[4 * v4 + 6] = v2 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1LL | ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5)
                                                                                               - *(_QWORD *)&v3[4 * v4 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v4 == 254 )
      *v3 = 0;
    else
      *v3 = v4 + 1;
  }
  off_140321A78((PKFLOATING_SAVE)v2);
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
