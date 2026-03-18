/*
 * XREFs of ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x180124874
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x1800040A0 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800160F4 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004B848 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x180121AE0 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180124000 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x1801240B4 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x18013118C (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 */

__int64 __fastcall CDrawingContext::RecordMoveOptimization(
        struct CDrawingContext *a1,
        CVisual *this,
        __int64 a3,
        const struct MilPoint2F *a4,
        int a5,
        int a6,
        _BYTE *a7)
{
  unsigned int v7; // ebx
  CDrawingContext *v11; // rcx
  __int64 v12; // rcx
  __int128 *v13; // r10
  struct _LIST_ENTRY **v14; // rax
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  float v21; // [rsp+40h] [rbp-C0h] BYREF
  float v22; // [rsp+44h] [rbp-BCh]
  CBitmapOfDeviceBitmaps *v23; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v24[3]; // [rsp+50h] [rbp-B0h] BYREF
  __m128 v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+90h] [rbp-70h]
  _OWORD v27[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v28; // [rsp+E0h] [rbp-20h]
  __int128 v29; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v30; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v31[16]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0;
  v23 = 0LL;
  *a7 = 0;
  if ( !*((_BYTE *)a1 + 6532) )
    return v7;
  if ( !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1) )
    return v7;
  if ( *((_BYTE *)v11 + 6325) )
    return v7;
  if ( CDrawingContext::IsInLayer(v11) )
    return v7;
  v26 = 0;
  CBaseMatrixStack::Top((CBaseMatrixStack *)(v12 + 536), (struct CMILMatrix *)v24);
  if ( !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v24) )
    return v7;
  v30 = *v13;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v24, (__int64)&v30, (float *)&v29);
  v27[1] = v24[1];
  v27[0] = v24[0];
  v27[3] = v25;
  v27[2] = v24[2];
  v28 = v26;
  CMILMatrix::Translate(
    (CMILMatrix *)v27,
    COERCE_FLOAT(v25.m128_i32[0] ^ _xmm),
    COERCE_FLOAT(_mm_shuffle_ps(v25, v25, 85).m128_u32[0] ^ _xmm),
    0.0);
  CMILMatrix::Transform((CMILMatrix *)v27, a4, (struct MilPoint2F *)&v21, 1);
  v14 = CVisual::PreviousFrameVisibleRegion(this, a1);
  if ( (unsigned __int8)CDwmMetaRegion::ClipRectWitRegion(&v29, v14, 0LL) )
  {
    *(float *)&v30 = *(float *)&v29 + v21;
    *((float *)&v30 + 1) = *((float *)&v29 + 1) + v22;
    *((float *)&v30 + 2) = *((float *)&v29 + 2) + v21;
    *((float *)&v30 + 3) = *((float *)&v29 + 3) + v22;
    CScopedClipStack::GetTopGpuClipInScope((__int64 *)a1 + 114, 1, (__int64)v31);
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)v31, (float *)&v30) )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 56) + 224LL))(*((_QWORD *)a1 + 56));
      v16 = MoveOptimizationInfo::Create((__int64)this, v21, v22, &v29, 0LL, v15, (__int64 *)&v23);
      v7 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1C33u);
      }
      else
      {
        v17 = *((_DWORD *)a1 + 1590);
        v18 = v17 + 1;
        if ( v17 + 1 >= v17 )
        {
          v7 = 0;
          if ( v18 <= *((_DWORD *)a1 + 1589) )
          {
            *(_QWORD *)(*((_QWORD *)a1 + 792) + 8LL * *((unsigned int *)a1 + 1590)) = v23;
            *((_DWORD *)a1 + 1590) = v18;
LABEL_16:
            CBitmapOfDeviceBitmaps::AddRef(v23);
            *a7 = 1;
            goto LABEL_19;
          }
          v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 6336, 8u, 1, &v23);
          v7 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
        }
        else
        {
          v7 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        if ( (v7 & 0x80000000) == 0 )
          goto LABEL_16;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1C38u);
      }
    }
  }
LABEL_19:
  if ( v23 )
    CMILCOMBase::InternalRelease(v23);
  return v7;
}
