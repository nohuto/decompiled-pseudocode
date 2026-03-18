/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70
 * Callers:
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180067890 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180085A00 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x180007444 (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 *     ?NotifyOfDirtyFromOverlaysOrDirectFlip@CRenderTargetManager@@QEAAXXZ @ 0x18000750C (-NotifyOfDirtyFromOverlaysOrDirectFlip@CRenderTargetManager@@QEAAXXZ.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1800091A0 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800092F4 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x18000B3E8 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000BFC0 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAJPEAPEBVCRegion@@@Z @ 0x18000C080 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAJPEAPEBVCRegion@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x18002E1C0 (-Release@CCompositionSurfaceBitmap@@UEAAKXZ.c)
 *     ?GetSrollOptimization@CCompositionSurfaceBitmap@@UEAAJPEAUScrollOptimization@@@Z @ 0x18002E230 (-GetSrollOptimization@CCompositionSurfaceBitmap@@UEAAJPEAUScrollOptimization@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002E650 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180048D70 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x180048E08 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048E40 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180048F10 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x18004D6F0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004E730 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18005971C (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18006D524 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_C_ea_18006D524.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800856B0 (-Release@CResource@@UEAAKXZ.c)
 *     ?QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085790 (-QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDirtyRegion@CPrimitiveGroup@@UEAAJPEAPEBVCRegion@@@Z @ 0x180091780 (-GetDirtyRegion@CPrimitiveGroup@@UEAAJPEAPEBVCRegion@@@Z.c)
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x1800917A0 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 *     ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180091810 (-QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180091E00 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EAE0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180105CE0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180116090 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180120D04 (-ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z.c)
 */

__int64 __fastcall CVisual::OnChanged(__int64 a1, int a2, CCompositionSurfaceBitmap *a3)
{
  struct CRegion *v3; // r10
  char v7; // r15
  char v8; // r14
  __int64 (__fastcall ***v9)(CCompositionSurfaceBitmap *, const struct _GUID *, void **); // rbx
  __int64 v10; // rax
  char v11; // al
  _QWORD *v12; // rdi
  char v13; // r8
  __int64 v14; // rbx
  bool v15; // dl
  char v16; // al
  char v17; // cl
  bool v18; // al
  __int64 v19; // rax
  char v20; // cl
  bool v21; // al
  char v22; // al
  bool v23; // cl
  __int64 v24; // rdi
  char v25; // bl
  _BOOL8 (__fastcall *v26)(__int64, int); // r14
  char v27; // al
  CCompositionSurfaceBitmap *v28; // rdi
  __int64 (__fastcall *v30)(CCompositionSurfaceBitmap *, const struct _GUID *, void **); // rdi
  __int64 (__fastcall *v31)(CCompositionSurfaceBitmap *); // rbx
  CResource *v32; // rbx
  __int64 (__fastcall *v33)(CResource *__hidden, const struct _GUID *, void **); // rdi
  struct CRegion *v34; // rbx
  struct CRegion *v35; // r14
  char v36; // al
  _QWORD **v37; // rax
  _QWORD *v38; // rcx
  _QWORD *v39; // rcx
  unsigned int (__fastcall *v40)(CResource *__hidden); // rdi
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(_QWORD, __int64); // rdi
  char v43; // al
  __int64 (__fastcall *v44)(_QWORD, __int64); // rdi
  char v45; // al
  __int64 v46; // rax
  CResource *Transform3DEffectNoRef; // rbx
  __int64 (__fastcall *v48)(CResource *__hidden, const struct _GUID *, void **); // rdi
  struct CRegion *v49; // rbx
  unsigned int (__fastcall *v50)(CResource *__hidden); // rdi
  __int64 v51; // rdi
  _BOOL8 (__fastcall *v52)(__int64, int); // r14
  char v53; // al
  __int64 v54; // rdi
  __int64 (__fastcall *v55)(_QWORD, __int64); // r14
  char v56; // al
  __int64 v57; // rdi
  __int64 (__fastcall *v58)(_QWORD, __int64); // r14
  char v59; // al
  _QWORD *i; // rdi
  __int64 (__fastcall *v61)(CCompositionSurfaceBitmap *, const struct _GUID *, void **); // rbx
  __int64 (__fastcall *v62)(CCompositionSurfaceBitmap *, const struct _GUID *, void **); // rbx
  __int64 (__fastcall *v63)(CCompositionSurfaceBitmap *, const struct CRegion **); // rbx
  int DirtyRegion; // eax
  __int64 (__fastcall *v65)(CCompositionSurfaceBitmap *, struct ScrollOptimization *); // rbx
  int SrollOptimization; // eax
  int v67; // eax
  char SwapChainTransformForDirtyRects; // r12
  int v69; // ebx
  _BYTE *v70; // rax
  __m128i v71; // xmm3
  __m128i v72; // xmm6
  float v73; // xmm4_4
  float v74; // xmm5_4
  float v75; // xmm3_4
  float v76; // xmm6_4
  int v77; // eax
  float v78; // xmm4_4
  float v79; // xmm5_4
  float v80; // xmm3_4
  float v81; // xmm4_4
  float v82; // xmm2_4
  float v83; // xmm1_4
  unsigned int v84; // edx
  __int64 v85; // r9
  int v86; // edx
  unsigned int v87; // r8d
  struct CRegion *v88; // r15
  __int64 v89; // r12
  __int64 v90; // rax
  struct CRegion *v91; // rdi
  __int64 v92; // r12
  __int64 v93; // rax
  unsigned int j; // r9d
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  CVisual *v97; // rax
  int v98; // r9d
  unsigned __int32 v99; // xmm0_4
  unsigned __int32 v100; // xmm1_4
  int v101; // eax
  int v102; // eax
  __int16 v103; // [rsp+38h] [rbp-D0h]
  bool v104; // [rsp+3Ah] [rbp-CEh]
  struct CRegion *v105; // [rsp+40h] [rbp-C8h] BYREF
  CCompositionSurfaceBitmap *v106; // [rsp+48h] [rbp-C0h] BYREF
  CCompositionSurfaceBitmap *v107; // [rsp+50h] [rbp-B8h] BYREF
  struct ISwapChainContent *v108; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v109; // [rsp+60h] [rbp-A8h]
  struct CRegion *v110; // [rsp+68h] [rbp-A0h]
  __m128 v111; // [rsp+70h] [rbp-98h] BYREF
  __m128 v112; // [rsp+80h] [rbp-88h] BYREF
  int v113; // [rsp+90h] [rbp-78h] BYREF
  __int64 v114; // [rsp+94h] [rbp-74h]
  __int64 v115; // [rsp+9Ch] [rbp-6Ch]
  __int64 v116; // [rsp+A4h] [rbp-64h]
  _DWORD v117[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v118; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE *v119; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE *v120; // [rsp+E0h] [rbp-28h]
  int v121; // [rsp+E8h] [rbp-20h]
  __int64 v122; // [rsp+ECh] [rbp-1Ch]
  _BYTE v123[64]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v124[48]; // [rsp+138h] [rbp+30h] BYREF
  float v125; // [rsp+168h] [rbp+60h]
  float v126; // [rsp+16Ch] [rbp+64h]
  unsigned __int64 v127; // [rsp+178h] [rbp+70h] BYREF
  float v128; // [rsp+180h] [rbp+78h]
  float v129; // [rsp+184h] [rbp+7Ch]
  float v130; // [rsp+188h] [rbp+80h]
  float v131; // [rsp+18Ch] [rbp+84h]
  float v132; // [rsp+190h] [rbp+88h]
  float v133; // [rsp+194h] [rbp+8Ch]

  v3 = 0LL;
  v7 = 0;
  v110 = a3;
  v107 = 0LL;
  v108 = 0LL;
  HIBYTE(v103) = 0;
  v106 = 0LL;
  if ( a2 < 1 )
  {
LABEL_6:
    v8 = 1;
    LOBYTE(v103) = 1;
    goto LABEL_7;
  }
  switch ( a2 )
  {
    case 1:
      v8 = 0;
      LOBYTE(v103) = 1;
      break;
    case 3:
      v8 = 1;
      LOBYTE(v103) = 0;
      break;
    case 4:
      v7 = 0;
      if ( qword_1801A39E8 )
      {
        v84 = 0;
        if ( *((_DWORD *)qword_1801A39E8 + 18) )
        {
          v85 = *((_QWORD *)qword_1801A39E8 + 6);
          while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v85 + 8LL * v84)) )
          {
            v84 = v86 + 1;
            if ( v84 >= v87 )
              goto LABEL_189;
          }
          v7 = 1;
        }
      }
LABEL_189:
      CVisual::OnClipChanged((CVisual *)a1);
      break;
    case 5:
      CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(a1 + 552));
      for ( i = *(_QWORD **)(a1 + 416); i != (_QWORD *)(a1 + 416); i = (_QWORD *)*i )
        CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(i - 18));
      goto LABEL_43;
    default:
      goto LABEL_6;
  }
LABEL_7:
  v9 = *(__int64 (__fastcall ****)(CCompositionSurfaceBitmap *, const struct _GUID *, void **))(a1 + 360);
  if ( !v9 )
    goto LABEL_8;
  v30 = **v9;
  if ( v30 == CPrimitiveGroup::QueryInterface )
  {
    CPrimitiveGroup::QueryInterface(
      *(CPrimitiveGroup **)(a1 + 360),
      &GUID_00000000_0000_0000_c000_000000000046,
      (void **)&v106);
  }
  else if ( v30 == CResource::QueryInterface )
  {
    CResource::QueryInterface(*(CResource **)(a1 + 360), &GUID_00000000_0000_0000_c000_000000000046, (void **)&v106);
  }
  else if ( v30 == CCompositionSurfaceBitmap::QueryInterface )
  {
    CCompositionSurfaceBitmap::QueryInterface(
      *(CCompositionSurfaceBitmap **)(a1 + 360),
      &GUID_00000000_0000_0000_c000_000000000046,
      (void **)&v106);
  }
  else
  {
    v30(*(CCompositionSurfaceBitmap **)(a1 + 360), &GUID_00000000_0000_0000_c000_000000000046, (void **)&v106);
  }
  if ( a2 == 1 && a3 == v106 )
  {
    v61 = **(__int64 (__fastcall ***)(CCompositionSurfaceBitmap *, const struct _GUID *, void **))a3;
    if ( v61 == CCompositionSurfaceBitmap::QueryInterface )
    {
      CCompositionSurfaceBitmap::QueryInterface(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, (void **)&v107);
    }
    else if ( v61 == CPrimitiveGroup::QueryInterface )
    {
      CPrimitiveGroup::QueryInterface(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, (void **)&v107);
    }
    else
    {
      v61(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, (void **)&v107);
    }
    v62 = **(__int64 (__fastcall ***)(CCompositionSurfaceBitmap *, const struct _GUID *, void **))a3;
    if ( v62 == CCompositionSurfaceBitmap::QueryInterface )
    {
      CCompositionSurfaceBitmap::QueryInterface(a3, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, (void **)&v108);
    }
    else if ( v62 == CPrimitiveGroup::QueryInterface )
    {
      CPrimitiveGroup::QueryInterface(a3, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, (void **)&v108);
    }
    else
    {
      v62(a3, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, (void **)&v108);
    }
    if ( v108
      && CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
           *(CRenderTargetManager **)(*(_QWORD *)(a1 + 16) + 32LL),
           (const struct CVisual *)a1,
           v108) )
    {
      CVisual::DirtySecondaryRepresentations((CVisual *)a1);
      CRenderTargetManager::NotifyOfDirtyFromOverlaysOrDirectFlip(*(CRenderTargetManager **)(*(_QWORD *)(a1 + 16) + 32LL));
      goto LABEL_43;
    }
    v114 = 0LL;
    v115 = 0LL;
    v116 = 0LL;
    v119 = v123;
    v120 = v123;
    v113 = 0;
    v121 = 4;
    v122 = 4LL;
    if ( v107 )
    {
      v63 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, const struct CRegion **))(*(_QWORD *)v107 + 24LL);
      if ( v63 == CCompositionSurfaceBitmap::GetDirtyRegion )
      {
        DirtyRegion = CCompositionSurfaceBitmap::GetDirtyRegion(v107, &v105);
      }
      else if ( v63 == CPrimitiveGroup::GetDirtyRegion )
      {
        DirtyRegion = CPrimitiveGroup::GetDirtyRegion(v107, &v105);
      }
      else
      {
        DirtyRegion = v63(v107, &v105);
      }
      if ( DirtyRegion < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DirtyRegion, 0x14Cu);
      }
      else
      {
        v65 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct ScrollOptimization *))(*(_QWORD *)v107 + 32LL);
        if ( v65 == CCompositionSurfaceBitmap::GetSrollOptimization )
          SrollOptimization = CCompositionSurfaceBitmap::GetSrollOptimization(v107, (struct ScrollOptimization *)&v113);
        else
          SrollOptimization = v65(v107, (struct ScrollOptimization *)&v113);
        if ( SrollOptimization < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, SrollOptimization, 0x14Du);
        }
        else
        {
          if ( !v105
            || (HIDWORD(v122) = 0,
                v67 = CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
                        v105,
                        &v119),
                v67 >= 0) )
          {
            if ( HIDWORD(v122) )
              goto LABEL_128;
            goto LABEL_240;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x151u);
        }
      }
