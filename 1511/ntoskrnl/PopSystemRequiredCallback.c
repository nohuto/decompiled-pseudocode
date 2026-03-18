/*
 * XREFs of PopSystemRequiredCallback @ 0x140099070
 * Callers:
 *     PopExecutionRequiredPowerRequest @ 0x1404CFC94 (PopExecutionRequiredPowerRequest.c)
 * Callees:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 */

__int64 __fastcall PopSystemRequiredCallback(char a1, int a2)
{
  PopAcquirePolicyLock();
  if ( a1 )
  {
    dword_1402DEAE4 |= a2;
  }
  else
  {
    dword_1402DEAE4 &= ~a2;
    if ( !dword_1402DEAE4 )
      dword_1402DEB00 = dword_1402DEAC8;
  }
  PopCheckResiliencyScenarios();
  PopReleasePolicyLock();
  return 0LL;
}
