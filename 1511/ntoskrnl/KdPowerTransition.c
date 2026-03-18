/*
 * XREFs of KdPowerTransition @ 0x1401C2138
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     KdDisableDebuggerWithLock @ 0x140142878 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x1401C2024 (KdEnableDebuggerWithLock.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1401F38D4 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopHandleNextState @ 0x1403A0B10 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     PpmCancelExitLatencyTrace @ 0x1401E6D38 (PpmCancelExitLatencyTrace.c)
 */

__int64 __fastcall KdPowerTransition(int a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  unsigned __int8 EffectiveIrql; // si

  v1 = 0;
  if ( !KdPitchDebugger )
  {
    v2 = a1 & 0x80000000;
    v3 = a1 & 0x80000000 ^ a1;
    if ( KdTransportMaxPacketSize != 1408 )
      v2 = 0;
    if ( v3 == 1 )
    {
      PpmCancelExitLatencyTrace(KeGetCurrentPrcb());
      EffectiveIrql = KeGetEffectiveIrql();
      if ( EffectiveIrql >= 2u )
        off_1402D27A8();
      v1 = KdPower(v2 | 1, &KdpContext);
      if ( EffectiveIrql >= 2u )
        off_1402D27A8();
    }
    else if ( v3 - 2 > 2 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      return (unsigned int)KdPower(v2 | 4, &KdpContext);
    }
  }
  return v1;
}
