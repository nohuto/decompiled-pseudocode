/*
 * XREFs of PdcPoVerifyPowerState @ 0x1406B784C
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopVerifySystemPowerState @ 0x140580970 (PopVerifySystemPowerState.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(int *a1, int a2)
{
  PopAcquirePolicyLock();
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock();
}
