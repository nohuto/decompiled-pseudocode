/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?IsCloseToTranslateOrScale@CBaseMatrix@@QEBAHXZ @ 0x180003998 (-IsCloseToTranslateOrScale@CBaseMatrix@@QEBAHXZ.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180004E68 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x180005028 (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?AddCompSurfInfoModeUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180005BBC (-AddCompSurfInfoModeUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?IsEquivalent@CDirectFlipInfo@@QEAA_NPEAV1@@Z @ 0x180006214 (-IsEquivalent@CDirectFlipInfo@@QEAA_NPEAV1@@Z.c)
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z @ 0x18000643C (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800068EC (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180006914 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180006AE0 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x18000F8C8 (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x1800123CC (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18001240C (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18001244C (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAX_N00PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18001248C (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAX_N00PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180012740 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18001279C (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180013600 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001F284 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEAU12@@Z @ 0x18009A04C (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEAU12@@Z.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800DCDD8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_NPEA_N2@Z @ 0x1800F63E0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverla.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z @ 0x1800F68AC (-ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVIImageSource@@_K@Z @ 0x1800F6A28 (-FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVIImageSource@@_K@Z.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x1800F6C3C (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?InsertAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x1800F6E6C (-InsertAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlay.c)
 *     ?RectContainedInRegionRect@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x1800F730C (-RectContainedInRegionRect@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?RectIntersectsRegion@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x1800F735C (-RectIntersectsRegion@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1800F7408 (-RemoveAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?ReplaceWith@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x1800F75A0 (-ReplaceWith@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800F765C (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x1800F77B8 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     Template_q @ 0x1800F7910 (Template_q.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        char *a8,
        char *a9,
        char *a10)
{
  __int64 v11; // r13
  int v12; // r14d
  char v13; // r12
  unsigned int v14; // r12d
  char v15; // r15
  unsigned int v16; // edi
  char v17; // bl
  __int128 v18; // xmm1
  unsigned int i; // ebx
  unsigned int k; // ebx
  char v21; // r13
  CDirectFlipInfo **v22; // rbx
  int *v23; // rdx
  void (__fastcall *v24)(CDirectFlipInfo *__hidden); // rdi
  __int64 v25; // rcx
  char v26; // dl
  char v27; // r8
  char v28; // al
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v31; // rax
  struct CDirectFlipInfo *v32; // r8
  __int64 v33; // r8
  int Candidate; // eax
  int v35; // eax
  int v36; // r8d
  bool v37; // di
  char v38; // al
  unsigned int v39; // ecx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  char v45; // cl
  unsigned int v46; // edi
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r14
  _QWORD *v50; // r13
  __int64 v51; // rcx
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v53; // rdi
  unsigned int v54; // eax
  unsigned __int8 IsOccluded; // al
  unsigned __int8 v56; // di
  _QWORD *v57; // r12
  __int64 v58; // rbx
  unsigned int OverlayCandidateIndex; // eax
  __int64 v60; // r8
  __int128 *v61; // rax
  __int128 v62; // xmm1
  int v63; // r8d
  bool v64; // zf
  __int64 v65; // rcx
  int v66; // eax
  int v67; // eax
  unsigned int v68; // edi
  unsigned int v69; // ebx
  __int64 v70; // r13
  __int128 *v71; // rcx
  __int128 v72; // xmm1
  _OWORD *v73; // rcx
  int v74; // eax
  int v75; // ebx
  int v76; // eax
  int v77; // eax
  char v78; // bl
  double v79; // xmm1_8
  float v80; // xmm0_4
  double v81; // xmm2_8
  float v82; // r9d
  float v83; // xmm0_4
  int v84; // r9d
  int v85; // r10d
  float v86; // xmm0_4
  int v87; // eax
  int v88; // r11d
  _DWORD *v89; // rdx
  int v90; // eax
  double v91; // xmm1_8
  float v92; // xmm0_4
  double v93; // xmm2_8
  float v94; // r9d
  float v95; // xmm0_4
  int v96; // r9d
  int v97; // r10d
  float v98; // xmm0_4
  int v99; // eax
  int v100; // r11d
  _DWORD *v101; // rdx
  unsigned int v102; // r13d
  __int64 v103; // r13
  __int64 v104; // rbx
  int v105; // eax
  int v106; // eax
  char v107; // al
  int v108; // ecx
  unsigned int v109; // r13d
  _QWORD *v110; // rdi
  __int64 v111; // rbx
  bool v112; // cf
  int v113; // eax
  char v114; // al
  char v115; // cl
  unsigned int j; // ebx
  __int64 v117; // r13
  __int64 v118; // rcx
  unsigned int v119; // edx
  __int64 v120; // rax
  int v121; // eax
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  struct CDirectFlipInfo *v128; // rdx
  __int64 v129; // rax
  int v130; // r9d
  __int64 v131; // rdi
  unsigned int v132; // [rsp+28h] [rbp-E0h]
  char v133; // [rsp+38h] [rbp-D0h] BYREF
  char v134; // [rsp+39h] [rbp-CFh]
  __int16 v135; // [rsp+3Ah] [rbp-CEh] BYREF
  char v136; // [rsp+3Ch] [rbp-CCh]
  bool v137; // [rsp+3Dh] [rbp-CBh] BYREF
  char v138; // [rsp+3Eh] [rbp-CAh]
  __int64 v139; // [rsp+40h] [rbp-C8h]
  __int64 v140; // [rsp+48h] [rbp-C0h]
  float v141; // [rsp+50h] [rbp-B8h]
  float v142; // [rsp+54h] [rbp-B4h]
  __int64 v143; // [rsp+58h] [rbp-B0h]
  _QWORD v144[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v145; // [rsp+78h] [rbp-90h]
  int v146; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v147; // [rsp+80h] [rbp-88h]
  __int64 v148; // [rsp+88h] [rbp-80h]
  __int64 v149; // [rsp+90h] [rbp-78h]
  __int64 v150; // [rsp+98h] [rbp-70h] BYREF
  __int128 v151; // [rsp+A0h] [rbp-68h] BYREF
  int v152; // [rsp+B0h] [rbp-58h]
  __int64 v153; // [rsp+B4h] [rbp-54h]
  char *v154; // [rsp+C0h] [rbp-48h]
  char *v155; // [rsp+C8h] [rbp-40h]
  char *v156; // [rsp+D0h] [rbp-38h]
  __int64 v157; // [rsp+D8h] [rbp-30h]
  char *v158; // [rsp+E0h] [rbp-28h]
  __int128 v159; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v160; // [rsp+F8h] [rbp-10h]
  __int128 v161; // [rsp+108h] [rbp+0h]
  __int128 v162; // [rsp+118h] [rbp+10h]
  __int128 v163; // [rsp+128h] [rbp+20h]
  __int128 v164; // [rsp+138h] [rbp+30h]
  __int128 v165; // [rsp+148h] [rbp+40h]
  __int128 v166; // [rsp+158h] [rbp+50h]
  __int128 v167; // [rsp+168h] [rbp+60h]
  __int128 v168; // [rsp+178h] [rbp+70h]
  __int128 v169; // [rsp+188h] [rbp+80h]
  __int128 v170; // [rsp+198h] [rbp+90h]
  __int128 v171; // [rsp+1A8h] [rbp+A0h]
  __int128 v172; // [rsp+1B8h] [rbp+B0h]
  __int128 v173; // [rsp+1C8h] [rbp+C0h]

  v149 = a5;
  v11 = a3;
  v12 = 0;
  v155 = a7;
  v13 = 0;
  v154 = a8;
  v156 = a9;
  v158 = a10;
  LODWORD(v143) = a4;
  v144[0] = a3;
  v140 = (__int64)a2;
  v148 = a6;
  v141 = 0.0;
  v142 = 0.0;
  LOBYTE(v139) = 0;
  v134 = 0;
  v136 = 0;
  v138 = 0;
  v150 = 0LL;
  if ( !*((_BYTE *)this + 816) || !a6 )
  {
    v15 = 1;
    if ( *((_DWORD *)this + 56) )
    {
      v131 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 817) = 1;
      LOBYTE(v139) = 1;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v131 + 32LL))(v131) != *((_DWORD *)this + 22) )
        v134 = 1;
    }
    else if ( *((_BYTE *)this + 825) || *((_QWORD *)this + 78) )
    {
      *((_BYTE *)this + 817) = 1;
      LOBYTE(v139) = 1;
    }
    COverlayContext::Reset(this);
    goto LABEL_22;
  }
  if ( *((int *)this + 140) > 0 )
  {
    if ( CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 67)) )
    {
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                        + 67));
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 14) + 80LL))((__int64)RenderingRealizationNoRef + 112) )
      {
        if ( *(_DWORD *)(*((_QWORD *)this + 67) + 112LL) > 2u && !CCommonRegistryData::m_dwOverlayTestMode )
          COverlayContext::ResetOverlayCandidatesList(this);
      }
    }
    a2 = (const struct CVisualTree *)v140;
  }
  v14 = 0;
  v15 = 1;
  if ( *((_DWORD *)this + 40) )
  {
    v49 = v148;
    v50 = (_QWORD *)((char *)this + 136);
    do
    {
      v51 = *v50;
      v157 = 240LL * v14;
      OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v157 + v51), a2);
      v148 = (__int64)OcclusionInfo;
      if ( OcclusionInfo )
      {
        v53 = *v50;
        v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)OcclusionInfo + 24LL))(v148);
        IsOccluded = COcclusionContext::IsOccluded(v49, v53 + v157 + 136, 0LL, v54);
        v56 = IsOccluded;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xd(
            *v50,
            &EVTDESC_OVERLAY_CHECKOCCLUSION,
            *(_QWORD *)(*(_QWORD *)(v157 + *v50 + 16) + 32LL),
            IsOccluded);
        if ( v56 )
        {
          COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v157 + *v50));
          DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 136, v14--);
        }
      }
      a2 = (const struct CVisualTree *)v140;
      ++v14;
    }
    while ( v14 < *((_DWORD *)this + 40) );
    v12 = LODWORD(v141);
    v11 = v144[0];
  }
  v16 = 0;
  if ( *((_DWORD *)this + 56) )
  {
    v57 = (_QWORD *)((char *)this + 136);
    do
    {
      v58 = 240LL * v16 + *((_QWORD *)this + 25);
      v140 = 240LL * v16;
      OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                this,
                                0LL,
                                *(struct IImageSource **)(v58 + 8),
                                *(_QWORD *)(v58 + 24));
      if ( OverlayCandidateIndex == -1 )
      {
        if ( !(unsigned __int8)COverlayContext::RectIntersectsRegion(v58 + 136, (unsigned int)v143, v149) )
        {
          v61 = (__int128 *)(v140 + *((_QWORD *)this + 25));
          v159 = *v61;
          v160 = v61[1];
          v161 = v61[2];
          v162 = v61[3];
          v163 = v61[4];
          v164 = v61[5];
          v165 = v61[6];
          v62 = v61[7];
          v61 += 8;
          v166 = v62;
          v167 = *v61;
          v168 = v61[1];
          v169 = v61[2];
          v170 = v61[3];
          v171 = v61[4];
          v172 = v61[5];
          v173 = v61[6];
          COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)&v159);
          v63 = *((_DWORD *)this + 40) - 1;
          v64 = *((_DWORD *)this + 40) == 0;
          if ( v63 >= -1 )
          {
            while ( !v64 )
            {
              v65 = 240LL * (unsigned int)v63;
              if ( *(_BYTE *)(v65 + *v57 + 168) )
              {
                if ( *(_DWORD *)(v65 + *v57 + 208) < (unsigned int)v172 )
                  break;
              }
              v64 = --v63 == -1;
              if ( v63 < -1 )
                goto LABEL_112;
            }
            DynArray<COverlayContext::OverlayPlaneInfo,0>::InsertAt((char *)this + 136, &v159, (unsigned int)(v63 + 1));
          }
        }
      }
      else
      {
        COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
          (COverlayContext::OverlayPlaneInfo *)(240LL * OverlayCandidateIndex + *v57),
          (struct COverlayContext::OverlayPlaneInfo *)v58);
        COverlayContext::ComparePlaneAttributes(
          (struct COverlayContext::OverlayPlaneInfo *)(v60 + *v57),
          (struct COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 25) + v140),
          (bool *)(v60 + *v57 + 204),
          (bool *)(v60 + *v57 + 205));
      }
