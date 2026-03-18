/*
 * XREFs of InvokeGlyphMappingF @ 0x1C001FB10
 * Callers:
 *     sfac_GetLongGlyphIDs @ 0x1C001FA48 (sfac_GetLongGlyphIDs.c)
 *     sfac_GetGlyphIndex @ 0x1C02DF48C (sfac_GetGlyphIndex.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02DF4FC (sfac_GetMultiGlyphIDs.c)
 * Callees:
 *     sfac_ComputeIndex4 @ 0x1C001FF60 (sfac_ComputeIndex4.c)
 *     sfac_ComputeIndex2 @ 0x1C02DF3F0 (sfac_ComputeIndex2.c)
 */

__int64 __fastcall InvokeGlyphMappingF(int a1, _WORD *a2, unsigned __int16 a3, __int64 a4)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // ax

  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
        return sfac_ComputeIndex2(a2, a3);
      v7 = v6 - 1;
      if ( !v7 )
        return sfac_ComputeIndex4(a2, a3, a4);
      if ( v7 != 1 )
      {
        v9 = 0;
        EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
        return v9;
      }
      v10 = __ROR2__(*a2, 8);
      if ( a3 >= v10 && (unsigned __int16)(a3 - v10) < __ROR2__(a2[1], 8) )
        return (unsigned __int16)__ROR2__(a2[(unsigned __int16)(a3 - v10) + 2], 8);
    }
    else if ( a3 < 0x100u )
    {
      return *((unsigned __int8 *)a2 + a3);
    }
  }
  return 0;
}
