/*
 * XREFs of KdEnterDebugger @ 0x1406AAC38
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x140142A68 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1401C2790 (KdpReport.c)
 *     KdSendTraceData @ 0x1406AAE38 (KdSendTraceData.c)
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
 *     xHalTimerWatchdogStop @ 0x140148598 (xHalTimerWatchdogStop.c)
 *     KeFreezeExecution @ 0x1401C8B48 (KeFreezeExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1406B70C8 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // di
  bool v4; // si
  PKFLOATING_SAVE v5; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 Number; // rdx
  unsigned int *v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rax
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
  off_1402D2938(v5);
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
