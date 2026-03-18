/*
 * XREFs of ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0038000
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIResumeInterpreter @ 0x1C0042804 (AMLIResumeInterpreter.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0SystemSubPhase1(__int64 a1)
{
  *(_DWORD *)(a1 + 212) = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    AMLIResumeInterpreter();
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
