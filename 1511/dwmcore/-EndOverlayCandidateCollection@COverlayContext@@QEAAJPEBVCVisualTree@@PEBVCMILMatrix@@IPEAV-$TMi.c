/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180006B60 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?IsEquivalent@CDirectFlipInfo@@QEAA_NPEAV1@@Z @ 0x180006BE0 (-IsEquivalent@CDirectFlipInfo@@QEAA_NPEAV1@@Z.c)
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z @ 0x180006DF8 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800072CC (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007D60 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x18000BA80 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?IsCloseToTranslateOrScale@CBaseMatrix@@QEBAHXZ @ 0x1800140EC (-IsCloseToTranslateOrScale@CBaseMatrix@@QEBAHXZ.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18001B938 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x18001BA58 (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x18001D988 (-CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036CE0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18005505C (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18007E9A8 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x18007EA40 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007EA80 (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007EAC0 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x18007EBB0 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18007ECB0 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007F050 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800AC220 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z @ 0x1800B4AE8 (-ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800F7A84 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180110224 (-CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverla.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180110D74 (-FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x180110EC0 (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?InsertAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180111110 (-InsertAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlay.c)
 *     ?RectContainedInRegionRect@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x18011178C (-RectContainedInRegionRect@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x180111848 (-RemoveAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?ReplaceWith@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x1801119D4 (-ReplaceWith@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180111A90 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        __int64 a3,
        unsigned int a4,
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
  unsigned int v16; // r12d
  char v17; // al
  unsigned int i; // ebx
  unsigned int m; // ebx
  char v20; // r13
  CDirectFlipInfo **v21; // rbx
  int *v22; // rdx
  void (__fastcall *v23)(CDirectFlipInfo *__hidden); // rdi
  __int64 v24; // rcx
  char v25; // r8
  char v26; // al
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v29; // rax
  struct CDirectFlipInfo *v30; // r8
  __int64 v31; // r8
  int Candidate; // eax
  char v33; // di
  int v34; // eax
  char v35; // bl
  unsigned int v36; // eax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  int v39; // eax
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  unsigned int j; // edi
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r14
  _QWORD *v47; // r13
  __int64 v48; // rcx
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v50; // rdi
  unsigned int v51; // eax
  unsigned __int8 IsOccluded; // al
  unsigned __int8 v53; // di
  __int64 *v54; // r13
  __int64 v55; // rdi
  __int64 v56; // rbx
  unsigned int OverlayCandidateIndex; // eax
  __int64 v58; // rcx
  __int64 v59; // rdx
  unsigned int v60; // r8d
  float *v61; // rcx
  int v62; // r8d
  unsigned int v63; // r9d
  int v64; // r8d
  bool v65; // zf
  __int64 v66; // rcx
  int v67; // eax
  unsigned int v68; // r13d
  __int64 v69; // rax
  unsigned int v70; // ebx
  __int128 *v71; // rcx
  __int128 v72; // xmm1
  _OWORD *v73; // rcx
  int v74; // eax
  int v75; // ebx
  int v76; // eax
  int v77; // eax
  int v78; // eax
  unsigned int v79; // r13d
  __int64 v80; // r13
  __int64 v81; // rbx
  int v82; // eax
  int v83; // eax
  char v84; // al
  int v85; // ecx
  unsigned int v86; // r13d
  _QWORD *v87; // rdi
  __int64 v88; // rbx
  bool v89; // cf
  int v90; // eax
  char v91; // al
  char v92; // cl
  unsigned int k; // ebx
  __int64 v94; // r13
  __int64 v95; // rcx
  unsigned int v96; // edx
  __int64 v97; // rax
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  struct CDirectFlipInfo *v103; // rdx
  __int64 v104; // rax
  int v105; // r9d
  __int64 v106; // rdi
  unsigned int v107; // [rsp+20h] [rbp-E0h]
  char v108; // [rsp+30h] [rbp-D0h]
  char v109; // [rsp+31h] [rbp-CFh] BYREF
  char v110; // [rsp+32h] [rbp-CEh]
  char v111; // [rsp+33h] [rbp-CDh]
  unsigned int v112; // [rsp+34h] [rbp-CCh]
  char v113[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v114; // [rsp+3Ch] [rbp-C4h]
  unsigned int v115; // [rsp+40h] [rbp-C0h]
  const struct CVisualTree *v116; // [rsp+48h] [rbp-B8h]
  __int128 v117; // [rsp+50h] [rbp-B0h] BYREF
  int v118; // [rsp+60h] [rbp-A0h]
  int v119; // [rsp+64h] [rbp-9Ch]
  unsigned int v120; // [rsp+68h] [rbp-98h]
  __int64 v121; // [rsp+70h] [rbp-90h]
  __int64 v122; // [rsp+78h] [rbp-88h]
  int v123; // [rsp+80h] [rbp-80h]
  __int64 v124; // [rsp+88h] [rbp-78h] BYREF
  __int128 v125; // [rsp+90h] [rbp-70h] BYREF
  int v126; // [rsp+A0h] [rbp-60h]
  __int64 v127; // [rsp+A4h] [rbp-5Ch]
  __int64 v128; // [rsp+B0h] [rbp-50h]
  char *v129; // [rsp+B8h] [rbp-48h]
  char *v130; // [rsp+C0h] [rbp-40h]
  char *v131; // [rsp+C8h] [rbp-38h]
  __int64 v132; // [rsp+D0h] [rbp-30h]
  char *v133; // [rsp+D8h] [rbp-28h]
  __int128 v134; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v135; // [rsp+F0h] [rbp-10h]
  __int128 v136; // [rsp+100h] [rbp+0h]
  __int128 v137; // [rsp+110h] [rbp+10h]
  __int128 v138; // [rsp+120h] [rbp+20h]
  __int128 v139; // [rsp+130h] [rbp+30h]
  __int128 v140; // [rsp+140h] [rbp+40h]
  __int128 v141; // [rsp+150h] [rbp+50h]
  __int128 v142; // [rsp+160h] [rbp+60h]
  __int128 v143; // [rsp+170h] [rbp+70h]
  __int128 v144; // [rsp+180h] [rbp+80h]
  __int128 v145; // [rsp+190h] [rbp+90h]
  __int128 v146; // [rsp+1A0h] [rbp+A0h]
  __int128 v147; // [rsp+1B0h] [rbp+B0h]

  v121 = a5;
  v11 = a3;
  v12 = 0;
  v130 = a7;
  v13 = 0;
  v129 = a8;
  v131 = a9;
  v133 = a10;
  v115 = a4;
  v128 = a3;
  v116 = a2;
  v122 = a6;
  v123 = 0;
  v114 = 0;
  LOBYTE(v112) = 0;
  v108 = 0;
  v110 = 0;
  v111 = 0;
  v124 = 0LL;
  if ( !*((_BYTE *)this + 832) || !a6 )
  {
    v15 = 1;
    if ( *((_DWORD *)this + 56) )
    {
      v106 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 833) = 1;
      LOBYTE(v112) = 1;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v106 + 32LL))(v106) != *((_DWORD *)this + 22) )
        v108 = 1;
    }
    else if ( *((_BYTE *)this + 841) || *((_QWORD *)this + 89) )
    {
      *((_BYTE *)this + 833) = 1;
      LOBYTE(v112) = 1;
    }
    COverlayContext::Reset(this);
    goto LABEL_23;
  }
  if ( !CCommonRegistryData::m_fEnableDesktopPlaneSplit
    || *((_DWORD *)this + 23) <= 2u
    || *((_DWORD *)this + 24) <= 2u
    || (v45 = *((_QWORD *)this + 9), *(_DWORD *)(v45 + 256) != 1297040209)
    || *(int *)(v45 + 252) < 2000 )
  {
    if ( *((int *)this + 168) > 0 )
    {
      if ( CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 81)) )
      {
        RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                          + 81));
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 14) + 88LL))((__int64)RenderingRealizationNoRef + 112) )
        {
          if ( *(_DWORD *)(*((_QWORD *)this + 81) + 104LL) > 2u && !CCommonRegistryData::m_dwOverlayTestMode )
            COverlayContext::ResetOverlayCandidatesList(this);
        }
      }
      a2 = v116;
    }
  }
  v14 = 0;
  v15 = 1;
  if ( *((_DWORD *)this + 40) )
  {
    v46 = v122;
    v47 = (_QWORD *)((char *)this + 136);
    do
    {
      v48 = *v47;
      v132 = 224LL * v14;
      OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v48 + v132), a2);
      v122 = (__int64)OcclusionInfo;
      if ( OcclusionInfo )
      {
        v50 = *v47;
        v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)OcclusionInfo + 24LL))(v122);
        IsOccluded = COcclusionContext::IsOccluded(v46, (float *)(v50 + v132 + 136), 0LL, v51);
        v53 = IsOccluded;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xd(
            *v47,
            &EVTDESC_OVERLAY_CHECKOCCLUSION,
            *(_QWORD *)(*(_QWORD *)(*v47 + v132 + 16) + 32LL),
            IsOccluded);
        if ( v53 )
        {
          COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v132 + *v47));
          DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 136, v14--);
        }
      }
      a2 = v116;
      ++v14;
    }
    while ( v14 < *((_DWORD *)this + 40) );
    v12 = v123;
    v11 = v128;
  }
  v16 = 0;
  if ( *((_DWORD *)this + 56) )
  {
    v54 = (__int64 *)((char *)this + 136);
    do
    {
      v55 = *((_QWORD *)this + 25);
      v56 = 224LL * v16;
      OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                this,
                                0LL,
                                *(struct ISwapChainContent **)(v55 + v56 + 8),
                                *(_QWORD *)(v55 + v56 + 24));
      if ( OverlayCandidateIndex == -1 )
      {
        v60 = 0;
        if ( v115 )
        {
          v61 = (float *)(v56 + v55 + 136);
          while ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                     v61,
                     (float *)(v121 + 16LL * v60)) )
          {
            v60 = v62 + 1;
            if ( v60 >= v63 )
              goto LABEL_109;
          }
        }
        else
        {
LABEL_109:
          v134 = *(_OWORD *)(v55 + 224LL * v16);
          v135 = *(_OWORD *)(v55 + v56 + 16);
          v136 = *(_OWORD *)(v55 + v56 + 32);
          v137 = *(_OWORD *)(v55 + v56 + 48);
          v138 = *(_OWORD *)(v55 + v56 + 64);
          v139 = *(_OWORD *)(v55 + v56 + 80);
          v140 = *(_OWORD *)(v55 + v56 + 96);
          v141 = *(_OWORD *)(v55 + v56 + 112);
          v142 = *(_OWORD *)(v55 + v56 + 128);
          v143 = *(_OWORD *)(v55 + v56 + 144);
          v144 = *(_OWORD *)(v55 + v56 + 160);
          v145 = *(_OWORD *)(v55 + v56 + 176);
          v146 = *(_OWORD *)(v55 + v56 + 192);
          v147 = *(_OWORD *)(v55 + v56 + 208);
          COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)&v134);
          v64 = *((_DWORD *)this + 40) - 1;
          v65 = *((_DWORD *)this + 40) == 0;
          if ( v64 >= -1 )
          {
            while ( !v65 )
            {
              v66 = 224LL * (unsigned int)v64;
              if ( *(_BYTE *)(v66 + *v54 + 176) )
              {
                if ( *(_DWORD *)(v66 + *v54 + 204) < HIDWORD(v146) )
                  break;
              }
              v65 = --v64 == -1;
              if ( v64 < -1 )
                goto LABEL_116;
            }
            DynArray<COverlayContext::OverlayPlaneInfo,0>::InsertAt((char *)this + 136, &v134, (unsigned int)(v64 + 1));
          }
        }
      }
      else
      {
        v58 = *v54;
        v59 = 224LL * OverlayCandidateIndex;
        *(_BYTE *)(v59 + v58 + 176) = *(_BYTE *)(v55 + v56 + 176);
        *(_DWORD *)(v59 + v58 + 180) = *(_DWORD *)(v55 + v56 + 180);
        *(_BYTE *)(v59 + v58 + 184) = *(_BYTE *)(v55 + v56 + 184);
        *(_BYTE *)(v59 + v58 + 185) = *(_BYTE *)(v55 + v56 + 185);
        *(_DWORD *)(v59 + v58 + 188) = *(_DWORD *)(v55 + v56 + 188);
        *(_DWORD *)(v59 + v58 + 192) = *(_DWORD *)(v55 + v56 + 192);
        *(_DWORD *)(v59 + v58 + 196) = *(_DWORD *)(v55 + v56 + 196);
        *(_BYTE *)(v59 + v58 + 200) = *(_BYTE *)(v55 + v56 + 200);
        *(_BYTE *)(v59 + v58 + 201) = *(_BYTE *)(v55 + v56 + 201);
        *(_DWORD *)(v59 + v58 + 204) = *(_DWORD *)(v55 + v56 + 204);
        *(_DWORD *)(v59 + v58 + 208) = *(_DWORD *)(v55 + v56 + 208);
        *(_BYTE *)(v59 + v58 + 212) = *(_BYTE *)(v55 + v56 + 212);
        *(_DWORD *)(v59 + v58 + 216) = *(_DWORD *)(v55 + v56 + 216);
        *(_BYTE *)(v59 + v58 + 220) = *(_BYTE *)(v55 + v56 + 220);
        COverlayContext::ComparePlaneAttributes(
          (struct COverlayContext::OverlayPlaneInfo *)(v59 + *v54),
          (struct COverlayContext::OverlayPlaneInfo *)(v56 + *((_QWORD *)this + 25)),
          (bool *)(v59 + *v54 + 200),
          (bool *)(v59 + *v54 + 201));
      }
