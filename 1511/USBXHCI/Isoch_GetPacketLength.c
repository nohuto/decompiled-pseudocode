/*
 * XREFs of Isoch_GetPacketLength @ 0x1C00041CC
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C000E5A0 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_Stage_DetermineSize @ 0x1C002BD74 (Isoch_Stage_DetermineSize.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C002BEF8 (Isoch_TransferUrb_MarkLatePackets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_GetPacketLength(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9

  v2 = *(_QWORD *)(a1 + 32);
  if ( a2 == *(_DWORD *)(a1 + 80) - 1 )
    return (unsigned int)(*(_DWORD *)(a1 + 64) - *(_DWORD *)(v2 + 12LL * a2 + 140));
  else
    return (unsigned int)(*(_DWORD *)(v2 + 12LL * (a2 + 1) + 140) - *(_DWORD *)(v2 + 12LL * a2 + 140));
}
