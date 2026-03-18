/*
 * XREFs of KdEnterDebugger @ 0x14072AC78
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1401708E8 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1401FE4B4 (KdpReport.c)
 *     KdSendTraceData @ 0x14072AE7C (KdSendTraceData.c)
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
 *     xHalTimerWatchdogStop @ 0x14017DF20 (xHalTimerWatchdogStop.c)
 *     KeFreezeExecution @ 0x140205F0C (KeFreezeExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x140737430 (VfNotifyVerifierOfEvent.c)
 */

char __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // di
  char v4; // si
  PKFLOATING_SAVE v5; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 Number; // rdx
  unsigned int *v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  char result; // al

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
  off_140321A88(v5);
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( (KiBugCheckActive & 3) == 0 || (unsigned int)KiBugCheckActive >> 4 != (_DWORD)Number )
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  v8 = (unsigned int *)KdLogBuffer[Number];
  if ( v8 )
  {
    v9 = (unsigned __int64 *)&v8[4 * *v8 + 4];
    v10 = __rdtsc();
    *v9 = ((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10;
    v9[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1LL;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdEnteredDebugger = 1;
  KdDebuggerEnteredWithoutLock += v2;
  return result;
}