LABEL_116:
      ++v16;
    }
    while ( v16 < *((_DWORD *)this + 56) );
    v11 = v128;
  }
  if ( !*((_BYTE *)this + 839)
    || !*((_BYTE *)this + 840)
    || !CBaseMatrix::IsCloseToTranslateOrScale((CBaseMatrix *)v11)
    || *(float *)v11 < 1.0
    || (v17 = 1, *(float *)(v11 + 20) < 1.0) )
  {
    v17 = 0;
  }
  *((_BYTE *)this + 843) = v17;
  *(_OWORD *)((char *)this + 488) = *(_OWORD *)v11;
  *(_OWORD *)((char *)this + 504) = *(_OWORD *)(v11 + 16);
  *(_OWORD *)((char *)this + 520) = *(_OWORD *)(v11 + 32);
  *(_OWORD *)((char *)this + 536) = *(_OWORD *)(v11 + 48);
  if ( !COverlayContext::HaveOverlayCandidatesChanged(this) )
  {
    for ( i = 0; i < *((_DWORD *)this + 40); ++i )
      COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 17) + 224LL * i));
    *((_DWORD *)this + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 17, 0xE0u);
    goto LABEL_13;
  }
  v118 = 0;
  *((_DWORD *)this + 64) = 0;
  v119 = 0;
  v120 = 0;
  v33 = 0;
  v109 = 0;
  v117 = 0LL;
  v113[0] = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 29, 0x70u);
  do
  {
    v34 = COverlayContext::DeriveCheckCandidatesList(this, (__int64)&v117, v113);
    v12 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x1A6u);
