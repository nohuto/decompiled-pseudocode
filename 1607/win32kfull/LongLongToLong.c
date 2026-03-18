/*
 * XREFs of LongLongToLong @ 0x1C0125324
 * Callers:
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C0010BFC (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00148F0 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01C29C8 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x1C01EF330 (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 *     ?GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z @ 0x1C01EF450 (-GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z.c)
 *     ConvertCoordinates @ 0x1C01F2FB8 (ConvertCoordinates.c)
 *     ?_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0221C3C (-_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     _TTHmToPixels @ 0x1C0248C44 (_TTHmToPixels.c)
 *     _TTPixelsToHm @ 0x1C0248FA8 (_TTPixelsToHm.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C02616A4 (-bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     LongAdd @ 0x1C0261780 (LongAdd.c)
 *     LongSub @ 0x1C0261794 (LongSub.c)
 *     LongMult @ 0x1C02791F0 (LongMult.c)
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
