/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C00383D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIPauseInterpreter @ 0x1C004271C (AMLIPauseInterpreter.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase1(__int64 a1)
{
  bool v1; // zf

  v1 = *(_DWORD *)(a1 + 104) == 1;
  *(_DWORD *)(a1 + 212) = 4;
  if ( !v1 )
  {
    qword_1C0059AD8 = a1;
    qword_1C0059AD0 = (__int64)ACPIDeviceCompleteInterpreterRequest;
    qword_1C0059AC8 = (__int64)&AcpiPauseInterpreterEntry;
    AcpiPauseInterpreterEntry = (__int64)&AcpiPauseInterpreterEntry;
    if ( (unsigned int)AMLIPauseInterpreter() == 259 )
      return 259LL;
  }
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
