/*
 * XREFs of PopExecutionRequiredPowerRequest @ 0x1404CFC94
 * Callers:
 *     <none>
 * Callees:
 *     PopSystemRequiredCallback @ 0x140099070 (PopSystemRequiredCallback.c)
 *     PopAoacExecutionRequiredPowerRequest @ 0x1404CFCC8 (PopAoacExecutionRequiredPowerRequest.c)
 */

__int64 __fastcall PopExecutionRequiredPowerRequest(char a1)
{
  int v2; // eax

  v2 = PopAoacExecutionRequiredPowerRequest();
  if ( !byte_1402DDF74 && v2 == 259 )
    PopSystemRequiredCallback(a1, 2);
  return 0LL;
}
