/*
 * XREFs of ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020571C
 * Callers:
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020618C (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206950 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0209C0C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C020C370 (xxxEvaluateDestRectForMonitorMigration.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDockTargetActive(__int64 a1, __int64 a2, int a3)
{
  char v3; // cl

  if ( (*(_DWORD *)(a1 + 180) & 0x100000) == 0 )
    return *(_BYTE *)(a3 + a2 + 488) != 0;
  v3 = 0;
  if ( *(_BYTE *)(a3 + a2 + 464) )
    return *(_BYTE *)(a3 + a2 + 468) != 0;
  return v3;
}
