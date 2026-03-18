/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480
 * Callers:
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001AD10 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800484B0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetImageTransformForDirtyRects@CVisual@@KA_NPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x180003578 (-GetImageTransformForDirtyRects@CVisual@@KA_NPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?NotifyOfDirtyFromOverlaysOrDirectFlip@CRenderTargetManager@@QEAAXXZ @ 0x180007718 (-NotifyOfDirtyFromOverlaysOrDirectFlip@CRenderTargetManager@@QEAAXXZ.c)
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVIImageSource@@@Z @ 0x180007850 (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVIImageSource@@@Z.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008CE0 (-IsSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008D00 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAJPEAPEBVCRegion@@@Z @ 0x180008DC0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAJPEAPEBVCRegion@@@Z.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x18000BAAC (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180015F00 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?QueryInterface@CDxHandleDecodeBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B860 (-QueryInterface@CDxHandleDecodeBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180034D20 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?GetContentAsPrimitiveNoRef@CVisual@@AEBA_NPEAPEAVCPrimitive@@@Z @ 0x180035E10 (-GetContentAsPrimitiveNoRef@CVisual@@AEBA_NPEAPEAVCPrimitive@@@Z.c)
 *     ?GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z @ 0x180035E9C (-GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180036324 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800363D8 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180036410 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800364E0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18003C7E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18004005C (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800468D0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180048180 (-Release@CResource@@UEAAKXZ.c)
 *     ?QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048260 (-QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004F290 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180054CAC (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x180059C80 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDirtyRegion@CPrimitiveGroup@@UEAAJPEAPEBVCRegion@@@Z @ 0x18006E050 (-GetDirtyRegion@CPrimitiveGroup@@UEAAJPEAPEBVCRegion@@@Z.c)
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18006E070 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 *     ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006E0D0 (-QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006E400 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetSrollOptimization@CCompositionSurfaceBitmap@@UEAAJPEAUScrollOptimization@@@Z @ 0x180087510 (-GetSrollOptimization@CCompositionSurfaceBitmap@@UEAAJPEAUScrollOptimization@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180087700 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180088DA4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1800E9E04 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x1800FCC20 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1801049A4 (-ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18010A440 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 */

__int64 __fastcall CVisual::OnChanged(__int64 a1, int a2, CPrimitiveGroup *a3)
{
  char v3; // r13
  CCompositionSurfaceBitmap *v5; // rdi
  bool v6; // r12
  char v8; // r14
  CCompositionSurfaceBitmap *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // al
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  bool j; // r13
  char v16; // al
  char v17; // cl
  bool v18; // al
  __int64 v19; // rax
  char v20; // cl
  bool v21; // al
  char v22; // al
  bool v23; // cl
  bool v24; // zf
  __int64 v25; // rdi
  char v26; // bl
  __int64 (__fastcall *v27)(_QWORD, __int64); // r14
  char v28; // al
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(_QWORD, __int64); // r14
  char v31; // al
  CCompositionSurfaceBitmap *v32; // rdi
  CResource *v34; // rbx
  __int64 (__fastcall *v35)(CResource *__hidden, const struct _GUID *, void **); // rdi
  CDxHandleYUVBitmapRealization *v36; // rbx
  CPrimitiveGroup *v37; // r14
  char v38; // al
  _QWORD **v39; // rax
  _QWORD *v40; // rcx
  _QWORD *v41; // rcx
  unsigned int (__fastcall *v42)(CResource *__hidden); // rdi
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(_QWORD, __int64); // rdi
  char v45; // al
  __int64 (__fastcall *v46)(_QWORD, __int64); // rdi
  char v47; // al
  __int64 v48; // rax
  CDxHandleDecodeBitmapRealization *Transform3DEffectNoRef; // rbx
  __int64 (__fastcall *v50)(CDxHandleDecodeBitmapRealization *, const struct _GUID *, void **); // rdi
  CDxHandleYUVBitmapRealization *v51; // rbx
  unsigned int (__fastcall *v52)(CDxHandleYUVBitmapRealization *); // rdi
  __int64 (__fastcall *v53)(CCompositionSurfaceBitmap *, const struct _GUID *, void **); // rdi
  unsigned int (__fastcall *v54)(CBitmapRealization *__hidden); // rbx
  CCompositionSurfaceBitmap *v55; // rdi
  __int64 (__fastcall *v56)(CCompositionSurfaceBitmap *, const struct _GUID *, void **); // rbx
  __int64 (__fastcall *v57)(CCompositionSurfaceBitmap *, const struct _GUID *, void **); // rbx
  __int64 (__fastcall *v58)(CCompositionSurfaceBitmap *, const struct CRegion **); // rbx
  int DirtyRegion; // eax
  __int64 (__fastcall *v60)(CCompositionSurfaceBitmap *__hidden, struct ScrollOptimization *); // rbx
  int SrollOptimization; // eax
  struct CRegion *v62; // rbx
  _DWORD *v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  int v66; // eax
  unsigned int v67; // r10d
  int v68; // eax
  _DWORD *v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  FastRegion::Internal::CRgnData *v74; // rcx
  FastRegion::Internal::CRgnData *v75; // rcx
  int v76; // r10d
  char ImageTransformForDirtyRects; // r15
  bool (__fastcall *v78)(CCompositionSurfaceBitmap *); // rbx
  bool IsSwapChain; // al
  float v80; // xmm1_4
  int v81; // ebx
  _BYTE *v82; // rax
  __m128i v83; // xmm4
  __m128i v84; // xmm3
  float v85; // xmm6_4
  float v86; // xmm5_4
  unsigned __int32 v87; // xmm4_4
  float v88; // xmm3_4
  float v89; // xmm4_4
  float v90; // xmm5_4
  float v91; // xmm4_4
  float v92; // xmm6_4
  float v93; // xmm5_4
  float v94; // xmm3_4
  int v95; // eax
  _QWORD *i; // rdi
  unsigned int v97; // r9d
  __int64 v98; // rax
  unsigned __int64 v99; // rax
  CVisual *v100; // rax
  int v101; // r9d
  __int64 v102; // r15
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // r15
  __int64 v105; // r12
  unsigned __int64 v106; // rax
  char *v107; // rcx
  unsigned __int32 v108; // xmm0_4
  unsigned __int32 v109; // xmm1_4
  int v110; // eax
  int v111; // eax
  char v112; // [rsp+38h] [rbp-D0h]
  char v113; // [rsp+39h] [rbp-CFh]
  CDxHandleYUVBitmapRealization *v114; // [rsp+40h] [rbp-C8h] BYREF
  CCompositionSurfaceBitmap *v115; // [rsp+48h] [rbp-C0h] BYREF
  CCompositionSurfaceBitmap *v116; // [rsp+50h] [rbp-B8h] BYREF
  CBitmapRealization *v117; // [rsp+58h] [rbp-B0h] BYREF
  CPrimitiveGroup *v118; // [rsp+60h] [rbp-A8h]
  struct CRegion *v119; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v120[3]; // [rsp+70h] [rbp-98h] BYREF
  struct CPrimitive *v121[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v122; // [rsp+98h] [rbp-70h] BYREF
  int v123; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v124; // [rsp+ACh] [rbp-5Ch]
  __int64 v125; // [rsp+B4h] [rbp-54h]
  __int64 v126; // [rsp+BCh] [rbp-4Ch]
  _BYTE *v127; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE *v128; // [rsp+D0h] [rbp-38h]
  int v129; // [rsp+D8h] [rbp-30h]
  __int64 v130; // [rsp+DCh] [rbp-2Ch]
  _BYTE v131[64]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v132[48]; // [rsp+128h] [rbp+20h] BYREF
  float v133; // [rsp+158h] [rbp+50h]
  float v134; // [rsp+15Ch] [rbp+54h]
  struct CPrimitive *v135; // [rsp+168h] [rbp+60h] BYREF
  __int128 v136; // [rsp+170h] [rbp+68h]
  FastRegion::Internal::CRgnData *v137; // [rsp+180h] [rbp+78h]
  int v138; // [rsp+188h] [rbp+80h]
  int v139; // [rsp+18Ch] [rbp+84h]

  v3 = 0;
  v5 = 0LL;
  v6 = 0;
  v118 = a3;
  LODWORD(v114) = a2;
  v116 = 0LL;
  v115 = 0LL;
  v113 = 0;
  v117 = 0LL;
  switch ( a2 )
  {
    case 2:
LABEL_6:
      v8 = 1;
      v112 = 1;
      break;
    case 1:
      v8 = 0;
      v112 = 1;
      break;
    case 3:
      v8 = 1;
      v112 = 0;
      break;
    case 4:
      v6 = 0;
      if ( qword_1801930E8 )
        v6 = CDisplaySet::NeedsDesktopMoves(qword_1801930E8);
      CVisual::OnClipChanged((CVisual *)a1);
      break;
    case 5:
      CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(a1 + 568));
      for ( i = *(_QWORD **)(a1 + 432); i != (_QWORD *)(a1 + 432); i = (_QWORD *)*i )
        CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(i - 18));
      goto LABEL_42;
    default:
      goto LABEL_6;
  }
  v9 = *(CCompositionSurfaceBitmap **)(a1 + 376);
  v10 = (__int64)CResource::QueryInterface;
  if ( !v9 )
    goto LABEL_8;
  v53 = **(__int64 (__fastcall ***)(CCompositionSurfaceBitmap *, const struct _GUID *, void **))v9;
  if ( v53 == CCompositionSurfaceBitmap::QueryInterface )
  {
    CCompositionSurfaceBitmap::QueryInterface(v9, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v117);
  }
  else if ( v53 == CResource::QueryInterface )
  {
    CResource::QueryInterface(v9, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v117);
  }
  else if ( v53 == CPrimitiveGroup::QueryInterface )
  {
    CPrimitiveGroup::QueryInterface(v9, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v117);
  }
  else
  {
    v53(v9, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v117);
  }
  if ( a2 != 1 )
    goto LABEL_160;
  v55 = v118;
  if ( v118 != v117 )
    goto LABEL_160;
  v56 = **(__int64 (__fastcall ***)(CCompositionSurfaceBitmap *, const struct _GUID *, void **))v118;
  if ( v56 == CCompositionSurfaceBitmap::QueryInterface )
  {
    CCompositionSurfaceBitmap::QueryInterface(v118, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, (void **)&v116);
  }
  else if ( v56 == CPrimitiveGroup::QueryInterface )
  {
    CPrimitiveGroup::QueryInterface(v118, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, (void **)&v116);
  }
  else
  {
    v56(v118, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, (void **)&v116);
  }
  v57 = **(__int64 (__fastcall ***)(CCompositionSurfaceBitmap *, const struct _GUID *, void **))v55;
  if ( v57 == CCompositionSurfaceBitmap::QueryInterface )
  {
    CCompositionSurfaceBitmap::QueryInterface(v55, &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552, (void **)&v115);
  }
  else if ( v57 == CPrimitiveGroup::QueryInterface )
  {
    CPrimitiveGroup::QueryInterface(v55, &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552, (void **)&v115);
  }
  else
  {
    v57(v55, &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552, (void **)&v115);
  }
  if ( v115
    && CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
         *(CRenderTargetManager **)(*(_QWORD *)(a1 + 16) + 32LL),
         (const struct CVisual *)a1,
         v115) )
  {
    CVisual::DirtySecondaryRepresentations((CVisual *)a1);
    CRenderTargetManager::NotifyOfDirtyFromOverlaysOrDirectFlip(*(CRenderTargetManager **)(*(_QWORD *)(a1 + 16) + 32LL));
    goto LABEL_42;
  }
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v127 = v131;
  v128 = v131;
  v123 = 0;
  v129 = 4;
  v130 = 4LL;
  if ( !v116 )
  {
LABEL_237:
    if ( !v123 )
    {
      v3 = 0;
      v5 = 0LL;
LABEL_158:
      v113 = v3;
      if ( v127 == v128 )
        goto LABEL_8;
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v127);
      goto LABEL_160;
    }
LABEL_120:
    ImageTransformForDirtyRects = 0;
    if ( !v115
      || ((v122 = 0LL,
           ImageTransformForDirtyRects = CVisual::GetImageTransformForDirtyRects(v115, (struct CMILMatrix *)v132),
           v78 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v115 + 24LL),
           v78 != CCompositionSurfaceBitmap::IsSwapChain)
        ? (IsSwapChain = v78(v115))
        : (IsSwapChain = CCompositionSurfaceBitmap::IsSwapChain(v115)),
          !IsSwapChain
       || (v80 = *(float *)(a1 + 152),
           DWORD2(v122) = *(_DWORD *)(a1 + 148),
           *((float *)&v122 + 3) = v80,
           *((float *)&v122 + 2) == 0.0)
       || v80 == 0.0) )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = v115;
      if ( v115 )
      {
        v107 = (char *)v115 - 40;
        v5 = 0LL;
      }
      else
      {
        v107 = 0LL;
      }
      ImageTransformForDirtyRects |= CCompositionSurfaceBitmap::AppendSizePreferenceTransform(v107, &v122, v132);
    }
    if ( v123 )
    {
      *(float *)&v120[1] = (float)(int)v124;
      *((float *)&v120[1] + 1) = (float)SHIDWORD(v124);
      *(float *)&v120[2] = (float)(int)v125;
      *((float *)&v120[2] + 1) = (float)SHIDWORD(v125);
      v108 = _mm_shuffle_ps(*(__m128 *)&v120[1], *(__m128 *)&v120[1], 85).m128_u32[0];
      v109 = _mm_shuffle_ps(*(__m128 *)&v120[1], *(__m128 *)&v120[1], 170).m128_u32[0];
      HIDWORD(v120[2]) = _mm_shuffle_ps(*(__m128 *)&v120[1], *(__m128 *)&v120[1], 255).m128_u32[0];
      *(_QWORD *)((char *)&v120[1] + 4) = __PAIR64__(v109, v108);
      if ( ImageTransformForDirtyRects )
      {
        CBaseMatrix::Transform2DBounds((CBaseMatrix *)v132, (const struct MilRectF *)&v120[1], (struct MilRectF *)v121);
        *(_OWORD *)&v120[1] = *(_OWORD *)v121;
      }
      v110 = CVisual::AddAdditionalDirtyRects((CVisual *)a1, (const struct MilRectF *)&v120[1]);
      if ( v110 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v110, 0x1A2u);
        goto LABEL_236;
      }
    }
    v81 = 0;
    if ( HIDWORD(v130) )
    {
      while ( 1 )
      {
        v82 = &v127[16 * v81];
        v83 = _mm_cvtsi32_si128(*((_DWORD *)v82 + 2));
        v84 = _mm_cvtsi32_si128(*((_DWORD *)v82 + 3));
        v85 = (float)*(int *)v82;
        v86 = (float)*((int *)v82 + 1);
        *(float *)&v120[1] = v85;
        *((float *)&v120[1] + 1) = v86;
        v87 = _mm_cvtepi32_ps(v83).m128_u32[0];
        LODWORD(v88) = _mm_cvtepi32_ps(v84).m128_u32[0];
        v120[2] = __PAIR64__(LODWORD(v88), v87);
        if ( ImageTransformForDirtyRects )
        {
          *(_QWORD *)&v122 = __PAIR64__(LODWORD(v86), LODWORD(v85));
          *((_QWORD *)&v122 + 1) = __PAIR64__(LODWORD(v88), v87);
          if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v132) )
          {
            v92 = v85 + v133;
            v93 = v90 + v134;
            v91 = v89 + v133;
            v94 = v88 + v134;
          }
          else
          {
            CBaseMatrix::Transform2DRectToPerspective(
              (CBaseMatrix *)v132,
              (const struct MilRectF *)&v122,
              (struct MilPoint2F *const)&v135);
            LODWORD(v91) = v136;
            v121[0] = v135;
            v120[0] = v135;
            if ( *(float *)&v135 > *(float *)&v136 )
              LODWORD(v92) = v136;
            else
              v92 = *(float *)v120;
            v93 = *((float *)v120 + 1);
            if ( *((float *)v120 + 1) > *((float *)&v136 + 1) )
              v93 = *((float *)&v136 + 1);
            if ( *(float *)&v136 <= *(float *)&v135 )
              v91 = *(float *)v121;
            v94 = *((float *)v121 + 1);
            if ( *((float *)&v136 + 1) > *((float *)v121 + 1) )
              v94 = *((float *)&v136 + 1);
            if ( v92 > *((float *)&v136 + 2) )
              v92 = *((float *)&v136 + 2);
            if ( v93 > *((float *)&v136 + 3) )
              v93 = *((float *)&v136 + 3);
            if ( *((float *)&v136 + 2) > v91 )
              v91 = *((float *)&v136 + 2);
            if ( *((float *)&v136 + 3) > v94 )
              v94 = *((float *)&v136 + 3);
            if ( v92 > *(float *)&v137 )
              LODWORD(v92) = (_DWORD)v137;
            if ( v93 > *((float *)&v137 + 1) )
              v93 = *((float *)&v137 + 1);
            if ( *(float *)&v137 > v91 )
              LODWORD(v91) = (_DWORD)v137;
            if ( *((float *)&v137 + 1) > v94 )
              v94 = *((float *)&v137 + 1);
          }
          v120[1] = __PAIR64__(LODWORD(v93), LODWORD(v92));
          v120[2] = __PAIR64__(LODWORD(v94), LODWORD(v91));
        }
        v95 = CVisual::AddAdditionalDirtyRects((CVisual *)a1, (const struct MilRectF *)&v120[1]);
        if ( v95 < 0 )
          break;
        if ( (unsigned int)++v81 >= HIDWORD(v130) )
          goto LABEL_157;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v95, 0x1B3u);
      goto LABEL_236;
    }
LABEL_157:
    v3 = 1;
    v112 = 0;
    goto LABEL_158;
  }
  v58 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, const struct CRegion **))(*(_QWORD *)v116 + 24LL);
  if ( v58 == CCompositionSurfaceBitmap::GetDirtyRegion )
  {
    DirtyRegion = CCompositionSurfaceBitmap::GetDirtyRegion(v116, &v119);
  }
  else if ( v58 == CPrimitiveGroup::GetDirtyRegion )
  {
    DirtyRegion = CPrimitiveGroup::GetDirtyRegion(v116, &v119);
  }
  else
  {
    DirtyRegion = v58(v116, &v119);
  }
  if ( DirtyRegion < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DirtyRegion, 0x16Bu);
LABEL_230:
    DynArrayImpl<1>::~DynArrayImpl<1>(&v127);
LABEL_160:
    v5 = 0LL;
    goto LABEL_8;
  }
  v60 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *__hidden, struct ScrollOptimization *))(*(_QWORD *)v116 + 32LL);
  if ( v60 == CCompositionSurfaceBitmap::GetSrollOptimization )
    SrollOptimization = CCompositionSurfaceBitmap::GetSrollOptimization(v116, (struct ScrollOptimization *)&v123);
  else
    SrollOptimization = v60(v116, (struct ScrollOptimization *)&v123);
  if ( SrollOptimization < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SrollOptimization, 0x16Cu);
    goto LABEL_230;
  }
  v62 = v119;
  if ( !v119 )
    goto LABEL_119;
  v5 = 0LL;
  HIDWORD(v130) = 0;
  v63 = *(_DWORD **)v119;
  if ( **(_DWORD **)v119 )
  {
    v64 = (__int64)&v63[2 * *v63 + 1];
    v65 = (v64 + *(int *)(v64 + 4) - (__int64)(int)v63[4] - (__int64)(v63 + 3)) >> 3;
  }
  else
  {
    v65 = 0LL;
  }
  v66 = DynArrayImpl<0>::AddMultiple(&v127, 16LL, v65);
  if ( v66 >= 0 )
  {
    v10 = *(_QWORD *)v62;
    v67 = 0;
    v135 = (struct CPrimitive *)v10;
    v68 = *(_DWORD *)v10;
    if ( !*(_DWORD *)v10 )
    {
      v136 = 0LL;
      goto LABEL_115;
    }
    v69 = (_DWORD *)(v10 + 12);
    v138 = 0;
    *((_QWORD *)&v136 + 1) = v69;
    v70 = v68 - 1;
    v71 = v10 + 12;
    v72 = *(int *)(v10 + 24);
    v73 = v71 + 8 * v70;
    v74 = (FastRegion::Internal::CRgnData *)((char *)v69 + (int)v69[1]);
    *(_QWORD *)&v136 = v73;
    v137 = v74;
    v10 = ((__int64)v69 + v72 - (__int64)v74 + 8) >> 3;
    v139 = v10;
    if ( (int)v10 <= 0 )
    {
      FastRegion::Internal::CRgnData::StepIterator(v74, (struct FastRegion::CRegion::Iterator *)&v135);
      goto LABEL_115;
    }
    while ( (unsigned __int64)v69 < (unsigned __int64)v136 )
    {
      HIDWORD(v120[1]) = *v69;
      HIDWORD(v120[2]) = v69[2];
      LODWORD(v120[1]) = *((_DWORD *)v137 + 2 * v138);
      LODWORD(v120[2]) = *((_DWORD *)v137 + 2 * v138 + 1);
      v75 = (FastRegion::Internal::CRgnData *)(16LL * v67);
      *(_OWORD *)&v127[(_QWORD)v75] = *(_OWORD *)&v120[1];
      FastRegion::Internal::CRgnData::StepIterator(v75, (struct FastRegion::CRegion::Iterator *)&v135);
      v67 = v76 + 1;
LABEL_115:
      v69 = (_DWORD *)*((_QWORD *)&v136 + 1);
    }
LABEL_119:
    if ( HIDWORD(v130) )
      goto LABEL_120;
    goto LABEL_237;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x170u);
