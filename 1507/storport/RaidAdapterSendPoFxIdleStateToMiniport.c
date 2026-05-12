/*
 * XREFs of RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C002AA74
 * Callers:
 *     StorPortAdapterIdleState @ 0x1C002C3A0 (StorPortAdapterIdleState.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0008F44 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 296);
  return v2;
}