LABEL_200:
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v117);
      goto LABEL_31;
    }
    v35 = v113[0];
    if ( v113[0] )
    {
      v67 = COverlayContext::CheckMultiPlaneOverlaySupport(this, &v117, &v109);
      v12 = v67;
      if ( v67 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x1ABu);
        goto LABEL_200;
      }
    }
    v36 = ++v114;
  }
  while ( v35 && !v109 && v36 <= 8 );
  COverlayContext::ResetPreviousOverlayCandidatesList(this);
  if ( v109 )
  {
    v126 = 0;
    v68 = 0;
    v69 = 0LL;
    v127 = 0LL;
    v70 = 0;
    v114 = 0;
    v125 = 0LL;
    if ( v120 )
    {
      while ( 1 )
      {
        v71 = *(__int128 **)(v117 + 8 * v69);
        v134 = *v71;
        v135 = v71[1];
        v136 = v71[2];
        v137 = v71[3];
        v138 = v71[4];
        v139 = v71[5];
        v140 = v71[6];
        v72 = v71[7];
        v71 += 8;
        v141 = v72;
        v142 = *v71;
        v143 = v71[1];
        v144 = v71[2];
        v145 = v71[3];
        v146 = v71[4];
        v147 = v71[5];
        COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)&v134);
        if ( v70 + 1 < v70 )
          break;
        v12 = 0;
        if ( v70 + 1 > v68 )
        {
          v74 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v125, 224, 1, &v134);
          v75 = v74;
          if ( v74 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0xC0u);
          v12 = v75;
          if ( v75 < 0 )
            goto LABEL_142;
          v70 = HIDWORD(v127);
          v68 = v127;
        }
        else
        {
          HIDWORD(v127) = v70 + 1;
          v73 = (_OWORD *)(v125 + 224LL * v70++);
          *v73 = v134;
          v73[1] = v135;
          v73[2] = v136;
          v73[3] = v137;
          v73[4] = v138;
          v73[5] = v139;
          v73[6] = v140;
          v73 += 8;
          *(v73 - 1) = v141;
          *v73 = v142;
          v73[1] = v143;
          v73[2] = v144;
          v73[3] = v145;
          v73[4] = v146;
          v73[5] = v147;
        }
        v69 = (unsigned int)(v114 + 1);
        v114 = v69;
        if ( (unsigned int)v69 >= v120 )
          goto LABEL_136;
      }
      v75 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v12 = -2147024362;
