/*
 * XREFs of InvokeGetSfntFragmentPtr @ 0x1C001EE20
 * Callers:
 *     sfac_DoOffsetTableMap @ 0x1C001E8C4 (sfac_DoOffsetTableMap.c)
 *     sfac_GetDataPtr @ 0x1C001EDBC (sfac_GetDataPtr.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 *     sfac_ReadGlyphBbox @ 0x1C00C9510 (sfac_ReadGlyphBbox.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvokeGetSfntFragmentPtr(int a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( a1 == 1 )
  {
    v4 = 0LL;
    if ( a3 )
    {
      if ( a3 <= 0 || a4 < 0 || a3 > 0x7FFFFFFF - a4 || a3 + a4 > *(_DWORD *)(a2 + 72) )
        return v4;
      v5 = a3;
    }
    else
    {
      v5 = *(unsigned int *)(a2 + 272);
    }
    return *(_QWORD *)(a2 + 64) + v5;
  }
  EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  return 0LL;
}
