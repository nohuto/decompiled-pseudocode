/*
 * XREFs of RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C002BF50
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C002D2A0 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C002D5C0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C000E0CC (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 5) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  return v2;
}