LABEL_112:
      ++v16;
    }
    while ( v16 < *((_DWORD *)this + 56) );
    v12 = LODWORD(v141);
    v11 = v144[0];
  }
  v17 = *((_BYTE *)this + 823)
     && *((_BYTE *)this + 824)
     && CBaseMatrix::IsCloseToTranslateOrScale((CBaseMatrix *)v11)
     && *(float *)v11 >= 0.0
     && *(float *)(v11 + 20) >= 0.0;
  COverlayContext::DeriveDesktopPlaneAttributes(this, 0, 0, v17, (COverlayContext *)((char *)this + 232));
  *(_OWORD *)((char *)this + 440) = *(_OWORD *)v11;
  *(_OWORD *)((char *)this + 456) = *(_OWORD *)(v11 + 16);
  *(_OWORD *)((char *)this + 472) = *(_OWORD *)(v11 + 32);
  v18 = *(_OWORD *)(v11 + 48);
  *((_BYTE *)this + 827) = v17;
  *(_OWORD *)((char *)this + 488) = v18;
  if ( !COverlayContext::HaveOverlayCandidatesChanged(this) )
  {
    for ( i = 0; i < *((_DWORD *)this + 40); ++i )
      COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 17) + 240LL * i));
    *((_DWORD *)this + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 136, 240LL);
    goto LABEL_12;
  }
  v145 = 0;
  v146 = 0;
  v147 = 0;
  *(_OWORD *)&v144[1] = 0LL;
  v133 = 0;
  v137 = 0;
  v135 = 0;
  do
  {
    v35 = COverlayContext::DeriveCheckCandidatesList((__int64)this, (__int64)&v144[1], &v137);
    v12 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x1A5u);
      goto LABEL_207;
    }
    v37 = v137;
    if ( !v137 && !v17 )
      goto LABEL_59;
    LOBYTE(v135) = v17;
    LOBYTE(v36) = v17;
    v66 = COverlayContext::CheckMultiPlaneOverlaySupport(
            (_DWORD)this,
            (unsigned int)&v144[1],
            v36,
            (unsigned int)&v133,
            (__int64)&v135 + 1);
    v12 = v66;
    if ( v66 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x1B6u);