LABEL_237:
      DynArrayImpl<1>::~DynArrayImpl<1>(&v119);
      goto LABEL_62;
    }
LABEL_240:
    if ( !v113 )
    {
      HIBYTE(v103) = 0;
      goto LABEL_137;
    }
LABEL_128:
    SwapChainTransformForDirtyRects = 0;
    if ( v108 )
    {
      v118 = 0LL;
      SwapChainTransformForDirtyRects = CVisual::GetSwapChainTransformForDirtyRects(v108, (struct CMILMatrix *)v124);
      if ( CVisual::GetEffectiveSize((CVisual *)a1, (float *)&v118 + 2, (float *)&v118 + 3) )
        SwapChainTransformForDirtyRects |= (*(__int64 (__fastcall **)(struct ISwapChainContent *, __int128 *, _BYTE *))(*(_QWORD *)v108 + 168LL))(
                                             v108,
                                             &v118,
                                             v124);
    }
    if ( v113 )
    {
      v111.m128_f32[0] = (float)(int)v114;
      v111.m128_f32[1] = (float)SHIDWORD(v114);
      v111.m128_f32[2] = (float)(int)v115;
      v111.m128_f32[3] = (float)SHIDWORD(v115);
      v99 = _mm_shuffle_ps(v111, v111, 85).m128_u32[0];
      v100 = _mm_shuffle_ps(v111, v111, 170).m128_u32[0];
      v111.m128_i32[3] = _mm_shuffle_ps(v111, v111, 255).m128_u32[0];
      *(unsigned __int64 *)((char *)v111.m128_u64 + 4) = __PAIR64__(v100, v99);
      if ( SwapChainTransformForDirtyRects )
      {
        CBaseMatrix::Transform2DBounds((CBaseMatrix *)v124, (const struct MilRectF *)&v111, (struct MilRectF *)&v112);
        v111 = v112;
      }
      v101 = CVisual::AddAdditionalDirtyRects((CVisual *)a1, (const struct MilRectF *)&v111);
      if ( v101 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v101, 0x17Eu);
        goto LABEL_237;
      }
    }
    v69 = 0;
    if ( HIDWORD(v122) )
    {
      while ( 1 )
      {
        v70 = &v119[16 * v69];
        v71 = _mm_cvtsi32_si128(*((_DWORD *)v70 + 2));
        v72 = _mm_cvtsi32_si128(*((_DWORD *)v70 + 3));
        v73 = (float)*(int *)v70;
        v74 = (float)*((int *)v70 + 1);
        v111.m128_f32[0] = v73;
        v111.m128_f32[1] = v74;
        LODWORD(v75) = _mm_cvtepi32_ps(v71).m128_u32[0];
        LODWORD(v76) = _mm_cvtepi32_ps(v72).m128_u32[0];
        v111.m128_u64[1] = __PAIR64__(LODWORD(v76), LODWORD(v75));
        if ( SwapChainTransformForDirtyRects )
        {
          *(float *)v117 = v73;
          *(float *)&v117[1] = v74;
          *(float *)&v117[2] = v75;
          *(float *)&v117[3] = v76;
          if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v124) )
          {
            v81 = v78 + v125;
            v80 = v75 + v125;
            v83 = v126 + v76;
            v82 = v126 + v79;
          }
          else
          {
            CBaseMatrix::Transform2DRectToPerspective(
              (CBaseMatrix *)v124,
              (const struct MilRectF *)v117,
              (struct MilPoint2F *const)&v127);
            v80 = v128;
            v112.m128_u64[0] = v127;
            v109 = v127;
            if ( *(float *)&v127 > v128 )
              v81 = v128;
            else
              LODWORD(v81) = v109;
            v82 = *((float *)&v109 + 1);
            if ( *((float *)&v109 + 1) > v129 )
              v82 = v129;
            if ( v128 <= *(float *)&v127 )
              v80 = v112.m128_f32[0];
            v83 = v112.m128_f32[1];
            if ( v129 > v112.m128_f32[1] )
              v83 = v129;
            if ( v81 > v130 )
              v81 = v130;
            if ( v82 > v131 )
              v82 = v131;
            if ( v130 > v80 )
              v80 = v130;
            if ( v131 > v83 )
              v83 = v131;
            if ( v81 > v132 )
              v81 = v132;
            if ( v82 > v133 )
              v82 = v133;
            if ( v132 > v80 )
              v80 = v132;
            if ( v133 > v83 )
              v83 = v133;
          }
          v111.m128_u64[0] = __PAIR64__(LODWORD(v82), LODWORD(v81));
          v111.m128_u64[1] = __PAIR64__(LODWORD(v83), LODWORD(v80));
        }
        v77 = CVisual::AddAdditionalDirtyRects((CVisual *)a1, (const struct MilRectF *)&v111);
        if ( v77 < 0 )
          break;
        if ( (unsigned int)++v69 >= HIDWORD(v122) )
          goto LABEL_136;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x18Fu);
      goto LABEL_237;
    }
