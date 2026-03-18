/*
 * XREFs of ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetImageTransformForDirtyRects@CVisual@@KA_NPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x180003578 (-GetImageTransformForDirtyRects@CVisual@@KA_NPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?NotifyOfDirtyFromOverlaysOrDirectFlip@CRenderTargetManager@@QEAAXXZ @ 0x180007718 (-NotifyOfDirtyFromOverlaysOrDirectFlip@CRenderTargetManager@@QEAAXXZ.c)
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVIImageSource@@@Z @ 0x180007850 (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVIImageSource@@@Z.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007E10 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008F40 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x18000BAAC (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x18000D154 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18000E18C (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180054CAC (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070C30 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800DEA3C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@QEAA@XZ @ 0x1800DEB74 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1800FE324 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x180105094 (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801053D8 (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x18010A7E0 (-GetSizePreference@CCompositionSurfaceBitmap@@UEBA-AW4SizePreference@@XZ.c)
 */

__int64 __fastcall CWindowNode::OnChanged(__int64 a1, int a2, void (__fastcall ***a3)(void *, GUID *, __int64 *))
{
  char v5; // r14
  char v6; // r15
  CMILCOMBase *v8; // rcx
  __int64 v9; // rax
  struct IImageSource *v10; // r8
  float v11; // xmm8_4
  char v12; // r13
  float v13; // xmm9_4
  float v14; // xmm7_4
  __int64 SizePreference; // r12
  __int64 v16; // rax
  struct IImageSource *v17; // rcx
  char ImageTransformForDirtyRects; // al
  __int64 v19; // rcx
  char v20; // bl
  signed int v21; // eax
  __m128i v22; // xmm8
  int v23; // eax
  float v24; // xmm8_4
  CShape *DxClipShapeNoRef; // rax
  int v26; // eax
  int v27; // ecx
  float v28; // xmm6_4
  float v29; // xmm10_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm5_4
  int v38; // edi
  int v39; // ebx
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  unsigned int v45; // ebx
  bool v46; // cf
  float v47; // xmm1_4
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  float v50; // xmm2_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm5_4
  float v54; // xmm1_4
  float v55; // xmm0_4
  char v56; // [rsp+48h] [rbp-C0h]
  float v57; // [rsp+50h] [rbp-B8h] BYREF
  float v58; // [rsp+54h] [rbp-B4h]
  struct tagPOINT v59; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+60h] [rbp-A8h] BYREF
  void *v61; // [rsp+68h] [rbp-A0h] BYREF
  FastRegion::CRegion *v62; // [rsp+70h] [rbp-98h] BYREF
  float v63; // [rsp+78h] [rbp-90h] BYREF
  float v64; // [rsp+7Ch] [rbp-8Ch]
  float v65; // [rsp+80h] [rbp-88h]
  float v66; // [rsp+84h] [rbp-84h]
  __int128 v67; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v68[4]; // [rsp+98h] [rbp-70h]
  struct tagRECT rc; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v70[2]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v71[4]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v72[4]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v73[4]; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v74[4]; // [rsp+188h] [rbp+80h] BYREF
  void *v75[3]; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned int v76; // [rsp+1E0h] [rbp+D8h]

  v5 = 1;
  v56 = a2 != 1;
  v61 = 0LL;
  v6 = 0;
  v60 = 0LL;
  if ( a2 != 1
    || !a3
    || (v8 = *(CMILCOMBase **)(a1 + 1200)) == 0LL
    || (int)CMILCOMBase::InternalQueryInterface(v8, &GUID_00000000_0000_0000_c000_000000000046, &v61) < 0
    || v61 != a3 )
  {
    if ( *(_DWORD *)(a1 + 1232) )
    {
      v56 = 1;
      goto LABEL_67;
    }
LABEL_3:
    CVisual::PropagateFlags((struct CVisual *)a1, v56, v5, v6, 0, 0, 0);
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(a1 + 1200);
  v10 = (struct IImageSource *)(v9 + 40);
  if ( !v9 )
    v10 = 0LL;
  if ( CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
         *(CRenderTargetManager **)(*(_QWORD *)(a1 + 16) + 32LL),
         (const struct CVisual *)a1,
         v10) )
  {
    CVisual::DirtySecondaryRepresentations((CVisual *)a1);
    CRenderTargetManager::NotifyOfDirtyFromOverlaysOrDirectFlip(*(CRenderTargetManager **)(*(_QWORD *)(a1 + 16) + 32LL));
    goto LABEL_4;
  }
  (**a3)(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, &v60);
  if ( !v60 )
    goto LABEL_3;
  *(_QWORD *)v68 = 0LL;
  v68[2] = 0;
  v67 = 0LL;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>(v75);
  v11 = FLOAT_1_0;
  v12 = 0;
  v13 = FLOAT_1_0;
  v14 = 0.0;
  SizePreference = (int)CCompositionSurfaceBitmap::GetSizePreference(*(_QWORD *)(a1 + 1200) + 40LL);
  (*(void (__fastcall **)(__int64, FastRegion::CRegion **))(*(_QWORD *)v60 + 24LL))(v60, &v62);
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v60 + 32LL))(v60, &v67);
  if ( v62 )
  {
    v76 = 0;
    CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>>(
      v62,
      (__int64)v75);
  }
  v16 = *(_QWORD *)(a1 + 1200);
  v17 = (struct IImageSource *)(v16 + 40);
  if ( !v16 )
    v17 = 0LL;
  ImageTransformForDirtyRects = CVisual::GetImageTransformForDirtyRects(v17, (struct CMILMatrix *)v72);
  v19 = *(_QWORD *)(a1 + 1200);
  v20 = ImageTransformForDirtyRects;
  v71[0] = v72[0];
  v71[1] = v72[1];
  v71[2] = v72[2];
  v71[3] = v72[3];
  CCompositionSurfaceBitmap::GetTransform(v19 + 40, (__int64)v74, v70);
  v73[0] = v74[0];
  v73[1] = v74[1];
  v73[2] = v74[2];
  v73[3] = v74[3];
  CBaseMatrix::Transform2DBounds((CBaseMatrix *)v73, (const struct MilRectF *)v70, (struct MilRectF *)&v63);
  if ( (_DWORD)SizePreference == 1 )
  {
    if ( *(_BYTE *)(a1 + 1274) )
      v14 = (float)(*(_DWORD *)(a1 + 944) - *(_DWORD *)(a1 + 936)) - (float)(v65 - v63);
  }
  else if ( (float)(v65 - v63) > 0.0 && (float)(v66 - v64) > 0.0 )
  {
    v21 = *(_DWORD *)(a1 + 944) - *(_DWORD *)(a1 + 936);
    if ( v21 < 0 )
      v21 = 0;
    v22 = _mm_cvtsi32_si128(v21);
    v23 = *(_DWORD *)(a1 + 948) - *(_DWORD *)(a1 + 940);
    LODWORD(v24) = _mm_cvtepi32_ps(v22).m128_u32[0];
    if ( v23 < 0 )
      v23 = 0;
    v11 = v24 / (float)(v65 - v63);
    v13 = (float)v23 / (float)(v66 - v64);
  }
  if ( !(_DWORD)v67 )
    goto LABEL_48;
  if ( !CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(*(_QWORD *)(a1 + 1200) + 40LL)) )
    goto LABEL_48;
  DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef((CWindowNode *)a1);
  if ( !CShape::IsAxisAlignedRectangle(DxClipShapeNoRef)
    || *(_BYTE *)(a1 + 1285)
    || !qword_1801930E8
    || !CDisplaySet::NeedsDesktopMoves(qword_1801930E8) )
  {
    goto LABEL_48;
  }
  v26 = v68[1];
  v27 = v68[2];
  v28 = (float)(int)v68[1];
  v29 = (float)(int)v68[2];
  v57 = (float)(int)v68[1];
  v58 = (float)(int)v68[2];
  v30 = (float)SDWORD1(v67);
  v31 = (float)SDWORD2(v67);
  v63 = (float)SDWORD1(v67);
  v64 = (float)SDWORD2(v67);
  v32 = (float)SHIDWORD(v67);
  v33 = (float)(int)v68[0];
  v65 = (float)SHIDWORD(v67);
  v66 = (float)(int)v68[0];
  if ( !v62 )
    goto LABEL_40;
  if ( (unsigned __int8)CDwmMetaRegion::ExcludeRegionFromRect(&v63) )
  {
    v27 = v68[2];
    v26 = v68[1];
    v33 = v66;
    v32 = v65;
    v31 = v64;
    v30 = v63;
LABEL_40:
    v34 = v30 - (float)v26;
    v35 = v31 - (float)v27;
    v36 = v32 - (float)v26;
    v37 = v33 - (float)v27;
    v63 = v34;
    v64 = v35;
    v65 = v36;
    v66 = v37;
    if ( v20 )
    {
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v71, (const struct MilRectF *)&v63, (struct MilRectF *)&v63);
      CBaseMatrix::Transform((CBaseMatrix *)v71, (const struct MilPoint2F *)&v57, (struct MilPoint2F *)&v57, 1u);
      v37 = v66;
      v36 = v65;
      v35 = v64;
      v34 = v63;
      v29 = v58;
      v28 = v57;
    }
    if ( (_DWORD)SizePreference == 1 )
    {
      if ( *(_BYTE *)(a1 + 1274) )
      {
        v34 = v34 + v14;
        v35 = v35 + 0.0;
        v36 = v36 + v14;
        v37 = v37 + 0.0;
        v28 = v28 + v14;
      }
    }
    else
    {
      v34 = v34 * v11;
      v35 = v35 * v13;
      v36 = v36 * v11;
      v37 = v37 * v13;
      v28 = v28 * v11;
      v29 = v29 * v13;
    }
    v38 = *(_DWORD *)(a1 + 936) - *(_DWORD *)(a1 + 952);
    v39 = *(_DWORD *)(a1 + 940) - *(_DWORD *)(a1 + 956);
    v40 = v34 + 6291456.25;
    rc.left = (int)(LODWORD(v40) << 10) >> 11;
    v41 = v35 + 6291456.25;
    rc.top = (int)(LODWORD(v41) << 10) >> 11;
    v42 = v36 + 6291456.25;
    rc.right = (int)(LODWORD(v42) << 10) >> 11;
    v43 = v37 + 6291456.25;
    rc.bottom = (int)(LODWORD(v43) << 10) >> 11;
    v44 = v28 + 6291456.25;
    v59.x = (int)(LODWORD(v44) << 10) >> 11;
    v57 = v29 + 6291456.25;
    v59.y = (int)(LODWORD(v57) << 10) >> 11;
    OffsetRect(&rc, v38, v39);
    v59.x += v38;
    v59.y += v39;
    CWindowNode::NotifyMoveOptimization((CWindowNode *)a1, &rc, 0LL, &v59, 0LL);
  }
  v12 = 1;