LABEL_207:
      DynArrayImpl<1>::~DynArrayImpl<1>(&v144[1]);
      goto LABEL_30;
    }
    v38 = v133;
    if ( !v133 && v17 )
    {
      LOBYTE(v135) = v133;
      v67 = COverlayContext::CheckMultiPlaneOverlaySupport(
              (_DWORD)this,
              (unsigned int)&v144[1],
              0,
              (unsigned int)&v133,
              (__int64)&v135 + 1);
      v12 = v67;
      if ( v67 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x1BFu);
        goto LABEL_207;
      }
LABEL_59:
      v38 = v133;
    }
    v39 = ++LODWORD(v142);
  }
  while ( v37 && !v38 && v39 <= 8 );
  COverlayContext::ResetPreviousOverlayCandidatesList(this);
  if ( v133 )
  {
    v152 = 0;
    v68 = 0;
    v69 = 0;
    v153 = 0LL;
    v70 = 0LL;
    v151 = 0LL;
    if ( v147 )
    {
      while ( 1 )
      {
        v71 = *(__int128 **)(v144[1] + 8 * v70);
        v159 = *v71;
        v160 = v71[1];
        v161 = v71[2];
        v162 = v71[3];
        v163 = v71[4];
        v164 = v71[5];
        v165 = v71[6];
        v72 = v71[7];
        v71 += 8;
        v166 = v72;
        v167 = *v71;
        v168 = v71[1];
        v169 = v71[2];
        v170 = v71[3];
        v171 = v71[4];
        v172 = v71[5];
        v173 = v71[6];
        COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)&v159);
        if ( v69 + 1 < v69 )
          break;
        v12 = 0;
        if ( v69 + 1 > v68 )
        {
          v74 = DynArrayImpl<0>::AddMultipleAndSet(&v151, 240LL, 1LL, &v159);
          v75 = v74;
          if ( v74 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0xC0u);
          v12 = v75;
          if ( v75 < 0 )
            goto LABEL_140;
          v69 = HIDWORD(v153);
          v68 = v153;
        }
        else
        {
          HIDWORD(v153) = v69 + 1;
          v73 = (_OWORD *)(v151 + 240LL * v69++);
          *v73 = v159;
          v73[1] = v160;
          v73[2] = v161;
          v73[3] = v162;
          v73[4] = v163;
          v73[5] = v164;
          v73[6] = v165;
          v73 += 8;
          *(v73 - 1) = v166;
          *v73 = v167;
          v73[1] = v168;
          v73[2] = v169;
          v73[3] = v170;
          v73[4] = v171;
          v73[5] = v172;
          v73[6] = v173;
        }
        v70 = (unsigned int)(v70 + 1);
        if ( (unsigned int)v70 >= v147 )
          goto LABEL_134;
      }
      v75 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v12 = -2147024362;