LABEL_136:
    v103 = 256;
LABEL_137:
    if ( v119 != v120 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v119);
  }
LABEL_62:
  v3 = 0LL;
LABEL_8:
  v10 = *(_QWORD *)(a1 + 24);
  if ( (v10 & 2) != 0 )
    v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v10) = v10 & 1;
  if ( (_DWORD)v10 )
  {
    v91 = v3;
    v92 = (unsigned int)v10;
    do
    {
      v93 = CPtrArrayBase::operator[](a1 + 24, v91);
      if ( v93 != *(_QWORD *)(a1 + 64) )
        CResource::NotifyOnChanged(v93, 0LL, 0LL);
      v91 = (struct CRegion *)((char *)v91 + 1);
      --v92;
    }
    while ( v92 );
    v3 = 0LL;
  }
  v11 = v103;
  if ( v8 || (_BYTE)v103 )
  {
    v12 = *(_QWORD **)(a1 + 312);
    if ( v12 != (_QWORD *)(a1 + 312) )
    {
      while ( 1 )
      {
        v102 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(v12 - 11));
        if ( v102 < 0 )
          break;
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(v12 - 11));
        v12 = (_QWORD *)*v12;
        if ( v12 == (_QWORD *)(a1 + 312) )
          goto LABEL_252;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v102, 0xD9Cu);
