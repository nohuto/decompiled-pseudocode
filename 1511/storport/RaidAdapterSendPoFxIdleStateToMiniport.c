/*
 * XREFs of RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C002CA34
 * Callers:
 *     StorPortAdapterIdleState @ 0x1C002E110 (StorPortAdapterIdleState.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000AFB8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
