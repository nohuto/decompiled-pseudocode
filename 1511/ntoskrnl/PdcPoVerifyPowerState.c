/*
 * XREFs of PdcPoVerifyPowerState @ 0x140637AF4
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopVerifySystemPowerState @ 0x14050A114 (PopVerifySystemPowerState.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(int *a1, int a2)
{
  PopAcquirePolicyLock();
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock();
}
