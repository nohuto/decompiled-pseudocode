/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000C820 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180121360 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x18000774C (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x18000A6F0 (-NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ.c)
 *     ?IsDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C260 (-IsDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C350 (-IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetCompositionSurfaceInfoNoRef@CCompositionSurfaceBitmap@@UEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x18002E3D0 (-GetCompositionSurfaceInfoNoRef@CCompositionSurfaceBitmap@@UEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18004DB78 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x180055AB8 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180055C30 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Top@CBaseClipStack@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A25A4 (-Top@CBaseClipStack@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801100CC (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     Template_xdddddddd @ 0x180114AE8 (Template_xdddddddd.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        struct CVisual *a2,
        CCompositionSurfaceBitmap *a3,
        __int64 a4,
        CShape *a5,
        unsigned int a6)
{
  unsigned int v6; // r14d
  __int128 *v7; // r13
  CCompositionSurfaceBitmap *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  struct CCompositionSurfaceInfo *(__fastcall *v11)(CCompositionSurfaceBitmap *__hidden); // rbx
  CCompositionSurfaceInfo *CompositionSurfaceInfoNoRef; // rax
  CCompositionSurfaceInfo *v13; // r15
  bool (__fastcall *v14)(CCompositionSurfaceBitmap *__hidden); // rbx
  bool IsOverlayCompatible; // al
  bool (__fastcall *v16)(CCompositionSurfaceBitmap *__hidden); // rbx
  bool IsDirectFlipCompatible; // al
  bool (__fastcall *v18)(CHwFullScreenRenderTarget *); // r15
  bool v19; // al
  CCompositionSurfaceInfo *v20; // r15
  bool v21; // bl
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v23; // rcx
  char *v24; // r12
  int DoesImageOcclude; // eax
  __int64 v27; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  CShape *v31; // r13
  float v32; // xmm3_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm9_4
  float v37; // xmm8_4
  float v38; // xmm7_4
  float v39; // xmm6_4
  bool v40; // bl
  int v41; // eax
  int v42; // ebx
  float v43; // xmm0_4
  float v44; // eax
  float v45; // xmm0_4
  float v46; // xmm0_4
  __int64 (__fastcall *v47)(CCompositionSurfaceBitmap *); // rdi
  char v48; // r15
  char v49; // r14
  char v50; // si
  unsigned __int8 v51; // al
  int v52; // edx
  int v53; // ecx
  __int64 v54; // r9
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  int v58; // eax
  int v59; // eax
  bool v60[4]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v61; // [rsp+6Ch] [rbp-9Ch] BYREF
  DXGI_MODE_ROTATION v62[2]; // [rsp+70h] [rbp-98h] BYREF
  CCompositionSurfaceBitmap *v63; // [rsp+78h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v65; // [rsp+88h] [rbp-80h]
  __int64 v66; // [rsp+90h] [rbp-78h]
  float v67; // [rsp+98h] [rbp-70h]
  float v68; // [rsp+9Ch] [rbp-6Ch]
  struct CVisual *v69; // [rsp+A0h] [rbp-68h]
  CShape *v70[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-50h] BYREF
  float v72; // [rsp+C0h] [rbp-48h]
  float v73; // [rsp+C4h] [rbp-44h]
  CCompositionSurfaceInfo *v74; // [rsp+C8h] [rbp-40h] BYREF
  float v75; // [rsp+D0h] [rbp-38h]
  float v76; // [rsp+D4h] [rbp-34h]
  float v77; // [rsp+D8h] [rbp-30h] BYREF
  float v78; // [rsp+DCh] [rbp-2Ch]
  float v79; // [rsp+E0h] [rbp-28h]
  float v80; // [rsp+E4h] [rbp-24h]
  __int64 v81; // [rsp+E8h] [rbp-20h] BYREF
  float v82; // [rsp+F0h] [rbp-18h]
  float v83; // [rsp+F4h] [rbp-14h]
  __int128 v84; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v85; // [rsp+108h] [rbp+0h]
  __int128 v86; // [rsp+118h] [rbp+10h]
  __int128 v87; // [rsp+128h] [rbp+20h]
  _OWORD v88[4]; // [rsp+138h] [rbp+30h] BYREF

  v6 = 0;
  v64 = 0LL;
  v7 = (__int128 *)a4;
  v70[0] = a5;
  v8 = a3;
  v9 = *(_QWORD *)a3;
  v10 = a1;
  v71 = a4;
  v63 = a3;
  v69 = a2;
  v11 = *(struct CCompositionSurfaceInfo *(__fastcall **)(CCompositionSurfaceBitmap *__hidden))(v9 + 176);
  v66 = a1;
  v65 = 0;
  if ( v11 == CCompositionSurfaceBitmap::GetCompositionSurfaceInfoNoRef )
    CompositionSurfaceInfoNoRef = CCompositionSurfaceBitmap::GetCompositionSurfaceInfoNoRef(a3);
  else
    CompositionSurfaceInfoNoRef = v11(a3);
  v13 = CompositionSurfaceInfoNoRef;
  v74 = CompositionSurfaceInfoNoRef;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *, _OWORD *, float *))(*(_QWORD *)v8 + 56LL))(v8, v88, &v77);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v81 = *((_QWORD *)v13 + 5);
      v42 = v81;
      v43 = v80 + 6291456.25;
      v44 = v43;
      v45 = v79 + 6291456.25;
      v62[0] = (int)(LODWORD(v44) << 10) >> 11;
      v61 = (int)(LODWORD(v45) << 10) >> 11;
      v46 = v78 + 6291456.25;
      v47 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v8 + 104LL);
      v68 = v46;
      v67 = v77 + 6291456.25;
      v48 = v47(v8);
      v49 = (*(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v8 + 96LL))(v8);
      v50 = (*(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v8 + 120LL))(v8);
      v51 = (*(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v63 + 112LL))(v63);
      Template_xdddddddd(
        v53,
        v52,
        v42,
        v51,
        v50,
        v49,
        v48,
        (int)(LODWORD(v67) << 10) >> 11,
        (int)(LODWORD(v46) << 10) >> 11,
        v61,
        v62[0]);
      v8 = v63;
      v10 = v66;
      v6 = v65;
      v7 = (__int128 *)v71;
    }
  }
  v14 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v8 + 96LL);
  if ( v14 == CCompositionSurfaceBitmap::IsOverlayCompatible )
    IsOverlayCompatible = CCompositionSurfaceBitmap::IsOverlayCompatible(v8);
  else
    IsOverlayCompatible = v14(v8);
  if ( IsOverlayCompatible
    || ((v16 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v8 + 112LL),
         v16 != CCompositionSurfaceBitmap::IsDirectFlipCompatible)
      ? (IsDirectFlipCompatible = v16(v8))
      : (IsDirectFlipCompatible = CCompositionSurfaceBitmap::IsDirectFlipCompatible(v8)),
        v60[2] = 0,
        IsDirectFlipCompatible) )
  {
    v60[2] = 1;
  }
  v18 = *(bool (__fastcall **)(CHwFullScreenRenderTarget *))(**(_QWORD **)(*(_QWORD *)(v10 + 768) + 16LL) + 456LL);
  if ( v18 == CHwFullScreenRenderTarget::NeedsSwapChainFullScreenNotification )
    v19 = CHwFullScreenRenderTarget::NeedsSwapChainFullScreenNotification(*(CHwFullScreenRenderTarget **)(*(_QWORD *)(v10 + 768) + 16LL));
  else
    v19 = v18(*(CHwFullScreenRenderTarget **)(*(_QWORD *)(v10 + 768) + 16LL));
  v20 = v74;
  v21 = v19;
  v60[3] = v19;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v74);
  if ( RenderingRealizationNoRef )
    v24 = (char *)RenderingRealizationNoRef + 112;
  else
    v24 = 0LL;
  if ( (v60[2] || v21) && v24 )
  {
    v60[0] = 0;
    v60[1] = 0;
    DoesImageOcclude = COcclusionContext::DoesImageOcclude(v23, v8, a6, v60);
    v6 = DoesImageOcclude;
    if ( DoesImageOcclude < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DoesImageOcclude, 0x79Bu);
      goto LABEL_16;
    }
    if ( !v60[0] )
    {
      if ( (a6 & 2) != 0 || (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v24 + 48LL))(v24) == 3 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
          goto LABEL_16;
        v54 = 0LL;
LABEL_113:
        Template_xd(
          v27,
          &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
          *((unsigned int *)v20 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v20 + 5)) << 32),
          v54);
        goto LABEL_16;
      }
      v60[1] = 1;
    }
    CBaseMatrixStack::Top((CBaseMatrixStack *)(v10 + 16), (struct CBaseMatrix *)v88);
    if ( *(_BYTE *)(v10 + 520) )
    {
      v55 = *(_OWORD *)(v10 + 540);
      v84 = *(_OWORD *)(v10 + 524);
      v56 = *(_OWORD *)(v10 + 556);
      v85 = v55;
      v57 = *(_OWORD *)(v10 + 572);
      v86 = v56;
      v87 = v57;
      D2DMatrixMultiply((struct D2DMatrix *)v88, (const struct D2DMatrix *)v88, (const struct D2DMatrix *)&v84);
    }
    if ( v7 )
    {
      v28 = v7[1];
      v84 = *v7;
      v29 = v7[2];
      v85 = v28;
      v30 = v7[3];
      v86 = v29;
      v87 = v30;
      D2DMatrixMultiply((struct D2DMatrix *)&v84, (const struct D2DMatrix *)&v84, (const struct D2DMatrix *)v88);
    }
    else
    {
      v84 = v88[0];
      v85 = v88[1];
      v86 = v88[2];
      v87 = v88[3];
    }
    v61 = 0;
    v60[0] = 1;
    v62[0] = DXGI_MODE_ROTATION_IDENTITY;
    if ( !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)v88)
      || !COverlayContext::DeriveOverlayRotationParameters(
            *(COverlayContext **)(v10 + 768),
            (const struct CMILMatrix *)&v84,
            v62,
            &v61,
            v60) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_16;
      v54 = 1LL;
      goto LABEL_113;
    }
    v31 = v70[0];
    if ( v70[0] && !CShape::IsAxisAlignedRectangle(v70[0]) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_16;
      v54 = 2LL;
      goto LABEL_113;
    }
    *(_OWORD *)v70 = *(_OWORD *)(*(_QWORD *)(v10 + 768) + 40LL);
    CBaseClipStack::Top(v10 + 56, &v71);
    if ( *(_BYTE *)(v10 + 520) )
    {
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)(v10 + 524), (const struct MilRectF *)&v71, (struct MilRectF *)&v77);
      v35 = v77;
      v34 = v78;
      v33 = v79;
      v32 = v80;
    }
    else
    {
      v32 = v73;
      v33 = v72;
      v34 = *((float *)&v71 + 1);
      v35 = *(float *)&v71;
    }
    v36 = *(float *)v70;
    if ( v35 > *(float *)v70 )
    {
      v36 = v35;
      *(float *)v70 = v35;
    }
    v37 = *((float *)v70 + 1);
    if ( v34 > *((float *)v70 + 1) )
    {
      v37 = v34;
      *((float *)v70 + 1) = v34;
    }
    v38 = *(float *)&v70[1];
    if ( *(float *)&v70[1] > v33 )
    {
      v38 = v33;
      *(float *)&v70[1] = v33;
    }
    v39 = *((float *)&v70[1] + 1);
    if ( *((float *)&v70[1] + 1) > v32 )
    {
      v39 = v32;
      *((float *)&v70[1] + 1) = v32;
    }
    if ( v38 <= v36 || v39 <= v37 )
    {
      v39 = 0.0;
      v38 = 0.0;
      v37 = 0.0;
      v36 = 0.0;
      v70[1] = 0LL;
      v70[0] = 0LL;
    }
    if ( v31 )
    {
      v58 = (*(__int64 (__fastcall **)(CShape *, __int64 *, _QWORD))(*(_QWORD *)v31 + 24LL))(v31, &v81, 0LL);
      v6 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x801u);
        goto LABEL_16;
      }
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v88, (const struct MilRectF *)&v81, (struct MilRectF *)&v81);
      if ( *(float *)&v81 > v36 )
      {
        v36 = *(float *)&v81;
        LODWORD(v70[0]) = v81;
      }
      if ( *((float *)&v81 + 1) > v37 )
      {
        v37 = *((float *)&v81 + 1);
        HIDWORD(v70[0]) = HIDWORD(v81);
      }
      if ( v38 > v82 )
      {
        v38 = v82;
        *(float *)&v70[1] = v82;
      }
      if ( v39 > v83 )
      {
        v39 = v83;
        *((float *)&v70[1] + 1) = v83;
      }
      if ( v38 <= v36 || v39 <= v37 )
      {
        v39 = 0.0;
        v38 = 0.0;
        v37 = 0.0;
        v36 = 0.0;
        v70[1] = 0LL;
        v70[0] = 0LL;
      }
    }
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v70) )
      goto LABEL_109;
    if ( (**(int (__fastcall ***)(char *, GUID *, __int64 *))v24)(v24, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v64) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _OWORD *, float *, CCompositionSurfaceInfo **, __int64 *))(*(_QWORD *)v64 + 24LL))(
        v64,
        0LL,
        v88,
        &v77,
        &v74,
        &v71);
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v84, (const struct MilRectF *)&v71, (struct MilRectF *)&v71);
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v84, (const struct MilRectF *)&v74, (struct MilRectF *)&v74);
      if ( *(float *)&v74 > v36 )
      {
        v36 = *(float *)&v74;
        LODWORD(v70[0]) = (_DWORD)v74;
      }
      if ( *((float *)&v74 + 1) > v37 )
      {
        v37 = *((float *)&v74 + 1);
        HIDWORD(v70[0]) = HIDWORD(v74);
      }
      if ( v38 > v75 )
      {
        v38 = v75;
        *(float *)&v70[1] = v75;
      }
      if ( v39 > v76 )
      {
        v39 = v76;
        *((float *)&v70[1] + 1) = v76;
      }
      if ( v38 <= v36 || v39 <= v37 )
      {
        v70[1] = 0LL;
        v70[0] = 0LL;
      }
      v10 = v66;
    }
    else
    {
      (*(void (__fastcall **)(CCompositionSurfaceBitmap *, _OWORD *, float *))(*(_QWORD *)v8 + 56LL))(v8, v88, &v77);
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v84, (const struct MilRectF *)&v77, (struct MilRectF *)&v71);
      if ( *(float *)&v71 > v36 )
      {
        v36 = *(float *)&v71;
        LODWORD(v70[0]) = v71;
      }
      if ( *((float *)&v71 + 1) > v37 )
      {
        v37 = *((float *)&v71 + 1);
        HIDWORD(v70[0]) = HIDWORD(v71);
      }
      if ( v38 > v72 )
      {
        v38 = v72;
        *(float *)&v70[1] = v72;
      }
      if ( v39 > v73 )
      {
        v39 = v73;
        *((float *)&v70[1] + 1) = v73;
      }
      if ( v38 <= v36 || v39 <= v37 )
      {
        v70[1] = 0LL;
        v70[0] = 0LL;
      }
    }
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v70) )
    {
LABEL_109:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_16;
      v54 = 3LL;
      goto LABEL_113;
    }
    COcclusionContext::DeviceRectToPageInPixelsRect(v10, v70, &v74);
    v40 = v60[1];
    if ( v60[2]
      && (v41 = COverlayContext::CheckAndRecordOverlayCandidate(
                  *(struct COverlayContext **)(v10 + 768),
                  v69,
                  v8,
                  &v77,
                  (__int64)&v71,
                  (float *)v70,
                  (__int64)&v74,
                  v62[0],
                  v61,
                  v60[1],
                  v60[0]),
          v6 = v41,
          v41 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x84Eu);
    }
    else if ( v60[3] && !v40 )
    {
      v59 = COverlayContext::CheckAndNotifyFullScreenSwapChain(*(COverlayContext **)(v10 + 768));
      v6 = v59;
      if ( v59 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x854u);
    }
  }
LABEL_16:
  if ( v64 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  return v6;
}