LABEL_142:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x1C5u);
    }
    else
    {
LABEL_136:
      if ( *((_DWORD *)this + 40)
        && (v76 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 168, (char *)this + 136),
            v12 = v76,
            v76 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x1CAu);
      }
      else
      {
        if ( !v70
          || (v77 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 136, &v125),
              v12 = v77,
              v77 >= 0) )
        {
          if ( *((_DWORD *)this + 64) )
            v33 = *(_BYTE *)(*((_QWORD *)this + 29) + 104LL) != 0;
          if ( *((_BYTE *)this + 841) != v33 )
          {
            *((_BYTE *)this + 833) = 1;
            LOBYTE(v112) = 1;
          }
          *((_BYTE *)this + 841) = v33;
          DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v125);
          goto LABEL_67;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x1CFu);
      }
    }
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v125);
    goto LABEL_200;
  }
  if ( *((_DWORD *)this + 40) )
  {
    v78 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 168, (char *)this + 136);
    v12 = v78;
    if ( v78 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, 0x1E9u);
      goto LABEL_200;
    }
  }
  if ( *((_BYTE *)this + 841) )
  {
    *((_BYTE *)this + 833) = 1;
    LOBYTE(v112) = 1;
  }
  *((_BYTE *)this + 841) = 0;
LABEL_67:
  v120 = 0;
  DynArrayImpl<0>::ShrinkToSize(&v117, 8u);
  v37 = *(_OWORD *)((char *)this + 488);
  v38 = *(_OWORD *)((char *)this + 504);
  *((_BYTE *)this + 844) = *((_BYTE *)this + 843);
  v39 = *((_DWORD *)this + 40);
  *(_OWORD *)((char *)this + 552) = v37;
  v40 = *(_OWORD *)((char *)this + 520);
  *(_OWORD *)((char *)this + 568) = v38;
  v41 = *(_OWORD *)((char *)this + 536);
  *(_OWORD *)((char *)this + 584) = v40;
  *(_OWORD *)((char *)this + 600) = v41;
  if ( v39 )
  {
    if ( *((_DWORD *)this + 56) || *((_DWORD *)this + 22) == 1 )
      goto LABEL_69;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 416LL))(*((_QWORD *)this + 2), 1LL);
  }
  else
  {
    if ( !*((_DWORD *)this + 56) )
      goto LABEL_69;
    v79 = *((_DWORD *)this + 22);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2)) == v79 )
      goto LABEL_69;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 416LL))(*((_QWORD *)this + 2), v79);
  }
  v108 = 1;