LABEL_48:
  if ( v76 && (*(_BYTE *)(a1 + 88) & 4) == 0 )
  {
    v45 = 0;
    v6 = 1;
    v5 = 0;
    v46 = v76 != 0;
    while ( 1 )
    {
      if ( v46 )
      {
        v47 = (float)*((int *)v75[0] + 4 * v45 + 1);
        v63 = (float)*((int *)v75[0] + 4 * v45);
        v48 = _mm_cvtsi32_si128(*((_DWORD *)v75[0] + 4 * v45 + 2));
        v64 = v47;
        v49 = _mm_cvtsi32_si128(*((_DWORD *)v75[0] + 4 * v45 + 3));
      }
      else
      {
        if ( !(_DWORD)v67 || !*(_QWORD *)&v68[1] )
          goto LABEL_64;
        v63 = (float)SDWORD1(v67);
        v48 = _mm_cvtsi32_si128(HIDWORD(v67));
        v64 = (float)SDWORD2(v67);
        v49 = _mm_cvtsi32_si128(v68[0]);
      }
      LODWORD(v66) = _mm_cvtepi32_ps(v49).m128_u32[0];
      LODWORD(v65) = _mm_cvtepi32_ps(v48).m128_u32[0];
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v71, (const struct MilRectF *)&v63, (struct MilRectF *)&rc);
      v50 = *(float *)&rc.left;
      v51 = *(float *)&rc.top;
      v52 = *(float *)&rc.right;
      v53 = *(float *)&rc.bottom;
      if ( SizePreference == 1 )
      {
        if ( *(_BYTE *)(a1 + 1274) )
        {
          v50 = *(float *)&rc.left + v14;
          v51 = *(float *)&rc.top + 0.0;
          v52 = *(float *)&rc.right + v14;
          v53 = *(float *)&rc.bottom + 0.0;
        }
      }
      else
      {
        v50 = *(float *)&rc.left * v11;
        v51 = *(float *)&rc.top * v13;
        v52 = *(float *)&rc.right * v11;
        v53 = *(float *)&rc.bottom * v13;
      }
      v54 = (float)(*(_DWORD *)(a1 + 940) - *(_DWORD *)(a1 + 892));
      v55 = (float)(*(_DWORD *)(a1 + 936) - *(_DWORD *)(a1 + 888));
      v64 = v51 + v54;
      v63 = v50 + v55;
      v65 = v52 + v55;
      v66 = v53 + v54;
      if ( (int)CWindowNode::AddLocalDirtyRect((CWindowNode *)a1, (struct MilRectF *)&v63, v12) < 0 )
        break;
      v46 = ++v45 < v76;
      if ( v45 > v76 )
        goto LABEL_64;
    }
    v5 = 1;
    v6 = 0;
  }
LABEL_64:
  if ( v60 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  DynArrayImpl<1>::~DynArrayImpl<1>(v75);
LABEL_67:
  if ( v5 || v6 )
    goto LABEL_3;
LABEL_4:
  if ( v61 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v61 + 16LL))(v61);
  return 0LL;
}
