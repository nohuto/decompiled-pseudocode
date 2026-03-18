/*
 * XREFs of ?IsFullyCovered@CArrayBasedCoverageSet@@UEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18004B680
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18005F9E4 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall CArrayBasedCoverageSet::IsFullyCovered(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // r10d
  int v5; // r11d
  __int64 v6; // r9
  __int64 v7; // r8
  char v8; // cl
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14[6]; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
    return 1;
  v6 = 0LL;
  *(_OWORD *)v14 = *v2;
  if ( v4 )
  {
    v7 = *(_QWORD *)(v3 + 24);
    v8 = 1;
    LODWORD(v9) = HIDWORD(*v2);
    LODWORD(v10) = HIDWORD(*(_QWORD *)v2);
    do
    {
      if ( *(_DWORD *)(v7 + 20 * v6 + 16) >= v5 )
        break;
      if ( v14[0] >= *(float *)(v7 + 20 * v6) && *(float *)(v7 + 20 * v6 + 8) >= v14[2] )
      {
        v12 = *(float *)(v7 + 20 * v6 + 4);
        v13 = *(float *)(v7 + 20 * v6 + 12);
        if ( v10 < v12 )
        {
          if ( v13 >= v9 && v9 > v12 )
            v9 = *(float *)(v7 + 20 * v6 + 4);
        }
        else
        {
          if ( v13 >= v9 )
            return v8;
          if ( v13 > v10 )
            v10 = *(float *)(v7 + 20 * v6 + 12);
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v4 );
  }
  return 0;
}