LABEL_140:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x1DAu);
    }
    else
    {
LABEL_134:
      if ( *((_DWORD *)this + 40)
        && (v76 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 168, (char *)this + 136),
            v12 = v76,
            v76 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x1DFu);
      }
      else
      {
        if ( !v69
          || (v77 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 136, &v151),
              v12 = v77,
              v77 >= 0) )
        {
          v78 = v135;
          if ( *((_BYTE *)this + 825) != (_BYTE)v135 )
          {
            *((_BYTE *)this + 817) = 1;
            LOBYTE(v139) = 1;
            if ( v78 )
            {
              v79 = *((float *)this + 12) + 6291456.25;
              v80 = *((float *)this + 13) + 6291456.25;
              v81 = *((float *)this + 11) + 6291456.25;
              *(float *)&v140 = v80;
              v82 = v80;
              v83 = v79;
              v84 = (int)(LODWORD(v82) << 10) >> 11;
              LODWORD(v79) = *((_DWORD *)this + 10);
              *(float *)v144 = v83;
              v85 = (int)(LODWORD(v83) << 10) >> 11;
              v86 = v81;
              v141 = v86;
              v87 = (int)(LODWORD(v86) << 10) >> 11;
              v142 = *(float *)&v79 + 6291456.25;
              v88 = (int)(LODWORD(v142) << 10) >> 11;
              if ( v88 >= v85 || v87 >= v84 )
              {
                **((_DWORD **)this + 93) = 0;
              }
              else
              {
                v89 = (_DWORD *)*((_QWORD *)this + 93);
                *v89 = 2;
                v89[1] = v88;
                v89[2] = v85;
                v89[3] = v87;
                v89[4] = 16;
                v89[7] = v88;
                v89[8] = v85;
                v89[5] = v84;
                v89[6] = 16;
              }
            }
          }
          *((_BYTE *)this + 825) = v78;
          DynArrayImpl<1>::~DynArrayImpl<1>(&v151);
          goto LABEL_66;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x1E4u);
      }
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(&v151);
    goto LABEL_207;
  }
  if ( *((_DWORD *)this + 40) )
  {
    v90 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 168, (char *)this + 136);
    v12 = v90;
    if ( v90 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, 0x205u);
      goto LABEL_207;
    }
  }
  if ( *((_BYTE *)this + 825) )
  {
    *((_BYTE *)this + 817) = 1;
    LOBYTE(v139) = 1;
  }
  *((_BYTE *)this + 825) = 0;