LABEL_69:
  for ( j = 0; j < *((_DWORD *)this + 56); ++j )
  {
    v80 = *((_QWORD *)this + 25);
    v81 = 224LL * j;
    if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                         this,
                         0LL,
                         *(struct ISwapChainContent **)(v81 + v80 + 8),
                         *(_QWORD *)(v81 + v80 + 24)) == -1 )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
      {
        v82 = COverlayContext::EnsureIndependentFlipState(
                this,
                (struct COverlayContext::OverlayPlaneInfo *)(v81 + v80),
                0,
                0);
        v12 = v82;
        if ( v82 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v82, 0x22Cu);
          goto LABEL_200;
        }
        v83 = CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(v81 + *((_QWORD *)this + 25) + 16) + 48LL));
        v12 = v83;
        if ( v83 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0x22Eu);
          goto LABEL_200;
        }
        *((_BYTE *)this + 838) = 1;
      }
      v84 = COverlayContext::RectContainedInRegionRect(v81 + *((_QWORD *)this + 25) + 136LL, v115, v121);
      v85 = (unsigned __int8)v112;
      if ( !v84 )
        v85 = 1;
      v112 = v85;
    }
  }
  COverlayContext::ResetOverlayPlanesList(this);
  if ( !*((_DWORD *)this + 40) )
    goto LABEL_71;
  v86 = 0;
  v87 = (_QWORD *)((char *)this + 136);
  while ( 1 )
  {
    v88 = 224LL * v86;
    if ( !*(_BYTE *)(*v87 + v88 + 176) )
      break;
LABEL_184:
    if ( ++v86 >= *((_DWORD *)this + 40) )
      goto LABEL_192;
  }
  v89 = CCommonRegistryData::m_dwOverlayTestMode < 3;
  *(_BYTE *)(*v87 + v88 + 220) = 1;
  if ( !v89 )
  {
LABEL_179:
    if ( !(_BYTE)v112 )
    {
      v91 = COverlayContext::RectContainedInRegionRect(v88 + *v87 + 136LL, v115, v121);
      v92 = v112;
      if ( !v91 )
        v92 = 1;
      LOBYTE(v112) = v92;
    }
    *(_BYTE *)(*v87 + v88 + 176) = 1;
    *(_BYTE *)(*v87 + v88 + 200) = 1;
    goto LABEL_184;
  }
  v90 = CCompositionSurfaceInfo::CBindInfo::PinResources(
          (CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(*v87 + v88 + 16) + 48LL),
          *(struct _LUID *)((char *)this + 64));
  v12 = v90;
  if ( v90 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, 0x256u);
  if ( v12 != -2005532292 )
  {
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x264u);
      goto LABEL_200;
    }
    goto LABEL_179;
  }
  v12 = 0;
  for ( k = 0; k < *((_DWORD *)this + 40); ++k )
  {
    v94 = 224LL * k;
    if ( *(_BYTE *)(*v87 + v94 + 220) )
    {
      v95 = *(_QWORD *)(*v87 + v94 + 16);
      if ( *(_BYTE *)(v95 + 172) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v95 + 48));
      COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v94 + *v87));
      DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 136, k--);
    }
  }
