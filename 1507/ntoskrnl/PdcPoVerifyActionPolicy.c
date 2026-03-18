/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x1406B782C
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopVerifyPowerActionPolicy @ 0x140580284 (PopVerifyPowerActionPolicy.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(int *a1)
{
  PopAcquirePolicyLock();
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock();
}
