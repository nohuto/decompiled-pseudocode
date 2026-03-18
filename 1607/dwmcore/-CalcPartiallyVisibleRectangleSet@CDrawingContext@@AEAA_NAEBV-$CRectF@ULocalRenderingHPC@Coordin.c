/*
 * XREFs of ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18006960C
 * Callers:
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006ADCC (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18005FA78 (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::CalcPartiallyVisibleRectangleSet(
        __int64 a1,
        __int64 a2,
        unsigned __int32 a3,
        __int64 a4,
        unsigned int *a5)
{
  char v8; // bl
  const struct CMILMatrix *TopByReference; // rax
  CBaseMatrixStack *v10; // r9
  const struct CMILMatrix *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rdx
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  __int64 v18; // r9
  __int64 v19; // rcx
  _BYTE v21[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v22; // [rsp+48h] [rbp-30h] BYREF
  float v23; // [rsp+58h] [rbp-20h] BYREF
  float v24; // [rsp+5Ch] [rbp-1Ch]
  float v25; // [rsp+60h] [rbp-18h]
  float v26; // [rsp+64h] [rbp-14h]

  v8 = 0;
  TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(a1 + 536));
  if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)TopByReference) )
  {
    v11 = CBaseMatrixStack::GetTopByReference(v10);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v11, v12, (float *)&v22);
    LOBYTE(v13) = 1;
    CScopedClipStack::GetTopGpuClipInScope(a1 + 912, v13, &v23);
    v14 = *(float *)&v22;
    if ( v23 > *(float *)&v22 )
    {
      v14 = v23;
      *(float *)&v22 = v23;
    }
    v15 = *((float *)&v22 + 1);
    if ( v24 > *((float *)&v22 + 1) )
    {
      v15 = v24;
      *((float *)&v22 + 1) = v24;
    }
    v16 = *((float *)&v22 + 2);
    if ( *((float *)&v22 + 2) > v25 )
    {
      v16 = v25;
      *((float *)&v22 + 2) = v25;
    }
    v17 = *((float *)&v22 + 3);
    if ( *((float *)&v22 + 3) > v26 )
    {
      v17 = v26;
      *((float *)&v22 + 3) = v26;
    }
    if ( v16 <= v14 || v17 <= v15 )
      v22 = 0uLL;
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v22) )
    {
      *a5 = 0;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 6531) )
        return v8;
      v19 = *(_QWORD *)(a1 + 6464);
      if ( !v19 )
        return v8;
      v21[0] = 0;
      if ( (int)COcclusionContext::ComputeVisibleRegion(v19, &v22, a3, v18, v21, a4, a5) < 0 || !v21[0] )
        return v8;
    }
    return 1;
  }
  return v8;
}
