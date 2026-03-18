/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x14066FD7C
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopVerifyPowerActionPolicy @ 0x1405409B4 (PopVerifyPowerActionPolicy.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(int *a1)
{
  PopAcquirePolicyLock();
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock();
}