LABEL_252:
      v11 = v103;
      v3 = 0LL;
    }
    if ( v7 )
    {
      CVisual::ResetVisibleRegionForAllInSubtree((struct CVisual *)a1);
      v11 = v103;
      v3 = 0LL;
    }
  }
  v13 = HIBYTE(v103);
  v14 = *(_QWORD *)(a1 + 64);
  v15 = HIBYTE(v103) || v11;
  v104 = v15;
  if ( v14 )
  {
    do
    {
      if ( !v8 || (v16 = *(_BYTE *)(v14 + 72), (v16 & 1) != 0) )
      {
        if ( !v15 )
          break;
        v16 = *(_BYTE *)(v14 + 72);
        if ( (v16 & 2) != 0 )
          break;
      }
      if ( v8 )
      {
        *(_BYTE *)(v14 + 696) |= 1u;
        *(_BYTE *)(v14 + 72) = v16 | 1;
      }
      v17 = *(_BYTE *)(v14 + 72);
      v18 = (v17 & 2) != 0 || v15;
      *(_BYTE *)(v14 + 72) = v17 ^ (v17 ^ (2 * v18)) & 2;
      v19 = *(_QWORD *)(v14 + 24);
      if ( (v19 & 2) != 0 )
        v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v19) = v19 & 1;
      if ( (_DWORD)v19 )
      {
        v88 = v3;
        v89 = (unsigned int)v19;
        do
        {
          v90 = CPtrArrayBase::operator[](v14 + 24, v88);
          if ( v90 != *(_QWORD *)(v14 + 64) )
            CResource::NotifyOnChanged(v90, 0LL, 0LL);
          v88 = (struct CRegion *)((char *)v88 + 1);
          --v89;
        }
        while ( v89 );
        v15 = v104;
        v3 = 0LL;
      }
      v14 = *(_QWORD *)(v14 + 64);
    }
    while ( v14 );
    v13 = HIBYTE(v103);
  }
  if ( v8 )
  {
    *(_BYTE *)(a1 + 72) |= 1u;
    *(_BYTE *)(a1 + 696) |= 1u;
  }
  v20 = *(_BYTE *)(a1 + 72);
  v21 = (v20 & 4) != 0 || (_BYTE)v103;
  v22 = v20 ^ (v20 ^ (4 * v21)) & 4;
  *(_BYTE *)(a1 + 72) = v22;
  v23 = (v22 & 8) != 0 || v13;
  *(_BYTE *)(a1 + 72) = v22 ^ (v22 ^ (8 * v23)) & 8;
  if ( a2 == 2 )
  {
    v32 = *(CResource **)(a1 + 336);
    if ( v32 )
    {
      v105 = v3;
      v33 = **(__int64 (__fastcall ***)(CResource *__hidden, const struct _GUID *, void **))v32;
      if ( v33 == CResource::QueryInterface )
        CResource::QueryInterface(v32, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v105);
      else
        v33(v32, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v105);
      v34 = v105;
      v35 = v110;
      if ( v110 == v105 )
      {
        v36 = *(_BYTE *)(a1 + 696);
        if ( (v36 & 2) != 0 )
        {
          *(_BYTE *)(a1 + 696) = v36 | 1;
          for ( j = 0; ; j = v98 + 1 )
          {
            v95 = *(_QWORD *)(a1 + 56);
            v96 = (v95 & 2) != 0 ? *(_QWORD *)(v95 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)(a1 + 56) & 1LL;
            if ( j >= v96 )
              break;
            v97 = (CVisual *)CPtrArrayBase::operator[](a1 + 56, j);
            if ( v97 )
              CVisual::OnTransformChanged(v97);
          }
          v34 = v105;
        }
        v37 = (_QWORD **)(a1 + 416);
        *(_QWORD *)(a1 + 544) = 0LL;
        v38 = *(_QWORD **)(a1 + 416);
        if ( v38 != (_QWORD *)(a1 + 416) )
        {
          do
          {
            *(v38 - 19) = 0LL;
            v38 = (_QWORD *)*v38;
          }
          while ( v38 != v37 );
          v34 = v105;
        }
        v39 = *v37;
        *(_QWORD *)(a1 + 656) = 0LL;
        if ( v39 != v37 )
        {
          do
          {
            *(v39 - 5) = 0LL;
            v39 = (_QWORD *)*v39;
          }
          while ( v39 != v37 );
          v34 = v105;
        }
      }
      if ( v34 )
      {
        v40 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v34 + 16LL);
        if ( v40 == CResource::Release )
          CResource::Release(v34);
        else
          v40(v34);
      }
    }
    else
    {
      v35 = v110;
    }
    v41 = *(_QWORD *)(a1 + 392);
    if ( v41 )
    {
      v42 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v41 + 48LL);
      if ( v42 == CEffectGroup::IsOfType )
        v43 = CEffectGroup::IsOfType(*(_QWORD *)(a1 + 392), 24LL);
      else
        v43 = v42(*(_QWORD *)(a1 + 392), 24LL);
      if ( v43 )
      {
        v46 = *(_QWORD *)(a1 + 392);
      }
      else
      {
        v44 = *(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 392) + 48LL);
        if ( v44 == CEffectGroup::IsOfType )
          v45 = CEffectGroup::IsOfType(*(_QWORD *)(a1 + 392), 8LL);
        else
          v45 = v44(*(_QWORD *)(a1 + 392), 8LL);
        if ( !v45 )
          goto LABEL_43;
        v46 = *(_QWORD *)(*(_QWORD *)(a1 + 392) + 72LL);
      }
      if ( v46 )
      {
        v105 = 0LL;
        Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)a1);
        v48 = **(__int64 (__fastcall ***)(CResource *__hidden, const struct _GUID *, void **))Transform3DEffectNoRef;
        if ( v48 == CResource::QueryInterface )
          CResource::QueryInterface(Transform3DEffectNoRef, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v105);
        else
          v48(Transform3DEffectNoRef, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v105);
        v49 = v105;
        if ( v35 == v105 )
        {
          CVisual::OnInnerTransformChanged((CVisual *)a1);
          v49 = v105;
        }
        if ( v49 )
        {
          v50 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v49 + 16LL);
          if ( v50 == CResource::Release )
            CResource::Release(v49);
          else
            v50(v49);
        }
      }
    }
  }
