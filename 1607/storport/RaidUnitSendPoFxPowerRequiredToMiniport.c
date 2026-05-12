/*
 * XREFs of RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C00314C0
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0032040 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0032360 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0011128 (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 5) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  return v2;
}
