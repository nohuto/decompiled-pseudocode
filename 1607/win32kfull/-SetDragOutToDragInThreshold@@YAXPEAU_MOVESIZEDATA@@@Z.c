/*
 * XREFs of ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FD344
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01FC9C0 (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0201234 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragOutToDragInThreshold(struct _MOVESIZEDATA *a1)
{
  if ( ((*((_DWORD *)a1 + 45) >> 15) & 7u) - 2 <= 1 )
    *((_DWORD *)a1 + 45) ^= (*((_DWORD *)a1 + 45) ^ (((*((_DWORD *)a1 + 45) >> 15) - 2) << 15)) & 0x38000;
}