LABEL_66:
  v147 = 0;
  DynArrayImpl<0>::ShrinkToSize(&v144[1], 8LL);
  *((_BYTE *)this + 828) = *((_BYTE *)this + 827);
  v40 = *(_OWORD *)((char *)this + 248);
  *((_OWORD *)this + 21) = *(_OWORD *)((char *)this + 232);
  v41 = *(_OWORD *)((char *)this + 264);
  *((_OWORD *)this + 22) = v40;
  v42 = *(_OWORD *)((char *)this + 280);
  *((_OWORD *)this + 23) = v41;
  v43 = *(_OWORD *)((char *)this + 296);
  *((_OWORD *)this + 24) = v42;
  v44 = *(_OWORD *)((char *)this + 312);
  *((_OWORD *)this + 25) = v43;
  *(_QWORD *)&v43 = *((_QWORD *)this + 41);
  *((_OWORD *)this + 26) = v44;
  *((_QWORD *)this + 54) = v43;
  memset_0((char *)this + 232, 0, 0x68uLL);
  if ( *((_DWORD *)this + 40) )
  {
    if ( !*((_DWORD *)this + 56) )
    {
      v91 = *((float *)this + 12) + 6291456.25;
      v92 = *((float *)this + 13) + 6291456.25;
      v93 = *((float *)this + 11) + 6291456.25;
      v141 = v92;
      v94 = v92;
      v95 = v91;
      v96 = (int)(LODWORD(v94) << 10) >> 11;
      LODWORD(v91) = *((_DWORD *)this + 10);
      v142 = v95;
      v97 = (int)(LODWORD(v95) << 10) >> 11;
      v98 = v93;
      *(float *)v144 = v98;
      v99 = (int)(LODWORD(v98) << 10) >> 11;
      *(float *)&v140 = *(float *)&v91 + 6291456.25;
      v100 = (int)((_DWORD)v140 << 10) >> 11;
      if ( v100 >= v97 || v99 >= v96 )
      {
        **((_DWORD **)this + 93) = 0;
      }
      else
      {
        v101 = (_DWORD *)*((_QWORD *)this + 93);
        *v101 = 2;
        v101[1] = v100;
        v101[2] = v97;
        v101[3] = v99;
        v101[4] = 16;
        v101[7] = v100;
        v101[8] = v97;
        v101[5] = v96;
        v101[6] = 16;
      }
      if ( *((_DWORD *)this + 22) != 1 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 408LL))(*((_QWORD *)this + 2), 1LL);
        goto LABEL_162;
      }
    }
  }
  else if ( *((_DWORD *)this + 56) )
  {
    v102 = *((_DWORD *)this + 22);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2)) != v102 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 408LL))(*((_QWORD *)this + 2), v102);
