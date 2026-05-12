/*
 * XREFs of RaidUnitSendPoFxActiveToMiniport @ 0x1C002BD6C
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C002C990 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C002CBF0 (StorPortUnitIdleCondition.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C000E0CC (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
  return v2;
}