LABEL_192:
  if ( *((_DWORD *)this + 40) )
  {
    v96 = 0;
    do
    {
      v97 = v96++;
      *(_BYTE *)(224 * v97 + *((_QWORD *)this + 17) + 220) = 0;
    }
    while ( v96 < *((_DWORD *)this + 40) );
    v98 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((char *)this + 200, (char *)this + 136);
    v12 = v98;
    if ( v98 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v98, 0x29Fu);
      goto LABEL_200;
    }
    *((_BYTE *)this + 833) = 1;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 416LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 22));
  }
LABEL_71:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v117);
LABEL_13:
  for ( m = 0; m < *((_DWORD *)this + 56); ++m )
    CCompositionSurfaceInfo::SetCompositionMode(*(_QWORD *)(224LL * m + *((_QWORD *)this + 25) + 16), 1, 1);
  if ( *((int *)this + 168) <= 0 || *((_DWORD *)this + 56) )
  {
    v20 = 0;
    goto LABEL_16;
  }
  v20 = 1;
  v29 = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 81));
  if ( v29 )
    (**(void (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v29)(
      v29,
      &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
      &v124);
  if ( v124 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v124 + 40LL))(v124) )
  {
    v20 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v99 = *((_QWORD *)this + 81);
      v100 = *(unsigned int *)(v99 + 40);
      v101 = v100 | ((__int64)(int)HIDWORD(*(_QWORD *)(v99 + 40)) << 32);
      v102 = 0LL;
      goto LABEL_214;
    }
  }
  else
  {
    if ( !*((_BYTE *)this + 656)
      || (v103 = (struct CDirectFlipInfo *)*((_QWORD *)this + 89)) != 0LL
      && CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 616), v103)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 368LL))(*((_QWORD *)this + 2)) )
    {
      if ( !*((_QWORD *)this + 89)
        || CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 89))
        || !CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 616), v30)
        || !*(_BYTE *)(v31 + 40) && !*((_BYTE *)this + 656) )
      {
        goto LABEL_16;
      }
      v20 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_16;
      v102 = 1LL;
    }
    else
    {
      v20 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_16;
      v102 = 2LL;
    }
    v104 = *((_QWORD *)this + 81);
    v100 = *(unsigned int *)(v104 + 40);
    v101 = v100 | ((__int64)(int)HIDWORD(*(_QWORD *)(v104 + 40)) << 32);
