/*
 * XREFs of ?CheckForDrawingWithStereoBitmap@CDrawingContext@@AEAA_NPEAVIBitmapContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180027C84
 * Callers:
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CDrawingContext::CheckForDrawingWithStereoBitmap(
        __int64 a1,
        __int64 a2,
        const struct MilRectF *a3,
        CBaseMatrix *a4)
{
  char v7; // si
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // [rsp+20h] [rbp-49h] BYREF
  float v14; // [rsp+24h] [rbp-45h]
  float v15; // [rsp+28h] [rbp-41h]
  float v16; // [rsp+2Ch] [rbp-3Dh]
  __int128 v17; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v18[64]; // [rsp+40h] [rbp-29h] BYREF

  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2)
    && *(_BYTE *)(a1 + 5937)
    && *(_DWORD *)(a1 + 5760) == 1 )
  {
    CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 456), (struct CBaseMatrix *)v18);
    if ( a4 )
      CBaseMatrix::Transform2DBounds(a4, a3, (struct MilRectF *)&v17);
    else
      v17 = *(_OWORD *)a3;
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)v18, (const struct MilRectF *)&v17, (struct MilRectF *)&v13);
    CScopedClipStack::GetTopClipBoundsInScope(a1 + 680, &v17);
    v9 = v13;
    if ( *(float *)&v17 > v13 )
    {
      v9 = *(float *)&v17;
      v13 = *(float *)&v17;
    }
    v10 = v14;
    if ( *((float *)&v17 + 1) > v14 )
    {
      v10 = *((float *)&v17 + 1);
      v14 = *((float *)&v17 + 1);
    }
    v11 = v15;
    if ( v15 > *((float *)&v17 + 2) )
    {
      v11 = *((float *)&v17 + 2);
      v15 = *((float *)&v17 + 2);
    }
    v12 = v16;
    if ( v16 > *((float *)&v17 + 3) )
    {
      v12 = *((float *)&v17 + 3);
      v16 = *((float *)&v17 + 3);
    }
    if ( v11 <= v9 || v12 <= v10 )
    {
      v16 = 0.0;
      v15 = 0.0;
      v14 = 0.0;
      v13 = 0.0;
    }
    if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v13) )
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a1 + 5764, &v13);
    return 1;
  }
  return v7;
}
