/*
 * XREFs of TR_GetPacketCount @ 0x1C0001BBC
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x1C000DDE0 (Control_Transfer_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C000EDE0 (Isoch_Stage_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C000F600 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetPacketCount(__int64 a1, int a2)
{
  unsigned int v3; // ecx

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 216LL) )
    return 0LL;
  v3 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FF;
  return (v3 + a2 - 1) / v3;
}