LABEL_214:
    Template_xd(v100, &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL, v101, v102);
  }
LABEL_16:
  v21 = (CDirectFlipInfo **)((char *)this + 712);
  v22 = (int *)*((_QWORD *)this + 89);
  if ( v22
    && (v22[14] < 4
     || !v20
     || !CDirectFlipInfo::IsEquivalent((COverlayContext *)((char *)this + 616), (struct CDirectFlipInfo *)v22)) )
  {
    COverlayContext::ClearDirectFlip(this);
    LOBYTE(v112) = 1;
  }
  if ( !*v21 && v20 )
  {
    Candidate = CDirectFlipInfo::CreateCandidate(
                  (COverlayContext *)((char *)this + 616),
                  (struct CDirectFlipInfo **)this + 89);
    v12 = Candidate;
    if ( Candidate >= 0 )
    {
      v43 = CDirectFlipInfo::EnsurePinnedResources(*v21);
      v12 = v43;
      if ( v43 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x316u);
      if ( v12 == -2005532292 )
      {
        COverlayContext::ClearDirectFlip(this);
        v12 = 0;
      }
      else if ( v12 < 0 )
      {
        v107 = 803;
        v105 = v12;
        goto LABEL_221;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xd(v44, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 10), 1LL);
      goto LABEL_19;
    }
    v107 = 788;
LABEL_219:
    v105 = Candidate;
LABEL_221:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, v107);
    goto LABEL_31;
  }
LABEL_19:
  if ( !*v21 )
    goto LABEL_20;
  Candidate = CDirectFlipInfo::TransferAdvancedDirectFlipState(*v21, (COverlayContext *)((char *)this + 616));
  v12 = Candidate;
  if ( Candidate < 0 )
  {
    v107 = 814;
    goto LABEL_219;
  }
  if ( *((_BYTE *)*v21 + 40) )
  {
    v13 = 1;
  }
  else
  {
    v110 = 1;
LABEL_20:
    v13 = v111;
  }
  v23 = *(void (__fastcall **)(CDirectFlipInfo *__hidden))(*((_QWORD *)this + 77) + 8LL);
  if ( v23 == CDirectFlipInfo::Reset )
    CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 616));
  else
    v23((COverlayContext *)((char *)this + 616));
LABEL_23:
  v24 = v112;
  if ( !(_BYTE)v112 && !v108 )
  {
    v25 = v110;
    goto LABEL_26;
  }
  v25 = v110;
  if ( v110 )
LABEL_26:
    v26 = 0;
  else
    v26 = 1;
  *v130 = v26;
  if ( !v108 || v13 )
    v15 = 0;
  *v129 = v15;
  *v131 = v25;
  *v133 = v13;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(v24, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, (unsigned __int8)v24);
LABEL_31:
  if ( v12 < 0 )
    COverlayContext::Reset(this);
  *((_BYTE *)this + 832) = 0;
  **((_DWORD **)this + 90) = 0;
  *((_DWORD *)this + 204) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 99, 0x10u);
  if ( v124 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v124 + 16LL))(v124);
  return (unsigned int)v12;
}