LABEL_162:
      v134 = 1;
    }
  }
  v45 = HIBYTE(v135);
  if ( HIBYTE(v135) && !*((_BYTE *)this + 740) )
    **((_DWORD **)this + 93) = 0;
  v46 = 0;
  for ( *((_BYTE *)this + 740) = v45; v46 < *((_DWORD *)this + 56); ++v46 )
  {
    v103 = *((_QWORD *)this + 25);
    v104 = 240LL * v46;
    if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                         this,
                         0LL,
                         *(struct IImageSource **)(v104 + v103 + 8),
                         *(_QWORD *)(v104 + v103 + 24)) == -1 )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
      {
        v105 = COverlayContext::EnsureIndependentFlipState(
                 this,
                 (struct COverlayContext::OverlayPlaneInfo *)(v104 + v103),
                 0,
                 0);
        v12 = v105;
        if ( v105 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0x25Fu);
          goto LABEL_207;
        }
        v106 = CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(v104 + *((_QWORD *)this + 25) + 16) + 48LL));
        v12 = v106;
        if ( v106 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v106, 0x261u);
          goto LABEL_207;
        }
        *((_BYTE *)this + 822) = 1;
      }
      v107 = COverlayContext::RectContainedInRegionRect(v104 + *((_QWORD *)this + 25) + 136LL, (unsigned int)v143, v149);
      v108 = (unsigned __int8)v139;
      if ( !v107 )
        v108 = 1;
      LODWORD(v139) = v108;
    }
  }
  COverlayContext::ResetOverlayPlanesList(this);
  if ( !*((_DWORD *)this + 40) )
    goto LABEL_71;
  v109 = 0;
  v110 = (_QWORD *)((char *)this + 136);
  while ( 2 )
  {
    v111 = 240LL * v109;
    if ( *(_BYTE *)(v111 + *v110 + 168) )
      goto LABEL_190;
    v112 = CCommonRegistryData::m_dwOverlayTestMode < 3;
    *(_BYTE *)(v111 + *v110 + 232) = 1;
    if ( !v112 )
      goto LABEL_185;
    v113 = CCompositionSurfaceInfo::CBindInfo::PinResources(
             (CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(v111 + *v110 + 16) + 48LL),
             *(struct _LUID *)((char *)this + 64));
    v12 = v113;
    if ( v113 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v113, 0x289u);
    if ( v12 != -2005532292 )
    {
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x297u);
        goto LABEL_207;
      }