LABEL_43:
  v24 = *(_QWORD *)(a1 + 360);
  v25 = 0;
  if ( v24 )
  {
    v26 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v24 + 48LL);
    if ( (char *)v26 == (char *)CPrimitiveGroup::IsOfType )
    {
      v27 = CPrimitiveGroup::IsOfType(*(_QWORD *)(a1 + 360), 92LL);
    }
    else if ( (char *)v26 == (char *)CRenderData::IsOfType )
    {
      v27 = CRenderData::IsOfType(*(_QWORD *)(a1 + 360), 92LL);
    }
    else
    {
      v27 = v26 == CCompositionSurfaceBitmap::IsOfType
          ? CCompositionSurfaceBitmap::IsOfType(*(_QWORD *)(a1 + 360), 92)
          : v26(*(_QWORD *)(a1 + 360), 92);
    }
    if ( v27 )
      goto LABEL_47;
    v51 = *(_QWORD *)(a1 + 360);
    if ( v51 )
    {
      v52 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v51 + 48LL);
      if ( (char *)v52 == (char *)CRenderData::IsOfType )
        v53 = CRenderData::IsOfType(*(_QWORD *)(a1 + 360), 87LL);
      else
        v53 = v52 == CCompositionSurfaceBitmap::IsOfType
            ? CCompositionSurfaceBitmap::IsOfType(*(_QWORD *)(a1 + 360), 87)
            : v52(*(_QWORD *)(a1 + 360), 87);
      if ( v53 )
        goto LABEL_47;
    }
    if ( (v54 = *(_QWORD *)(a1 + 360)) != 0
      && ((v55 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v54 + 48LL), v55 != CRenderData::IsOfType)
        ? (v56 = v55(*(_QWORD *)(a1 + 360), 76LL))
        : (v56 = CRenderData::IsOfType(*(_QWORD *)(a1 + 360), 76LL)),
          v56)
      || (v57 = *(_QWORD *)(a1 + 360)) != 0
      && ((v58 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v57 + 48LL), v58 != CRenderData::IsOfType)
        ? (v59 = v58(*(_QWORD *)(a1 + 360), 94LL))
        : (v59 = CRenderData::IsOfType(*(_QWORD *)(a1 + 360), 94LL)),
          v59) )
    {
LABEL_47:
      v25 = 1;
    }
  }
  *(_BYTE *)(a1 + 72) &= ~0x80u;
  v28 = v107;
  *(_BYTE *)(a1 + 72) |= v25 << 7;
  if ( v28 )
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v108 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v108 + 16LL))(v108);
  if ( v106 )
  {
    v31 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v106 + 16LL);
    if ( (char *)v31 == (char *)CPrimitiveGroup::Release )
    {
      CPrimitiveGroup::Release(v106);
    }
    else if ( (char *)v31 == (char *)CResource::Release )
    {
      CResource::Release(v106);
    }
    else if ( v31 == CCompositionSurfaceBitmap::Release )
    {
      CCompositionSurfaceBitmap::Release(v106);
    }
    else
    {
      v31(v106);
    }
  }
  return 0LL;
}
