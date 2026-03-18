/*
 * XREFs of ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C0204ED8
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C0207C40 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArrangementStyleFromOverlap(char a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (a1 & 3) == 3 )
    v1 = 63745;
  if ( (a1 & 9) == 9 )
    v1 |= 0xF901u;
  if ( (a1 & 6) == 6 )
    v1 |= 0xF902u;
  if ( (a1 & 0xC) == 0xC )
    v1 |= 0xF902u;
  return v1;
}