LABEL_236:
  DynArrayImpl<1>::~DynArrayImpl<1>(&v127);
LABEL_8:
  v11 = *(_QWORD *)(a1 + 24);
  if ( (v11 & 2) != 0 )
    v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v11) = v11 & 1;
  if ( (_DWORD)v11 )
  {
    v102 = (unsigned int)v11;
    do
    {
      v103 = CPtrArrayBase::operator[]((__int64 *)(a1 + 24), (unsigned __int64)v5);
      if ( v103 != *(_QWORD *)(a1 + 80) )
        CResource::NotifyOnChanged(v103, 0LL, 0LL);
      v5 = (CCompositionSurfaceBitmap *)((char *)v5 + 1);
      --v102;
    }
    while ( v102 );
  }
  v12 = v112;
  if ( v8 || v112 )
  {
    v13 = *(_QWORD **)(a1 + 328);
    if ( v13 != (_QWORD *)(a1 + 328) )
    {
      while ( 1 )
      {
        v111 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(v13 - 11));
        if ( v111 < 0 )
          break;
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(v13 - 11));
        v13 = (_QWORD *)*v13;
        if ( v13 == (_QWORD *)(a1 + 328) )
          goto LABEL_255;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v111, 0xE36u);
LABEL_255:
      v12 = v112;
    }
    if ( v6 )
    {
      CVisual::ResetVisibleRegionForAllInSubtree((struct CVisual *)a1);
      v12 = v112;
    }
  }
  v14 = *(_QWORD *)(a1 + 80);
  for ( j = v3 || v12; v14; v14 = *(_QWORD *)(v14 + 80) )
  {
    if ( !v8 || (v16 = *(_BYTE *)(v14 + 88), (v16 & 1) != 0) )
    {
      if ( !j )
        break;
      v16 = *(_BYTE *)(v14 + 88);
      if ( (v16 & 2) != 0 )
        break;
    }
    if ( v8 )
    {
      *(_BYTE *)(v14 + 712) |= 1u;
      *(_BYTE *)(v14 + 88) = v16 | 1;
    }
    v17 = *(_BYTE *)(v14 + 88);
    v18 = (v17 & 2) != 0 || j;
    *(_BYTE *)(v14 + 88) = v17 ^ (v17 ^ (2 * v18)) & 2;
    v19 = *(_QWORD *)(v14 + 24);
    if ( (v19 & 2) != 0 )
      v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v19) = v19 & 1;
    if ( (_DWORD)v19 )
    {
      v104 = 0LL;
      v105 = (unsigned int)v19;
      do
      {
        v106 = CPtrArrayBase::operator[]((__int64 *)(v14 + 24), v104);
        if ( v106 != *(_QWORD *)(v14 + 80) )
          CResource::NotifyOnChanged(v106, 0LL, 0LL);
        ++v104;
        --v105;
      }
      while ( v105 );
    }
  }
  if ( v8 )
  {
    *(_BYTE *)(a1 + 88) |= 1u;
    *(_BYTE *)(a1 + 712) |= 1u;
  }
  v20 = *(_BYTE *)(a1 + 88);
  v21 = (v20 & 4) != 0 || v112;
  v22 = v20 ^ (v20 ^ (4 * v21)) & 4;
  *(_BYTE *)(a1 + 88) = v22;
  v23 = (v22 & 8) != 0 || v113;
  v24 = (_DWORD)v114 == 2;
  *(_BYTE *)(a1 + 88) = v22 ^ (v22 ^ (8 * v23)) & 8;
  if ( v24 )
  {
    v34 = *(CResource **)(a1 + 352);
    if ( v34 )
    {
      v114 = 0LL;
      v35 = **(__int64 (__fastcall ***)(CResource *__hidden, const struct _GUID *, void **))v34;
      if ( v35 == CResource::QueryInterface )
        CResource::QueryInterface(v34, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v114);
      else
        v35(v34, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v114);
      v36 = v114;
      v37 = v118;
      if ( v118 == v114 )
      {
        v38 = *(_BYTE *)(a1 + 712);
        if ( (v38 & 2) != 0 )
        {
          v97 = 0;
          *(_BYTE *)(a1 + 712) = v38 | 1;
          while ( 1 )
          {
            v98 = *(_QWORD *)(a1 + 72);
            v99 = (v98 & 2) != 0 ? *(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)(a1 + 72) & 1LL;
            v10 = v97;
            if ( v97 >= v99 )
              break;
            v100 = (CVisual *)CPtrArrayBase::operator[]((__int64 *)(a1 + 72), v97);
            if ( v100 )
              CVisual::OnTransformChanged(v100);
            v97 = v101 + 1;
          }
          v36 = v114;
        }
        v39 = (_QWORD **)(a1 + 432);
        *(_QWORD *)(a1 + 560) = 0LL;
        v40 = *(_QWORD **)(a1 + 432);
        if ( v40 != (_QWORD *)(a1 + 432) )
        {
          do
          {
            *(v40 - 19) = 0LL;
            v40 = (_QWORD *)*v40;
          }
          while ( v40 != v39 );
          v36 = v114;
        }
        v41 = *v39;
        *(_QWORD *)(a1 + 672) = 0LL;
        if ( v41 != v39 )
        {
          do
          {
            *(v41 - 5) = 0LL;
            v41 = (_QWORD *)*v41;
          }
          while ( v41 != v39 );
          v36 = v114;
        }
      }
      if ( v36 )
      {
        v42 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v36 + 16LL);
        if ( v42 == CResource::Release )
          CResource::Release(v36);
        else
          v42(v36);
      }
    }
    else
    {
      v37 = v118;
    }
    v43 = *(_QWORD *)(a1 + 408);
    if ( v43 )
    {
      v44 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v43 + 48LL);
      if ( v44 == CEffectGroup::IsOfType )
        v45 = CEffectGroup::IsOfType(*(_QWORD *)(a1 + 408), 24LL);
      else
        v45 = v44(*(_QWORD *)(a1 + 408), 24LL);
      if ( v45 )
      {
        v48 = *(_QWORD *)(a1 + 408);
      }
      else
      {
        v46 = *(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 408) + 48LL);
        if ( v46 == CEffectGroup::IsOfType )
          v47 = CEffectGroup::IsOfType(*(_QWORD *)(a1 + 408), 8LL);
        else
          v47 = v46(*(_QWORD *)(a1 + 408), 8LL);
        if ( !v47 )
          goto LABEL_42;
        v48 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 56LL);
      }
      if ( v48 )
      {
        v114 = 0LL;
        Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)a1);
        v50 = **(__int64 (__fastcall ***)(CDxHandleDecodeBitmapRealization *, const struct _GUID *, void **))Transform3DEffectNoRef;
        if ( v50 == CDxHandleDecodeBitmapRealization::QueryInterface )
          CDxHandleDecodeBitmapRealization::QueryInterface(
            Transform3DEffectNoRef,
            &GUID_00000000_0000_0000_c000_000000000046,
            (void **)&v114);
        else
          v50(Transform3DEffectNoRef, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v114);
        v51 = v114;
        if ( v37 == v114 )
        {
          CVisual::OnInnerTransformChanged((CVisual *)a1);
          v51 = v114;
        }
        if ( v51 )
        {
          v52 = *(unsigned int (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v51 + 16LL);
          if ( v52 == CDxHandleYUVBitmapRealization::Release )
            CDxHandleYUVBitmapRealization::Release(v51);
          else
            v52(v51);
        }
      }
    }
  }
