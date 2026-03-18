/*
 * XREFs of ?IsFullyCovered@CArrayBasedCoverageSet@@UEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18004DCF0
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall CArrayBasedCoverageSet::IsFullyCovered(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rdx
  __int64 v3; // r9
  unsigned int v4; // r10d
  int v5; // r11d
  __int64 v6; // rcx
  __int64 v7; // rdx
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13[6]; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
    return 1;
  v6 = 0LL;
  *(_OWORD *)v13 = *v2;
  if ( v4 )
  {
    v7 = *(_QWORD *)(v3 + 24);
    v8 = v13[3];
    v9 = v13[1];
    do
    {
      if ( *(_DWORD *)(v7 + 20 * v6 + 16) >= v5 )
        break;
      if ( v13[0] >= *(float *)(v7 + 20 * v6) && *(float *)(v7 + 20 * v6 + 8) >= v13[2] )
      {
        v11 = *(float *)(v7 + 20 * v6 + 4);
        v12 = *(float *)(v7 + 20 * v6 + 12);
        if ( v9 < v11 )
        {
          if ( v12 >= v8 && v8 > v11 )
            v8 = *(float *)(v7 + 20 * v6 + 4);
        }
        else
        {
          if ( v12 >= v8 )
            return 1;
          if ( v12 > v9 )
            v9 = *(float *)(v7 + 20 * v6 + 12);
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v4 );
  }
  return 0;
}
