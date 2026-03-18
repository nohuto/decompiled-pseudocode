/*
 * XREFs of PopExecutionRequiredPowerRequest @ 0x1405569BC
 * Callers:
 *     <none>
 * Callees:
 *     PopSystemRequiredCallback @ 0x1400D082C (PopSystemRequiredCallback.c)
 *     PopAoacExecutionRequiredPowerRequest @ 0x1405569F0 (PopAoacExecutionRequiredPowerRequest.c)
 */

__int64 __fastcall PopExecutionRequiredPowerRequest(char a1)
{
  int v2; // eax

  v2 = PopAoacExecutionRequiredPowerRequest();
  if ( !byte_14032E534 && v2 == 259 )
    PopSystemRequiredCallback(a1, 2);
  return 0LL;
}