LABEL_42:
  v25 = *(_QWORD *)(a1 + 376);
  v26 = 0;
  if ( v25 )
  {
    v27 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v25 + 48LL);
    if ( v27 == CPrimitiveGroup::IsOfType )
    {
      v28 = CPrimitiveGroup::IsOfType(*(_QWORD *)(a1 + 376), 84LL);
    }
    else if ( v27 == CCompositionSurfaceBitmap::IsOfType )
    {
      v28 = CCompositionSurfaceBitmap::IsOfType(*(_QWORD *)(a1 + 376), 84LL);
    }
    else
    {
      v28 = v27 == CRenderData::IsOfType
          ? CRenderData::IsOfType(*(_QWORD *)(a1 + 376), 84LL)
          : v27(*(_QWORD *)(a1 + 376), 84LL);
    }
    if ( v28
      || (v29 = *(_QWORD *)(a1 + 376)) != 0
      && ((v30 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v29 + 48LL),
           v30 != CCompositionSurfaceBitmap::IsOfType)
        ? (v30 != CRenderData::IsOfType
         ? (v31 = v30(*(_QWORD *)(a1 + 376), 79LL))
         : (v31 = CRenderData::IsOfType(*(_QWORD *)(a1 + 376), 79LL)))
        : (v31 = CCompositionSurfaceBitmap::IsOfType(*(_QWORD *)(a1 + 376), 79LL)),
          v31)
      || CVisual::GetContentAsPrimitiveNoRef((CVisual *)a1, v121)
      || CVisual::GetContentAsYCbCrSurfaceNoRef((CVisual *)a1, v121) )
    {
      v26 = 1;
    }
  }
  *(_BYTE *)(a1 + 89) &= ~2u;
  v32 = v116;
  *(_BYTE *)(a1 + 89) |= 2 * (v26 & 1);
  if ( v32 )
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *, __int64))(*(_QWORD *)v32 + 16LL))(v32, v10);
  if ( v115 )
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *, __int64))(*(_QWORD *)v115 + 16LL))(v115, v10);
  if ( v117 )
  {
    v54 = *(unsigned int (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v117 + 16LL);
    if ( v54 == CBitmapRealization::Release )
    {
      CBitmapRealization::Release(v117);
    }
    else if ( v54 == CResource::Release )
    {
      CResource::Release(v117);
    }
    else if ( v54 == CPrimitiveGroup::Release )
    {
      CPrimitiveGroup::Release(v117);
    }
    else
    {
      ((void (__fastcall *)(CBitmapRealization *, __int64))v54)(v117, v10);
    }
  }
  return 0LL;
}
