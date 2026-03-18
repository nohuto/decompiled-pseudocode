/*
 * XREFs of ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0205FC0
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C0205504 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020A150 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragInToDragOutThreshold(struct _MOVESIZEDATA *a1)
{
  if ( (*((_DWORD *)a1 + 45) & 0x38000u) <= 0x8000 )
    *((_DWORD *)a1 + 45) ^= (*((_DWORD *)a1 + 45) ^ ((*((_DWORD *)a1 + 45) & 0xFFFF8000) + 0x10000)) & 0x38000;
}
