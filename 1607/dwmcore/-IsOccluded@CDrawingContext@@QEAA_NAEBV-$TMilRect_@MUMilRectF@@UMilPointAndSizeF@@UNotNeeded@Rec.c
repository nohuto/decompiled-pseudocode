/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1800043FC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18005F9E4 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::IsOccluded(__int64 a1, __int128 *a2, unsigned int a3)
{
  char v3; // bl
  __int128 v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // r8
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  _BYTE v14[64]; // [rsp+20h] [rbp-39h] BYREF
  int v15; // [rsp+60h] [rbp+7h]
  float v16; // [rsp+70h] [rbp+17h] BYREF
  float v17; // [rsp+74h] [rbp+1Bh]
  float v18; // [rsp+78h] [rbp+1Fh]
  float v19; // [rsp+7Ch] [rbp+23h]
  __int128 v20; // [rsp+80h] [rbp+27h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 6531) && *(_QWORD *)(a1 + 6464) )
  {
    v6 = *a2;
    v15 = 0;
    v20 = v6;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 536), (struct CMILMatrix *)v14);
    CMILMatrix::Transform2DBoundsHelper<1>(v14, &v20, &v16);
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v16) )
    {
      return 1;
    }
    else
    {
      LOBYTE(v7) = 1;
      CScopedClipStack::GetTopGpuClipInScope(a1 + 912, v7, &v20);
      v9 = v16;
      if ( *(float *)&v20 > v16 )
      {
        v9 = *(float *)&v20;
        v16 = *(float *)&v20;
      }
      v10 = v17;
      if ( *((float *)&v20 + 1) > v17 )
      {
        v10 = *((float *)&v20 + 1);
        v17 = *((float *)&v20 + 1);
      }
      v11 = v18;
      if ( v18 > *((float *)&v20 + 2) )
      {
        v11 = *((float *)&v20 + 2);
        v18 = *((float *)&v20 + 2);
      }
      v12 = v19;
      if ( v19 > *((float *)&v20 + 3) )
      {
        v12 = *((float *)&v20 + 3);
        v19 = *((float *)&v20 + 3);
      }
      if ( v11 <= v9 || v12 <= v10 )
      {
        v19 = 0.0;
        v18 = 0.0;
        v17 = 0.0;
        v16 = 0.0;
      }
      LOBYTE(v8) = 1;
      return COcclusionContext::IsOccluded(*(_QWORD *)(a1 + 6464), &v16, v8, a3);
    }
  }
  return v3;
}
