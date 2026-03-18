/*
 * XREFs of LongLongToLong @ 0x1C01C20A0
 * Callers:
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01C15E0 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x1C01F7C94 (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 *     ?GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z @ 0x1C01F7DB4 (-GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z.c)
 *     ConvertCoordinates @ 0x1C01FB7C0 (ConvertCoordinates.c)
 *     ?_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C022BC70 (-_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     _TTHmToPixels @ 0x1C024C984 (_TTHmToPixels.c)
 *     _TTPixelsToHm @ 0x1C024CCE8 (_TTPixelsToHm.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C026530C (-bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     LongAdd @ 0x1C0265408 (LongAdd.c)
 *     LongSub @ 0x1C026541C (LongSub.c)
 *     LongMult @ 0x1C027BCB0 (LongMult.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall LongLongToLong(LONGLONG llOperand, LONG *plResult)
{
  if ( (unsigned __int64)(llOperand + 0x80000000LL) > 0xFFFFFFFF )
  {
    *plResult = -1;
    return -2147024362;
  }
  else
  {
    *plResult = llOperand;
    return 0;
  }
}
