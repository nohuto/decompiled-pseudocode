/*
 * XREFs of ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x180007444 (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 *     ?NotifyOfDirtyFromOverlaysOrDirectFlip@CRenderTargetManager@@QEAAXXZ @ 0x18000750C (-NotifyOfDirtyFromOverlaysOrDirectFlip@CRenderTargetManager@@QEAAXXZ.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1800091A0 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x18000B3E8 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BE50 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18001401C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18001B594 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x18002E610 (-GetSizePreference@CCompositionSurfaceBitmap@@UEBA-AW4SizePreference@@XZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18002E670 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18004DB78 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x18005EE4C (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18006D524 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_C_ea_18006D524.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085ED8 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@QEAA@XZ @ 0x1800FBFA0 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1801173E8 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180123A8C (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 */

__int64 __fastcall CWindowNode::OnChanged(__int64 a1, int a2, void (__fastcall ***a3)(void *, GUID *, __int64 *))
{
  bool v5; // r14
  bool v6; // r15
  CMILCOMBase *v8; // rcx
  __int64 v9; // rax
  struct ISwapChainContent *v10; // r8
  float v11; // xmm8_4
  char v12; // r13
  float v13; // xmm9_4
  float v14; // xmm7_4
  __int64 SizePreference; // r12
  __int64 v16; // rax
  struct ISwapChainContent *v17; // rcx
  char SwapChainTransformForDirtyRects; // al
  __int64 v19; // rcx
  char v20; // bl
  __int64 v21; // rdx
  signed int v22; // eax
  __m128i v23; // xmm8
  int v24; // eax
  float v25; // xmm8_4
  CShape *DxClipShapeNoRef; // rax
  __int64 v27; // r9
  int v28; // edx
  unsigned int v29; // r8d
  int v30; // eax
  int v31; // ecx
  float v32; // xmm6_4
  float v33; // xmm10_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm5_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  int v42; // edi
  int v43; // ebx
  float v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // xmm0_4
  float v48; // xmm0_4
  unsigned int v49; // ebx
  bool v50; // cf
  float v51; // xmm1_4
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  float v54; // xmm2_4
  float v55; // xmm3_4
  float v56; // xmm4_4
  float v57; // xmm5_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  bool v60; // [rsp+48h] [rbp-C0h]
  float v61; // [rsp+50h] [rbp-B8h] BYREF
  float v62; // [rsp+54h] [rbp-B4h]
  struct tagPOINT v63; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A8h] BYREF
  void *v65; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+70h] [rbp-98h] BYREF
  float v67; // [rsp+78h] [rbp-90h] BYREF
  float v68; // [rsp+7Ch] [rbp-8Ch]
  float v69; // [rsp+80h] [rbp-88h]
  float v70; // [rsp+84h] [rbp-84h]
  __int128 v71; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v72[4]; // [rsp+98h] [rbp-70h]
  struct tagRECT rc; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v74[2]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v75[4]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v76[4]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v77[4]; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v78[4]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v79[3]; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned int v80; // [rsp+1E0h] [rbp+D8h]

  v5 = 1;
  v60 = a2 != 1;
  v65 = 0LL;
  v6 = 0;
  v64 = 0LL;
  if ( a2 != 1
    || !a3
    || (v8 = *(CMILCOMBase **)(a1 + 1152)) == 0LL
    || (int)CMILCOMBase::InternalQueryInterface(v8, &GUID_00000000_0000_0000_c000_000000000046, &v65) < 0
    || v65 != a3 )
  {
    if ( *(_DWORD *)(a1 + 1184) )
    {
      v60 = 1;
      goto LABEL_71;
    }
LABEL_3:
    CVisual::PropagateFlags((struct CVisual *)a1, v60, v5, v6, 0, 0, 0);
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(a1 + 1152);
  v10 = (struct ISwapChainContent *)(v9 + 40);
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
  (**a3)(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, &v64);
  if ( !v64 )
    goto LABEL_3;
  *(_QWORD *)v72 = 0LL;
  v72[2] = 0;
  v71 = 0LL;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>(v79);
  v11 = FLOAT_1_0;
  v12 = 0;
  v13 = FLOAT_1_0;
  v14 = 0.0;
  SizePreference = (int)CCompositionSurfaceBitmap::GetSizePreference(*(_QWORD *)(a1 + 1152) + 40LL);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v64 + 24LL))(v64, &v66);
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v64 + 32LL))(v64, &v71);
  if ( v66 )
  {
    v80 = 0;
    CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
      v66,
      v79);
  }
  v16 = *(_QWORD *)(a1 + 1152);
  v17 = (struct ISwapChainContent *)(v16 + 40);
  if ( !v16 )
    v17 = 0LL;
  SwapChainTransformForDirtyRects = CVisual::GetSwapChainTransformForDirtyRects(v17, (struct CMILMatrix *)v76);
  v19 = *(_QWORD *)(a1 + 1152);
  v20 = SwapChainTransformForDirtyRects;
  v75[0] = v76[0];
  v75[1] = v76[1];
  v75[2] = v76[2];
  v75[3] = v76[3];
  CCompositionSurfaceBitmap::GetTransform(v19 + 40, (__int64)v78, v74);
  v77[0] = v78[0];
  v77[1] = v78[1];
  v77[2] = v78[2];
  v77[3] = v78[3];
  CBaseMatrix::Transform2DBounds((CBaseMatrix *)v77, (const struct MilRectF *)v74, (struct MilRectF *)&v67);
  if ( (_DWORD)SizePreference == 1 )
  {
    if ( *(_BYTE *)(a1 + 1226) )
      v14 = (float)(*(_DWORD *)(a1 + 896) - *(_DWORD *)(a1 + 888)) - (float)(v69 - v67);
  }
  else if ( (float)(v69 - v67) > 0.0 && (float)(v70 - v68) > 0.0 )
  {
    v22 = *(_DWORD *)(a1 + 896) - *(_DWORD *)(a1 + 888);
    if ( v22 < 0 )
      v22 = 0;
    v23 = _mm_cvtsi32_si128(v22);
    v24 = *(_DWORD *)(a1 + 900) - *(_DWORD *)(a1 + 892);
    LODWORD(v25) = _mm_cvtepi32_ps(v23).m128_u32[0];
    if ( v24 < 0 )
      v24 = 0;
    v11 = v25 / (float)(v69 - v67);
    v13 = (float)v24 / (float)(v70 - v68);
  }
  if ( !(_DWORD)v71 )
    goto LABEL_52;
  if ( !CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(*(_QWORD *)(a1 + 1152) + 48LL)) )
    goto LABEL_52;
  DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef((CWindowNode *)a1);
  if ( !CShape::IsAxisAlignedRectangle(DxClipShapeNoRef) )
    goto LABEL_52;
  if ( *(_BYTE *)(a1 + 1237) )
    goto LABEL_52;
  if ( !qword_1801A39E8 )
    goto LABEL_52;
  v21 = 0LL;
  if ( !*((_DWORD *)qword_1801A39E8 + 18) )
    goto LABEL_52;
  v27 = *((_QWORD *)qword_1801A39E8 + 6);
  while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v27 + 8LL * (unsigned int)v21)) )
  {
    v21 = (unsigned int)(v28 + 1);
    if ( (unsigned int)v21 >= v29 )
      goto LABEL_52;
  }
  v30 = v72[1];
  v31 = v72[2];
  v32 = (float)(int)v72[1];
  v33 = (float)(int)v72[2];
  v61 = (float)(int)v72[1];
  v62 = (float)(int)v72[2];
  v34 = (float)SDWORD1(v71);
  v35 = (float)SDWORD2(v71);
  v67 = (float)SDWORD1(v71);
  v68 = (float)SDWORD2(v71);
  v36 = (float)SHIDWORD(v71);
  v37 = (float)(int)v72[0];
  v69 = (float)SHIDWORD(v71);
  v70 = (float)(int)v72[0];
  if ( !v66 )
    goto LABEL_44;
  if ( (unsigned __int8)CDwmMetaRegion::ExcludeRegionFromRect(&v67) )
  {
    v31 = v72[2];
    v30 = v72[1];
    v37 = v70;
    v36 = v69;
    v35 = v68;
    v34 = v67;
LABEL_44:
    v38 = v34 - (float)v30;
    v39 = v35 - (float)v31;
    v40 = v36 - (float)v30;
    v41 = v37 - (float)v31;
    v67 = v38;
    v68 = v39;
    v69 = v40;
    v70 = v41;
    if ( v20 )
    {
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v75, (const struct MilRectF *)&v67, (struct MilRectF *)&v67);
      CBaseMatrix::Transform((CBaseMatrix *)v75, (const struct MilPoint2F *)&v61, (struct MilPoint2F *)&v61, 1);
      v41 = v70;
      v40 = v69;
      v39 = v68;
      v38 = v67;
      v33 = v62;
      v32 = v61;
    }
    if ( (_DWORD)SizePreference == 1 )
    {
      if ( *(_BYTE *)(a1 + 1226) )
      {
        v38 = v38 + v14;
        v39 = v39 + 0.0;
        v40 = v40 + v14;
        v41 = v41 + 0.0;
        v32 = v32 + v14;
      }
    }
    else
    {
      v38 = v38 * v11;
      v39 = v39 * v13;
      v40 = v40 * v11;
      v41 = v41 * v13;
      v32 = v32 * v11;
      v33 = v33 * v13;
    }
    v42 = *(_DWORD *)(a1 + 888) - *(_DWORD *)(a1 + 904);
    v43 = *(_DWORD *)(a1 + 892) - *(_DWORD *)(a1 + 908);
    v44 = v38 + 6291456.25;
    rc.left = (int)(LODWORD(v44) << 10) >> 11;
    v45 = v39 + 6291456.25;
    rc.top = (int)(LODWORD(v45) << 10) >> 11;
    v46 = v40 + 6291456.25;
    rc.right = (int)(LODWORD(v46) << 10) >> 11;
    v47 = v41 + 6291456.25;
    rc.bottom = (int)(LODWORD(v47) << 10) >> 11;
    v48 = v32 + 6291456.25;
    v63.x = (int)(LODWORD(v48) << 10) >> 11;
    v61 = v33 + 6291456.25;
    v63.y = (int)(LODWORD(v61) << 10) >> 11;
    OffsetRect(&rc, v42, v43);
    v63.x += v42;
    v63.y += v43;
    CWindowNode::NotifyMoveOptimization((CWindowNode *)a1, &rc, 0LL, &v63, 0LL);
  }
  v12 = 1;
