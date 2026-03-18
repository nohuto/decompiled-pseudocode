/*
 * XREFs of KdPowerTransition @ 0x1401FDE40
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 *     KdDisableDebuggerWithLock @ 0x14017069C (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x1401FDCD4 (KdEnableDebuggerWithLock.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x140240798 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopHandleNextState @ 0x1403F3750 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     PpmCancelExitLatencyTrace @ 0x140233FE4 (PpmCancelExitLatencyTrace.c)
 */

__int64 __fastcall KdPowerTransition(int a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  unsigned int v3; // ecx
  unsigned __int8 CurrentIrql; // si

  v1 = 0;
  if ( KdPitchDebugger )
    return v1;
  v2 = a1 & 0x80000000;
  v3 = a1 & 0x80000000 ^ a1;
  if ( KdTransportMaxPacketSize != 1408 )
    v2 = 0;
  if ( v3 != 1 )
  {
    if ( v3 - 2 > 2 )
      return (unsigned int)-1073741811;
    else
      return (unsigned int)KdPower(v2 | 4, &KdpContext);
  }
  PpmCancelExitLatencyTrace(KeGetCurrentPrcb());
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u )
      goto LABEL_12;
  }
  else
  {
    CurrentIrql = 15;
  }
  off_1403218F8();
LABEL_12:
  v1 = KdPower(v2 | 1, &KdpContext);
  if ( CurrentIrql >= 2u )
    off_1403218F8();
  return v1;
}
