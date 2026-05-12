/*
 * XREFs of RaidAdapterSendPoFxActiveToMiniport @ 0x1C002C9A8
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C002DF50 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C002E040 (StorPortAdapterIdleCondition.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000AFB8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
