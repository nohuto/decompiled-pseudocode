/*
 * XREFs of PopFxDebuggerPowerCriticalTransitionCallback @ 0x14020B7A0
 * Callers:
 *     <none>
 * Callees:
 *     KdCallPowerHandlers @ 0x1401D1284 (KdCallPowerHandlers.c)
 *     KdPowerTransition @ 0x1401D1594 (KdPowerTransition.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
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
