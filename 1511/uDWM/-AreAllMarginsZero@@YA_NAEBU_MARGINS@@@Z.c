/*
 * XREFs of ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800135C0
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180019DC0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x18003A5F0 (-GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z.c)
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
