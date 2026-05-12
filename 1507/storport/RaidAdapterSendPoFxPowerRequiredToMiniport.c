/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C002AAF0
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C002C640 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C002C7D0 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0008F44 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
