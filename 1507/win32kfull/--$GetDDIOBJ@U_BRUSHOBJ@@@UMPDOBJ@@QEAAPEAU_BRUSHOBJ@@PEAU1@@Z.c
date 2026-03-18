/*
 * XREFs of ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A982C
 * Callers:
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02AAC40 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02AAD20 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02AAD90 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02AAE10 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C02AAE80 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiEngBitBlt @ 0x1C02AB4F0 (NtGdiEngBitBlt.c)
 *     NtGdiEngFillPath @ 0x1C02AC3A0 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C02AC970 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02ACCB0 (NtGdiEngPaint.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AD610 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ADB60 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02ADEC0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AE1D0 (NtGdiEngTextOut.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 152) )
  {
    v3 = *(_QWORD *)(a1 + 144);
  }
  else if ( a2 == *(_QWORD *)(a1 + 168) )
  {
    v3 = *(_QWORD *)(a1 + 160);
  }
  else
  {
    v3 = 0LL;
  }
  if ( a2 )
  {
    if ( !v3 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n", 760);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint("windows\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n", 765);
    return 0LL;
  }
  return v3;
}
