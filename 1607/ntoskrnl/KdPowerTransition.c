/*
 * XREFs of KdPowerTransition @ 0x1401D1594
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     KdDisableDebuggerWithLock @ 0x1401D1384 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x1401D1484 (KdEnableDebuggerWithLock.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x14020B7A0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 *     PopHandleNextState @ 0x1403CC8F0 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     PpmCancelExitLatencyTrace @ 0x1401FF500 (PpmCancelExitLatencyTrace.c)
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
        off_1402F2448();
      v1 = KdPower(v2 | 1, &KdpContext);
      if ( EffectiveIrql >= 2u )
        off_1402F2448();
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
