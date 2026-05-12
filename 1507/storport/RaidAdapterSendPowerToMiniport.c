/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x1C002AB6C
 * Callers:
 *     RaidAdapterStopOnPowerdown @ 0x1C0006E10 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0006E70 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0008F44 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
