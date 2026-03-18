/*
 * XREFs of KdEnterDebugger @ 0x1406F2738
 * Callers:
 *     KdpReport @ 0x1400F6510 (KdpReport.c)
 *     KdRefreshDebuggerNotPresent @ 0x14014C444 (KdRefreshDebuggerNotPresent.c)
 *     KdpPrint @ 0x1406F20D8 (KdpPrint.c)
 *     KdpCreateRemoteFile @ 0x1406F2438 (KdpCreateRemoteFile.c)
 *     KdpSymbol @ 0x1406F25E4 (KdpSymbol.c)
 *     KdpCommandString @ 0x1406F3C28 (KdpCommandString.c)
 *     KdSendTraceData @ 0x1406F51EC (KdSendTraceData.c)
 *     KdpPrompt @ 0x1406F5E00 (KdpPrompt.c)
 *     KdpSetOwedBreakpoints @ 0x1406F640C (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x1406F6720 (KdpCloseRemoteFile.c)
 *     KdpReadRemoteFile @ 0x1406F6854 (KdpReadRemoteFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002DFC (xHalTimerWatchdogStop.c)
 *     VfIsVerifierEnabled @ 0x1400822C8 (VfIsVerifierEnabled.c)
 *     KeFreezeExecution @ 0x1400822D0 (KeFreezeExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1407028B0 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // di
  bool v4; // si
  struct _KPRCB *CurrentPrcb; // r8
  __int64 Number; // rdx
  unsigned int *v7; // rdx
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // rax
  bool result; // al

  v2 = 0;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(3LL);
  if ( a1 )
  {
    KdTimerStop = __rdtsc();
    KdTimerDifference = KdTimerStop - KdTimerStart;
  }
  else
  {
    KdTimerStop = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v4 = KeFreezeExecution();
  off_1402F25D8();
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( (KiBugCheckActive & 3) == 0 || (unsigned int)KiBugCheckActive >> 4 != (_DWORD)Number )
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  v7 = (unsigned int *)KdLogBuffer[Number];
  if ( v7 )
  {
    v8 = (unsigned __int64 *)&v7[4 * *v7 + 4];
    v9 = __rdtsc();
    *v8 = ((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9;
    v8[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1LL;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdEnteredDebugger = 1;
  KdDebuggerEnteredWithoutLock += v2;
  return result;
}