LABEL_52:
  if ( v80 && (*(_BYTE *)(a1 + 72) & 4) == 0 )
  {
    v49 = 0;
    v6 = 1;
    v5 = 0;
    v50 = v80 != 0;
    while ( 1 )
    {
      if ( v50 )
      {
        v51 = (float)*(int *)(v79[0] + 16LL * v49 + 4);
        v67 = (float)*(int *)(v79[0] + 16LL * v49);
        v52 = _mm_cvtsi32_si128(*(_DWORD *)(v79[0] + 16LL * v49 + 8));
        v68 = v51;
        v53 = _mm_cvtsi32_si128(*(_DWORD *)(v79[0] + 16LL * v49 + 12));
      }
      else
      {
        if ( !(_DWORD)v71 || !*(_QWORD *)&v72[1] )
          goto LABEL_68;
        v67 = (float)SDWORD1(v71);
        v52 = _mm_cvtsi32_si128(HIDWORD(v71));
        v68 = (float)SDWORD2(v71);
        v53 = _mm_cvtsi32_si128(v72[0]);
      }
      LODWORD(v70) = _mm_cvtepi32_ps(v53).m128_u32[0];
      LODWORD(v69) = _mm_cvtepi32_ps(v52).m128_u32[0];
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v75, (const struct MilRectF *)&v67, (struct MilRectF *)&rc);
      v54 = *(float *)&rc.left;
      v55 = *(float *)&rc.top;
      v56 = *(float *)&rc.right;
      v57 = *(float *)&rc.bottom;
      if ( SizePreference == 1 )
      {
        if ( *(_BYTE *)(a1 + 1226) )
        {
          v54 = *(float *)&rc.left + v14;
          v55 = *(float *)&rc.top + 0.0;
          v56 = *(float *)&rc.right + v14;
          v57 = *(float *)&rc.bottom + 0.0;
        }
      }
      else
      {
        v54 = *(float *)&rc.left * v11;
        v55 = *(float *)&rc.top * v13;
        v56 = *(float *)&rc.right * v11;
        v57 = *(float *)&rc.bottom * v13;
      }
      v58 = (float)(*(_DWORD *)(a1 + 892) - *(_DWORD *)(a1 + 844));
      v59 = (float)(*(_DWORD *)(a1 + 888) - *(_DWORD *)(a1 + 840));
      v68 = v55 + v58;
      v67 = v54 + v59;
      v69 = v56 + v59;
      v70 = v57 + v58;
      if ( (int)CWindowNode::AddLocalDirtyRect((CWindowNode *)a1, (struct MilRectF *)&v67, v12) < 0 )
        break;
      v50 = ++v49 < v80;
      if ( v49 > v80 )
        goto LABEL_68;
    }
    v5 = 1;
    v6 = 0;
  }
LABEL_68:
  if ( v64 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 16LL))(v64, v21);
  DynArrayImpl<1>::~DynArrayImpl<1>(v79);
LABEL_71:
  if ( v5 || v6 )
    goto LABEL_3;
LABEL_4:
  if ( v65 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v65 + 16LL))(v65);
  return 0LL;
}
