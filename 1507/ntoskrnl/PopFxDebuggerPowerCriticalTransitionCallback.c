/*
 * XREFs of PopFxDebuggerPowerCriticalTransitionCallback @ 0x140240798
 * Callers:
 *     <none>
 * Callees:
 *     KdCallPowerHandlers @ 0x1401FDB1C (KdCallPowerHandlers.c)
 *     KdPowerTransition @ 0x1401FDE40 (KdPowerTransition.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxDebuggerPowerCriticalTransitionCallback(__int64 a1, __int64 a2, char a3)
{
  if ( PopAutomaticDebuggerTransitions )
    PopFxBugCheck(0x61EuLL, 0LL, 0LL, 0LL);
  if ( a3 )
  {
    KdCallPowerHandlers(1u);
    return KdPowerTransition(-2147483647);
  }
  else
  {
    KdPowerTransition(-2147483644);
    return KdCallPowerHandlers(4u);
  }
}
