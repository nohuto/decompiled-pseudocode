/*
 * XREFs of PdcPoSetPowerAction @ 0x14066FE00
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 */

__int64 __fastcall PdcPoSetPowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, unsigned int a5)
{
  PopAcquirePolicyLock();
  PopExecutePowerAction(a1, a2, a3, a4, a5);
  return PopReleasePolicyLock();
}
