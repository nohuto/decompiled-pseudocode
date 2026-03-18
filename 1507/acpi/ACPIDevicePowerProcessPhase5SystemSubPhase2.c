/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C0038440
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIResumeInterpreter @ 0x1C0042804 (AMLIResumeInterpreter.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase2(__int64 a1)
{
  bool v1; // zf

  v1 = *(_DWORD *)(a1 + 104) == 1;
  *(_DWORD *)(a1 + 212) = 5;
  if ( !v1 )
    AMLIResumeInterpreter();
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
