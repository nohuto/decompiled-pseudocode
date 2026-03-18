/*
 * XREFs of ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180029DD0
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x18000D18C (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x18000F79C (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FB30 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800160F4 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x1800266EC (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x180029718 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002C2EC (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D290 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180036584 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180093980 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x180093C80 (-GetSizePreference@CCompositionSurfaceBitmap@@UEBA-AW4SizePreference@@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18009A0C4 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_C_ea_18009A0C4.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@QEAA@XZ @ 0x180110D08 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x180131604 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801381E8 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801403AC (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 */

__int64 __fastcall CWindowNode::OnChanged(__int64 a1, int a2, void (__fastcall ***a3)(void *, GUID *, __int64 *))
{
  char v5; // r14
  char v6; // r15
  CMILCOMBase *v8; // rcx
  __int64 v9; // rax
  struct ISwapChainContent *v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  float v15; // xmm8_4
  char v16; // r13
  float v17; // xmm9_4
  float v18; // xmm7_4
  __int64 SizePreference; // r12
  __int64 v20; // rax
  struct ISwapChainContent *v21; // rcx
  char SwapChainTransformForDirtyRects; // bl
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  signed int v26; // eax
  __m128i v27; // xmm8
  int v28; // eax
  float v29; // xmm8_4
  CShape *DxClipShapeNoRef; // rax
  int v31; // eax
  int v32; // ecx
  float v33; // xmm6_4
  float v34; // xmm10_4
  float v35; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm4_4
  float v38; // xmm5_4
  float v39; // xmm2_4
  float v40; // xmm3_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  int v43; // edi
  int v44; // ebx
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // xmm0_4
  float v48; // xmm0_4
  float v49; // xmm0_4
  unsigned int v50; // ebx
  bool v51; // cf
  float v52; // xmm1_4
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  float v55; // xmm2_4
  float v56; // xmm3_4
  float v57; // xmm4_4
  float v58; // xmm5_4
  float v59; // xmm1_4
  float v60; // xmm0_4
  char v61; // [rsp+48h] [rbp-C0h]
  float v62; // [rsp+50h] [rbp-B8h] BYREF
  float v63; // [rsp+54h] [rbp-B4h]
  struct tagPOINT v64; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A8h] BYREF
  void *v66; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+70h] [rbp-98h] BYREF
  _OWORD v68[4]; // [rsp+78h] [rbp-90h] BYREF
  int v69; // [rsp+B8h] [rbp-50h]
  _OWORD v70[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v71; // [rsp+108h] [rbp+0h]
  _OWORD v72[4]; // [rsp+118h] [rbp+10h] BYREF
  int v73; // [rsp+158h] [rbp+50h]
  _OWORD v74[4]; // [rsp+168h] [rbp+60h] BYREF
  int v75; // [rsp+1A8h] [rbp+A0h]
  float v76; // [rsp+1B8h] [rbp+B0h] BYREF
  float v77; // [rsp+1BCh] [rbp+B4h]
  float v78; // [rsp+1C0h] [rbp+B8h]
  float v79; // [rsp+1C4h] [rbp+BCh]
  int v80; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v81; // [rsp+1CCh] [rbp+C4h]
  __int64 v82; // [rsp+1D4h] [rbp+CCh]
  __int64 v83; // [rsp+1DCh] [rbp+D4h]
  struct tagRECT rc; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD v85[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v86[3]; // [rsp+208h] [rbp+100h] BYREF
  unsigned int v87; // [rsp+220h] [rbp+118h]

  v5 = 1;
  v61 = a2 != 1;
  v66 = 0LL;
  v6 = 0;
  v65 = 0LL;
  if ( a2 != 1
    || !a3
    || (v8 = *(CMILCOMBase **)(a1 + 960)) == 0LL
    || CMILCOMBase::InternalQueryInterface(v8, &GUID_00000000_0000_0000_c000_000000000046, &v66) < 0
    || v66 != a3 )
  {
    if ( !*(_DWORD *)(a1 + 992) )
      goto LABEL_3;
    v61 = 1;
LABEL_70:
    if ( !v5 && !v6 )
      goto LABEL_4;
LABEL_3:
    CVisual::PropagateFlags((struct CVisual *)a1, v61, v5, v6, 0, 0, 0);
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(a1 + 960);
  v10 = (struct ISwapChainContent *)(v9 + 112);
  if ( !v9 )
    v10 = 0LL;
  if ( !CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
          *(CRenderTargetManager **)(*(_QWORD *)(a1 + 16) + 32LL),
          (const struct CVisual *)a1,
          v10) )
  {
    (**a3)(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, &v65);
    if ( !v65 )
      goto LABEL_3;
    v80 = 0;
    v81 = 0LL;
    v82 = 0LL;
    v83 = 0LL;
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>(v86);
    v15 = FLOAT_1_0;
    v16 = 0;
    v17 = FLOAT_1_0;
    v18 = 0.0;
    SizePreference = (int)CCompositionSurfaceBitmap::GetSizePreference(*(_QWORD *)(a1 + 960) + 112LL);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v65 + 24LL))(v65, &v67);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v65 + 32LL))(v65, &v80);
    if ( v67 )
    {
      v87 = 0;
      CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
        v67,
        v86);
    }
    v20 = *(_QWORD *)(a1 + 960);
    v71 = 0;
    v21 = (struct ISwapChainContent *)(v20 + 112);
    if ( !v20 )
      v21 = 0LL;
    SwapChainTransformForDirtyRects = CVisual::GetSwapChainTransformForDirtyRects(v21, (struct CMILMatrix *)v70);
    v69 = v71;
    v23 = *(_QWORD *)(a1 + 960);
    v68[0] = v70[0];
    v68[1] = v70[1];
    v68[2] = v70[2];
    v68[3] = v70[3];
    v73 = 0;
    CCompositionSurfaceBitmap::GetTransform(v23 + 112, (__int64)v72, v85);
    v74[0] = v72[0];
    v74[1] = v72[1];
    v74[2] = v72[2];
    v74[3] = v72[3];
    v75 = v73;
    CMILMatrix::Transform2DBoundsHelper<0>(v74, v85, &v76);
    if ( (_DWORD)SizePreference == 1 )
    {
      if ( *(_BYTE *)(a1 + 1034) )
        v18 = (float)(*(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 696)) - (float)(v78 - v76);
    }
    else if ( (float)(v78 - v76) > 0.0 && (float)(v79 - v77) > 0.0 )
    {
      v26 = *(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 696);
      if ( v26 < 0 )
        v26 = 0;
      v27 = _mm_cvtsi32_si128(v26);
      v28 = *(_DWORD *)(a1 + 708) - *(_DWORD *)(a1 + 700);
      LODWORD(v29) = _mm_cvtepi32_ps(v27).m128_u32[0];
      if ( v28 < 0 )
        v28 = 0;
      v15 = v29 / (float)(v78 - v76);
      v17 = (float)v28 / (float)(v79 - v77);
    }
    if ( !v80 )
      goto LABEL_53;
    if ( !CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(*(_QWORD *)(a1 + 960) + 120LL)) )
      goto LABEL_53;
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef((CWindowNode *)a1);
    if ( !CShape::IsAxisAlignedRectangle(DxClipShapeNoRef)
      || *(_BYTE *)(a1 + 1045)
      || !qword_1801EFD28
      || !CDisplaySet::NeedsDesktopMoves(qword_1801EFD28) )
    {
      goto LABEL_53;
    }
    v31 = v83;
    v32 = HIDWORD(v83);
    v33 = (float)(int)v83;
    v34 = (float)SHIDWORD(v83);
    v62 = (float)(int)v83;
    v63 = (float)SHIDWORD(v83);
    v35 = (float)(int)v81;
    v36 = (float)SHIDWORD(v81);
    v76 = (float)(int)v81;
    v77 = (float)SHIDWORD(v81);
    v37 = (float)(int)v82;
    v38 = (float)SHIDWORD(v82);
    v78 = (float)(int)v82;
    v79 = (float)SHIDWORD(v82);
    if ( v67 )
    {
      if ( !(unsigned __int8)CDwmMetaRegion::ExcludeRegionFromRect(&v76) )
      {
LABEL_52:
        v16 = 1;
LABEL_53:
        if ( v87 && (*(_BYTE *)(a1 + 152) & 4) == 0 )
        {
          v50 = 0;
          v6 = 1;
          v5 = 0;
          v51 = v87 != 0;
          while ( 1 )
          {
            if ( v51 )
            {
              v52 = (float)*(int *)(v86[0] + 16LL * v50 + 4);
              v76 = (float)*(int *)(v86[0] + 16LL * v50);
              v53 = _mm_cvtsi32_si128(*(_DWORD *)(v86[0] + 16LL * v50 + 8));
              v77 = v52;
              v54 = _mm_cvtsi32_si128(*(_DWORD *)(v86[0] + 16LL * v50 + 12));
            }
            else
            {
              if ( !v80 || !v83 )
                goto LABEL_67;
              v76 = (float)(int)v81;
              v53 = _mm_cvtsi32_si128(v82);
              v77 = (float)SHIDWORD(v81);
              v54 = _mm_cvtsi32_si128(HIDWORD(v82));
            }
            LODWORD(v79) = _mm_cvtepi32_ps(v54).m128_u32[0];
            LODWORD(v78) = _mm_cvtepi32_ps(v53).m128_u32[0];
            CMILMatrix::Transform2DBoundsHelper<0>(v68, &v76, &rc);
            v55 = *(float *)&rc.left;
            v56 = *(float *)&rc.top;
            v57 = *(float *)&rc.right;
            v58 = *(float *)&rc.bottom;
            if ( SizePreference == 1 )
            {
              if ( *(_BYTE *)(a1 + 1034) )
              {
                v55 = *(float *)&rc.left + v18;
                v56 = *(float *)&rc.top + 0.0;
                v57 = *(float *)&rc.right + v18;
                v58 = *(float *)&rc.bottom + 0.0;
              }
            }
            else
            {
              v55 = *(float *)&rc.left * v15;
              v56 = *(float *)&rc.top * v17;
              v57 = *(float *)&rc.right * v15;
              v58 = *(float *)&rc.bottom * v17;
            }
            v59 = (float)(*(_DWORD *)(a1 + 700) - *(_DWORD *)(a1 + 652));
            v60 = (float)(*(_DWORD *)(a1 + 696) - *(_DWORD *)(a1 + 648));
            v77 = v56 + v59;
            v76 = v55 + v60;
            v78 = v57 + v60;
            v79 = v58 + v59;
            if ( (int)CWindowNode::AddLocalDirtyRect((CWindowNode *)a1, (struct MilRectF *)&v76, v16) < 0 )
              break;
            v51 = ++v50 < v87;
            if ( v50 > v87 )
              goto LABEL_67;
          }
          v5 = 1;
          v6 = 0;
        }
LABEL_67:
        if ( v65 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
        DynArrayImpl<1>::~DynArrayImpl<1>(v86, v24, v25);
        goto LABEL_70;
      }
      v32 = HIDWORD(v83);
      v31 = v83;
      v38 = v79;
      v37 = v78;
      v36 = v77;
      v35 = v76;
    }
    v39 = v35 - (float)v31;
    v40 = v36 - (float)v32;
    v41 = v37 - (float)v31;
    v42 = v38 - (float)v32;
    v76 = v39;
    v77 = v40;
    v78 = v41;
    v79 = v42;
    if ( SwapChainTransformForDirtyRects )
    {
      CMILMatrix::Transform2DBoundsHelper<0>(v68, &v76, &v76);
      CMILMatrix::Transform((CMILMatrix *)v68, (const struct MilPoint2F *)&v62, (struct MilPoint2F *)&v62, 1);
      v42 = v79;
      v41 = v78;
      v40 = v77;
      v39 = v76;
      v34 = v63;
      v33 = v62;
    }
    if ( (_DWORD)SizePreference == 1 )
    {
      if ( *(_BYTE *)(a1 + 1034) )
      {
        v39 = v39 + v18;
        v40 = v40 + 0.0;
        v41 = v41 + v18;
        v42 = v42 + 0.0;
        v33 = v33 + v18;
      }
    }
    else
    {
      v39 = v39 * v15;
      v40 = v40 * v17;
      v41 = v41 * v15;
      v42 = v42 * v17;
      v33 = v33 * v15;
      v34 = v34 * v17;
    }
    v43 = *(_DWORD *)(a1 + 696) - *(_DWORD *)(a1 + 712);
    v44 = *(_DWORD *)(a1 + 700) - *(_DWORD *)(a1 + 716);
    v45 = v39 + 6291456.25;
    rc.left = (int)(LODWORD(v45) << 10) >> 11;
    v46 = v40 + 6291456.25;
    rc.top = (int)(LODWORD(v46) << 10) >> 11;
    v47 = v41 + 6291456.25;
    rc.right = (int)(LODWORD(v47) << 10) >> 11;
    v48 = v42 + 6291456.25;
    rc.bottom = (int)(LODWORD(v48) << 10) >> 11;
    v49 = v33 + 6291456.25;
    v64.x = (int)(LODWORD(v49) << 10) >> 11;
    v62 = v34 + 6291456.25;
    v64.y = (int)(LODWORD(v62) << 10) >> 11;
    OffsetRect(&rc, v43, v44);
    v64.x += v43;
    v64.y += v44;
    CWindowNode::NotifyMoveOptimization((CWindowNode *)a1, &rc, 0LL, &v64, 0LL);
    goto LABEL_52;
  }
  CVisual::DirtySecondaryRepresentations((CVisual *)a1);
  v11 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( *(_DWORD *)(v12 + 48) )
  {
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v11);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, 38LL) )
      {
        v14 = *(_QWORD **)(*(_QWORD *)(v12 + 24) + 8LL * v11);
        if ( *(_QWORD *)(v14[19] + 136LL) != v14[19] )
          (*(void (__fastcall **)(_QWORD *))(*v14 + 168LL))(v14);
      }
      ++v11;
    }
    while ( v11 < *(_DWORD *)(v12 + 48) );
  }
LABEL_4:
  if ( v66 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v66 + 16LL))(v66);
  return 0LL;
}
