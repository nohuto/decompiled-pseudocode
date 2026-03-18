/*
 * XREFs of ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FD284
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01FC9C0 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0201234 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragInThresholdAlways(struct _MOVESIZEDATA *a1)
{
  int v1; // r8d
  int v2; // eax

  v1 = *((_DWORD *)a1 + 45) >> 15;
  if ( (v1 & 7u) - 2 <= 1 )
  {
    v2 = v1 - 2;
  }
  else
  {
    if ( (v1 & 7u) - 4 > 1 )
      return;
    v2 = v1 - 4;
  }
  *((_DWORD *)a1 + 45) ^= (*((_DWORD *)a1 + 45) ^ (v2 << 15)) & 0x38000;
}
