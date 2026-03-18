/*
 * XREFs of ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x1800F448C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180010268 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEAA_NXZ @ 0x1800296F4 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEAA_NXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004E010 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800DEA3C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x1800F18A0 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x1800F3D28 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x1800FDE94 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
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
  _BYTE v27[16]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v28[3]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-50h]
  _OWORD v30[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]

  v7 = 0;
  v24 = 0LL;
  *a7 = 0;
  if ( !*((_BYTE *)a1 + 5936) )
    return v7;
  if ( !(unsigned __int8)CDrawingContext::IsDirectRenderingToDisplayRenderTarget(a1) )
    return v7;
  if ( *((_BYTE *)v10 + 5601) )
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
    CScopedClipStack::GetTopClipBoundsInScope((__int64 *)a1 + 85, (__int64)v27);
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)v27, (__int64)&v25) )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 46) + 200LL))(*((_QWORD *)a1 + 46));
      v16 = MoveOptimizationInfo::Create((__int64)this, v22, v23, &v26, 0LL, v15, (__int64 *)&v24);
      v7 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1C14u);
        goto LABEL_15;
      }
      v17 = *((_DWORD *)a1 + 1410);
      v18 = v17 + 1;
      if ( v17 + 1 < v17 )
      {
        v19 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v7 = -2147024362;
LABEL_21:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1C19u);
        goto LABEL_15;
      }
      v7 = 0;
      if ( v18 > *((_DWORD *)a1 + 1409) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 5616, 8u, 1, &v24);
        v19 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
        v7 = v19;
        if ( v19 < 0 )
          goto LABEL_21;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)a1 + 702) + 8LL * *((unsigned int *)a1 + 1410)) = v24;
        *((_DWORD *)a1 + 1410) = v18;
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
