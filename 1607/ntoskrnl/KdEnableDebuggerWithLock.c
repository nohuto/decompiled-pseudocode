/*
 * XREFs of KdEnableDebuggerWithLock @ 0x1401D1484
 * Callers:
 *     KdEnableDebugger @ 0x1401D1450 (KdEnableDebugger.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KdPowerTransition @ 0x1401D1594 (KdPowerTransition.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     KdpRestoreAllBreakpoints @ 0x1406F63CC (KdpRestoreAllBreakpoints.c)
 */

__int64 __fastcall KdEnableDebuggerWithLock(char a1)
{
  unsigned __int8 CurrentIrql; // di
  int v4; // eax

  CurrentIrql = 0;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  if ( a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KxAcquireSpinLock(&KdDebuggerLock);
  }
  v4 = KdDisableCount;
  if ( KdDisableCount )
  {
    --KdDisableCount;
    if ( v4 == 1 && KdPreviouslyEnabled )
    {
      if ( a1 )
      {
        KdPowerTransition(1LL);
        KdpDebugRoutineSelect = 1;
        LOBYTE(KdDebuggerEnabled) = 1;
        MEMORY[0xFFFFF780000002D4] = 1;
        KdpRestoreAllBreakpoints();
      }
      else
      {
        PoHiberInProgress = 1;
        KdInitSystem(0LL, 0LL);
        KdpRestoreAllBreakpoints();
        PoHiberInProgress = 0;
      }
    }
    if ( a1 )
    {
      KxReleaseSpinLock(&KdDebuggerLock);
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    if ( a1 )
    {
      KxReleaseSpinLock(&KdDebuggerLock);
      __writecr8(CurrentIrql);
      return 3221225485LL;
    }
    KdInitSystem(0LL, 0LL);
  }
  return 0LL;
}
