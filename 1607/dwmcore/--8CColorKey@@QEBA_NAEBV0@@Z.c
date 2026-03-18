/*
 * XREFs of ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x180025240
 * Callers:
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x180026090 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSO.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x180081B80 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180082AC0 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x1800252E4 (-IsNonEmpty@CColorKey@@QEBA_NXZ.c)
 */

char __fastcall CColorKey::operator==(CColorKey *a1)
{
  bool IsNonEmpty; // al
  float *v2; // rdx
  float *v3; // r8
  char v4; // r9

  IsNonEmpty = CColorKey::IsNonEmpty(a1);
  v4 = 0;
  if ( !IsNonEmpty && !CColorKey::IsNonEmpty((CColorKey *)v2)
    || *v3 == *v2
    && v3[1] == v2[1]
    && v3[2] == v2[2]
    && v3[3] == v2[3]
    && v3[4] == v2[4]
    && v3[5] == v2[5]
    && v3[6] == v2[6]
    && v3[7] == v2[7] )
  {
    return 1;
  }
  return v4;
}
