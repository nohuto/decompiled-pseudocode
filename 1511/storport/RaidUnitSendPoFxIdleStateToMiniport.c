/*
 * XREFs of RaidUnitSendPoFxIdleStateToMiniport @ 0x1C002DB6C
 * Callers:
 *     StorPortUnitIdleState @ 0x1C002E960 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00102BC (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C001033C (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  return v2;
}
