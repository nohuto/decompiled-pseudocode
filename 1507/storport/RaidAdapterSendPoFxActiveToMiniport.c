/*
 * XREFs of RaidAdapterSendPoFxActiveToMiniport @ 0x1C002A9E8
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C002C1E0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C002C2D0 (StorPortAdapterIdleCondition.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0008F44 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