LABEL_185:
      if ( !(_BYTE)v139 )
      {
        v114 = COverlayContext::RectContainedInRegionRect(v111 + *v110 + 136LL, (unsigned int)v143, v149);
        v115 = v139;
        if ( !v114 )
          v115 = 1;
        LOBYTE(v139) = v115;
      }
      *(_BYTE *)(v111 + *v110 + 168) = 1;
      *(_BYTE *)(v111 + *v110 + 204) = 1;
LABEL_190:
      if ( ++v109 >= *((_DWORD *)this + 40) )
        goto LABEL_198;
      continue;
    }
    break;
  }
  v12 = 0;
  for ( j = 0; j < *((_DWORD *)this + 40); ++j )
  {
    v117 = 240LL * j;
    if ( *(_BYTE *)(v117 + *v110 + 232) )
    {
      v118 = *(_QWORD *)(v117 + *v110 + 16);
      if ( *(_BYTE *)(v118 + 180) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v118 + 48));
      COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v117 + *v110));
      DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 136, j--);
    }
  }
LABEL_198:
  if ( *((_DWORD *)this + 40) )
  {
    v119 = 0;
    do
    {
      v120 = v119++;
      *(_BYTE *)(240 * v120 + *((_QWORD *)this + 17) + 232) = 0;
    }
    while ( v119 < *((_DWORD *)this + 40) );
    v121 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 200, (char *)this + 136);
    v12 = v121;
    if ( v121 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v121, 0x2D2u);
      goto LABEL_207;
    }
    *((_BYTE *)this + 817) = 1;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 408LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 22));
  }
LABEL_71:
  DynArrayImpl<1>::~DynArrayImpl<1>(&v144[1]);
LABEL_12:
  for ( k = 0; k < *((_DWORD *)this + 56); ++k )
  {
    v122 = 240LL * k;
    v123 = *(_QWORD *)(v122 + *((_QWORD *)this + 25) + 16);
    if ( *(_DWORD *)(v123 + 144) != 1 )
    {
      *(_DWORD *)(v123 + 144) = 1;
      CComposition::AddCompSurfInfoModeUpdate(
        *((CComposition **)this + 104),
        *(struct CCompositionSurfaceInfo **)(v122 + *((_QWORD *)this + 25) + 16));
    }
  }
  if ( *((int *)this + 140) <= 0 || *((_DWORD *)this + 56) )
  {
    v21 = 0;
    goto LABEL_15;
  }
  v21 = 1;
  v31 = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 67));
  if ( v31 )
    (**(void (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v31)(
      v31,
      &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
      &v150);
  if ( v150 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v150 + 40LL))(v150) )
  {
    v21 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v124 = *((_QWORD *)this + 67);
      v125 = *(unsigned int *)(v124 + 40);
      v126 = v125 | ((__int64)(int)HIDWORD(*(_QWORD *)(v124 + 40)) << 32);
      v127 = 0LL;
      goto LABEL_223;
    }
  }
  else
  {
    if ( !*((_BYTE *)this + 544)
      || (v128 = (struct CDirectFlipInfo *)*((_QWORD *)this + 78)) != 0LL
      && CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 504), v128)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 360LL))(*((_QWORD *)this + 2)) )
    {
      if ( !*((_QWORD *)this + 78)
        || CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 78))
        || !CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 504), v32)
        || !*(_BYTE *)(v33 + 40) && !*((_BYTE *)this + 544) )
      {
        goto LABEL_15;
      }
      v21 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_15;
      v127 = 1LL;
    }
    else
    {
      v21 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_15;
      v127 = 2LL;
    }
    v129 = *((_QWORD *)this + 67);
    v125 = *(unsigned int *)(v129 + 40);
    v126 = v125 | ((__int64)(int)HIDWORD(*(_QWORD *)(v129 + 40)) << 32);
