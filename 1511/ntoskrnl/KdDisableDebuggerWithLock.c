/*
 * XREFs of KdDisableDebuggerWithLock @ 0x140142878
 * Callers:
 *     KdDisableDebugger @ 0x140142870 (KdDisableDebugger.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KdPowerTransition @ 0x1401C2138 (KdPowerTransition.c)
 *     KdpAllowDisable @ 0x1406AD278 (KdpAllowDisable.c)
 *     KdpSuspendAllBreakpoints @ 0x1406ADE60 (KdpSuspendAllBreakpoints.c)
 */

__int64 KdDisableDebuggerWithLock()
{
  unsigned __int8 CurrentIrql; // di
  int v2; // ebx

  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&KdDebuggerLock);
  if ( KdDisableCount )
    goto LABEL_10;
  KdPreviouslyEnabled = (char)KdDebuggerEnabled;
  if ( !(_BYTE)KdDebuggerEnabled )
    goto LABEL_10;
  v2 = KdpAllowDisable();
  if ( v2 >= 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled )
    {
      KdpSuspendAllBreakpoints();
      MEMORY[0xFFFFF780000002D4] = 0;
      LOBYTE(KdDebuggerEnabled) = 0;
      KiDebugRoutine = (__int64 (*)(_DWORD, _DWORD, _DWORD, _DWORD, char, ...))KdpStub;
      LOBYTE(KdDebuggerNotPresent) = 1;
      KdPowerTransition(4LL);
    }
LABEL_10:
    ++KdDisableCount;
    v2 = 0;
  }
  KxReleaseSpinLock(&KdDebuggerLock);
  __writecr8(CurrentIrql);
  return (unsigned int)v2;
}
