/*
 * XREFs of PopSystemRequiredCallback @ 0x1400D082C
 * Callers:
 *     PopExecutionRequiredPowerRequest @ 0x1405569BC (PopExecutionRequiredPowerRequest.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 */

__int64 __fastcall PopSystemRequiredCallback(char a1, int a2)
{
  PopAcquirePolicyLock();
  if ( a1 )
  {
    dword_14032E1C4 |= a2;
  }
  else
  {
    dword_14032E1C4 &= ~a2;
    if ( !dword_14032E1C4 )
      dword_14032E1D8 = dword_14032E1A8;
  }
  PopCheckResiliencyScenarios();
  PopReleasePolicyLock();
  return 0LL;
}
