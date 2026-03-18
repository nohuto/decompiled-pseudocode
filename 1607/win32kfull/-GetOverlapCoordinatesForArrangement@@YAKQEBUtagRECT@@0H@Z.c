/*
 * XREFs of ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01FC710
 * Callers:
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01FD0D0 (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01FD5F8 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01FEFF8 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOverlapCoordinatesForArrangement(
        const struct tagRECT *const a1,
        const struct tagRECT *const a2,
        int a3)
{
  unsigned int v3; // r9d

  if ( a3 && a1->left > a2->left )
    return 0LL;
  v3 = a1->left == a2->left;
  if ( a3 )
  {
    if ( a1->top > a2->top )
      return 0LL;
  }
  if ( a1->top == a2->top )
    v3 |= 2u;
  if ( a3 && a1->right < a2->right )
    return 0LL;
  if ( a1->right == a2->right )
    v3 |= 4u;
  if ( a3 && a1->bottom < a2->bottom )
    return 0LL;
  if ( a1->bottom == a2->bottom )
    v3 |= 8u;
  return v3;
}
