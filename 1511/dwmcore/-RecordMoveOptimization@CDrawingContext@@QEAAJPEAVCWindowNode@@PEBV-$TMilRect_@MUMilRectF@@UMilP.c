/*
 * XREFs of ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18010E170
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18000E09C (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18001401C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036D60 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18010B7B0 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x18010DBE0 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18010DC40 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180116F58 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 */

__int64 __fastcall CDrawingContext::RecordMoveOptimization(
        struct CDrawingContext *a1,
        CVisual *this,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _BYTE *a7)
{
  unsigned int v7; // edi
  CDrawingContext *v10; // rcx
  __int64 v11; // rcx
  __int128 *v12; // r11
  const struct MilPoint2F *v13; // r10
  CMoveRenderPassInfo *v14; // rax
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // ebx
  int v21; // eax
  float v22; // [rsp+40h] [rbp-C0h] BYREF
  float v23; // [rsp+44h] [rbp-BCh]
  CBitmapOfDeviceBitmaps *v24; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v28[3]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-50h]
  _OWORD v30[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]

  v7 = 0;
  v24 = 0LL;
  *a7 = 0;
  if ( !*((_BYTE *)a1 + 5968) )
    return v7;
  if ( !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1) )
    return v7;
  if ( *((_BYTE *)v10 + 5633) )
    return v7;
  if ( CDrawingContext::IsInLayer(v10) )
    return v7;
  CBaseMatrixStack::Top((CBaseMatrixStack *)(v11 + 456), (struct CBaseMatrix *)v28);
  if ( !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)v28) )
    return v7;
  v25 = *v12;
  CBaseMatrix::Transform2DBounds((CBaseMatrix *)v28, (const struct MilRectF *)&v25, (struct MilRectF *)&v26);
  v30[1] = v28[1];
  v32 = *((_QWORD *)&v29 + 1);
  v31 = 0LL;
  v30[0] = v28[0];
  v30[2] = v28[2];
  CBaseMatrix::Transform((CBaseMatrix *)v30, v13, (struct MilPoint2F *)&v22, 1);
  v14 = CVisual::PreviousFrameVisibleRegion(this, a1);
  if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v26, v14, 0LL) )
  {
    *(float *)&v25 = *(float *)&v26 + v22;
    *((float *)&v25 + 1) = *((float *)&v26 + 1) + v23;
    *((float *)&v25 + 2) = *((float *)&v26 + 2) + v22;
    *((float *)&v25 + 3) = *((float *)&v26 + 3) + v23;
    CScopedClipStack::GetTopClipBoundsInScope((__int64 *)a1 + 85, &v27);
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)&v27, (__int64)&v25) )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 46) + 208LL))(*((_QWORD *)a1 + 46));
      v16 = MoveOptimizationInfo::Create((__int64)this, v22, v23, &v26, 0LL, v15, (__int64 *)&v24);
      v7 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1BDCu);
        goto LABEL_15;
      }
      v17 = *((_DWORD *)a1 + 1418);
      v18 = v17 + 1;
      if ( v17 + 1 < v17 )
      {
        v19 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v7 = -2147024362;
LABEL_21:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1BE1u);
        goto LABEL_15;
      }
      v7 = 0;
      if ( v18 > *((_DWORD *)a1 + 1417) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 5648, 8, 1, &v24);
        v19 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
        v7 = v19;
        if ( v19 < 0 )
          goto LABEL_21;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)a1 + 706) + 8LL * *((unsigned int *)a1 + 1418)) = v24;
        *((_DWORD *)a1 + 1418) = v18;
      }
      CBitmapOfDeviceBitmaps::AddRef(v24);
      *a7 = 1;
    }
  }
LABEL_15:
  if ( v24 )
    CMILCOMBase::InternalRelease(v24);
  return v7;
}