LABEL_223:
    Template_xd(v125, &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL, v126, v127);
  }
LABEL_15:
  v22 = (CDirectFlipInfo **)((char *)this + 624);
  v23 = (int *)*((_QWORD *)this + 78);
  if ( v23
    && (v23[14] < 4
     || !v21
     || !CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 504), (struct CDirectFlipInfo *)v23)) )
  {
    COverlayContext::ClearDirectFlip(this);
    LOBYTE(v139) = 1;
  }
  if ( !*v22 && v21 )
  {
    Candidate = CDirectFlipInfo::CreateCandidate(
                  (COverlayContext *)((char *)this + 504),
                  (struct CDirectFlipInfo **)this + 78);
    v12 = Candidate;
    if ( Candidate >= 0 )
    {
      v47 = CDirectFlipInfo::EnsurePinnedResources(*v22);
      v12 = v47;
      if ( v47 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x351u);
      if ( v12 == -2005532292 )
      {
        COverlayContext::ClearDirectFlip(this);
        v12 = 0;
      }
      else if ( v12 < 0 )
      {
        v132 = 862;
        v130 = v12;
        goto LABEL_230;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xd(v48, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 10), 1LL);
      goto LABEL_18;
    }
    v132 = 847;
LABEL_228:
    v130 = Candidate;
LABEL_230:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v130, v132);
    goto LABEL_30;
  }
LABEL_18:
  if ( !*v22 )
    goto LABEL_19;
  Candidate = CDirectFlipInfo::TransferAdvancedDirectFlipState(*v22, (COverlayContext *)((char *)this + 504));
  v12 = Candidate;
  if ( Candidate < 0 )
  {
    v132 = 873;
    goto LABEL_228;
  }
  if ( *((_BYTE *)*v22 + 40) )
  {
    v13 = 1;
  }
  else
  {
    v136 = 1;
LABEL_19:
    v13 = v138;
  }
  v24 = *(void (__fastcall **)(CDirectFlipInfo *__hidden))(*((_QWORD *)this + 63) + 8LL);
  if ( v24 == CDirectFlipInfo::Reset )
    CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 504));
  else
    v24((COverlayContext *)((char *)this + 504));
LABEL_22:
  v25 = (unsigned int)v139;
  v26 = v134;
  if ( !(_BYTE)v139 && !v134 )
  {
    v27 = v136;
    goto LABEL_25;
  }
  v27 = v136;
  if ( v136 )
LABEL_25:
    v28 = 0;
  else
    v28 = 1;
  *v155 = v28;
  if ( !v26 || v13 )
    v15 = 0;
  *v154 = v15;
  *v156 = v27;
  *v158 = v13;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(v25, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, (unsigned __int8)v25);
LABEL_30:
  if ( v12 < 0 )
    COverlayContext::Reset(this);
  *((_BYTE *)this + 816) = 0;
  **((_DWORD **)this + 79) = 0;
  *((_DWORD *)this + 182) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 704, 16LL);
  if ( v150 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v150 + 16LL))(v150);
  return (unsigned int)v12;
}
