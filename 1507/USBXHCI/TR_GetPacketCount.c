/*
 * XREFs of TR_GetPacketCount @ 0x1C00206F4
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x1C0022660 (Control_Transfer_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C00270E8 (Isoch_Stage_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C002C16C (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetPacketCount(__int64 a1, int a2)
{
  unsigned int v2; // ecx

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 216LL) )
    return 0LL;
  v2 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FF;
  return (v2 + a2 - 1) / v2;
}
