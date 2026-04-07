/*
 * XREFs of ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800058E8
 * Callers:
 *     ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x180005D10 (-GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180014204 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AreAllMarginsZero(const struct _MARGINS *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !a1->cxLeftWidth && !a1->cyTopHeight && !a1->cxRightWidth )
    return a1->cyBottomHeight == 0;
  return result;
}
