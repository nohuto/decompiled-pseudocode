/*
 * XREFs of RaidUnitSendPoFxPowerControlToMiniport @ 0x1C002BE7C
 * Callers:
 *     StorPortUnitPowerControl @ 0x1C002D290 (StorPortUnitPowerControl.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C000E0CC (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerControlToMiniport(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  unsigned int v8; // ebx

  v8 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 8) )
  {
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  }
  else if ( a7 )
  {
    *a7 = 0LL;
  }
  return v8;
}
