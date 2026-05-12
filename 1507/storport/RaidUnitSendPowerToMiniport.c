/*
 * XREFs of RaidUnitSendPowerToMiniport @ 0x1C002BFD4
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0006890 (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C000E0CC (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 3) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  return v2;
}
