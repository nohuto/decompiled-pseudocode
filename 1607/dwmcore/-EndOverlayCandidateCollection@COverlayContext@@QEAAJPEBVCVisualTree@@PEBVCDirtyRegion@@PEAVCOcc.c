/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18001569C (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004B950 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18005F9E4 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180078AF4 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z @ 0x1800B7CC0 (-ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEAU12@@Z @ 0x1800BFB24 (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEAU12@@Z.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1801098FC (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEAA_NXZ @ 0x180110150 (-OverlaysEnabled@COverlayContext@@AEAA_NXZ.c)
 *     ?Transform2DBounds@?$CMatrix@UDeviceHPC@CoordinateSpace@@UPageInPixels@2@@@QEBAXAEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@AEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180110A4C (-Transform2DBounds@-$CMatrix@UDeviceHPC@CoordinateSpace@@UPageInPixels@2@@@QEBAXAEBV-$CRectF@UDe.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x1801286D4 (-FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x18012899C (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?InsertAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180128BC8 (-InsertAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlay.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180128DDC (-IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     ?RectContainedInRegionRect@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x180129850 (-RectContainedInRegionRect@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?RectIntersectsRegion@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x1801298A0 (-RectIntersectsRegion@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801299B4 (-RemoveAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180129B54 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3,
        struct COcclusionContext *a4,
        bool *a5)
{
  bool v8; // r13
  char *v9; // rbx
  int v10; // esi
  char *v11; // r8
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // edx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  unsigned int i; // esi
  __int64 v19; // r15
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v21; // rbx
  unsigned int v22; // eax
  unsigned __int8 IsOccluded; // al
  unsigned __int8 v24; // bl
  unsigned int j; // ebp
  __int64 v26; // r14
  __int64 v27; // rbx
  unsigned int OverlayCandidateIndex; // eax
  __int64 v29; // r8
  __int128 v30; // xmm1
  __int64 v31; // rbx
  int v32; // r8d
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // ebx
  char k; // r15
  __int64 v38; // rsi
  __int64 v39; // rax
  __int128 v40; // xmm0
  __int64 v41; // rcx
  float v42; // xmm2_4
  __int128 v43; // xmm0
  __int64 v44; // rcx
  _BYTE v46[24]; // [rsp+38h] [rbp-160h] BYREF
  _OWORD v47[13]; // [rsp+50h] [rbp-148h] BYREF
  __int128 v48; // [rsp+120h] [rbp-78h]
  __int64 v49; // [rsp+130h] [rbp-68h]

  v8 = 0;
  if ( !*((_BYTE *)this + 1080) || !a4 )
  {
    if ( *((_DWORD *)this + 66) || *((_BYTE *)this + 1089) || *((_QWORD *)this + 120) )
    {
      v43 = *(_OWORD *)((char *)this + 40);
      *((_BYTE *)this + 1091) = 0;
      *((_DWORD *)this + 183) = 1;
      v8 = 1;
      *((_OWORD *)this + 46) = v43;
    }
    goto LABEL_74;
  }
  v9 = (char *)a3 + 2708;
  v10 = *((_DWORD *)a3 + 144);
  if ( !*((_BYTE *)a3 + 2724) )
    v9 = (char *)a3 + 416;
  *((_DWORD *)this + 183) = 0;
  if ( *((_BYTE *)a3 + 2724) )
    goto LABEL_8;
  if ( !*((_BYTE *)a3 + 2726) )
  {
    v15 = 0;
    while ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a3 + 4 * v15 + 6) )
    {
      v15 = v16 + 1;
      if ( v15 >= 8 )
        goto LABEL_13;
    }
    goto LABEL_8;
  }
  if ( *((_DWORD *)a3 + 144) )
  {
LABEL_8:
    CMatrix<CoordinateSpace::DeviceHPC,CoordinateSpace::PageInPixels>::Transform2DBounds(
      (char *)this + 596,
      (char *)this + 24,
      v46);
    if ( v10 )
    {
      v11 = v9 + 8;
      do
      {
        *((_OWORD *)this + *((unsigned int *)this + 183) + 46) = *(_OWORD *)(v11 - 8);
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
               (__int64)this + 16 * *((unsigned int *)this + 183) + 736,
               (__int64)v46) )
        {
          ++*((_DWORD *)this + 183);
        }
        v11 = (char *)(v12 + 16);
      }
      while ( v13 != 1 );
    }
  }
LABEL_13:
  if ( CCommonRegistryData::m_fEnableDesktopPlaneSplit
    && *((_DWORD *)this + 32) > 2u
    && *((_DWORD *)this + 33) > 2u
    && (v14 = *((_QWORD *)this + 9), *(_DWORD *)(v14 + 256) == 1297040209)
    && *(int *)(v14 + 252) >= 2000 )
  {
    if ( COverlayContext::OverlaysEnabled(this) && *((int *)this + 230) > 0 && *((_BYTE *)this + 904) )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 108) + 8LL))((char *)this + 864);
  }
  else if ( *((int *)this + 230) > 0 )
  {
    if ( CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 112)) )
    {
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                        + 112));
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 14) + 96LL))((__int64)RenderingRealizationNoRef + 112) )
      {
        if ( *(_DWORD *)(*((_QWORD *)this + 112) + 104LL) > 2u && !CCommonRegistryData::m_dwOverlayTestMode )
          COverlayContext::ResetOverlayCandidatesList(this);
      }
    }
  }
  for ( i = 0; i < *((_DWORD *)this + 50); ++i )
  {
    v19 = 232LL * i;
    OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(*((_QWORD *)this + 22) + v19 + 8), a2);
    if ( OcclusionInfo )
    {
      v21 = *((_QWORD *)this + 22);
      v22 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
      IsOccluded = COcclusionContext::IsOccluded((__int64)a4, (float *)(v19 + v21 + 144), 0LL, v22);
      v24 = IsOccluded;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xd(
          *((_QWORD *)this + 22),
          &EVTDESC_OVERLAY_CHECKOCCLUSION,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + v19 + 24) + 32LL),
          IsOccluded);
      if ( v24 )
      {
        COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v19 + *((_QWORD *)this + 22)));
        DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 176, i--);
      }
    }
  }
  for ( j = 0; j < *((_DWORD *)this + 66); ++j )
  {
    v26 = 232LL * j;
    v27 = v26 + *((_QWORD *)this + 30);
    OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                              this,
                              0LL,
                              *(struct ISwapChainContent **)(v27 + 16),
                              *(_QWORD *)(v27 + 32));
    if ( OverlayCandidateIndex == -1 )
    {
      if ( !(unsigned __int8)COverlayContext::RectIntersectsRegion(
                               v27 + 144,
                               *((unsigned int *)this + 183),
                               (char *)this + 736) )
      {
        v47[0] = *(_OWORD *)v27;
        v47[1] = *(_OWORD *)(v27 + 16);
        v47[2] = *(_OWORD *)(v27 + 32);
        v47[3] = *(_OWORD *)(v27 + 48);
        v47[4] = *(_OWORD *)(v27 + 64);
        v47[5] = *(_OWORD *)(v27 + 80);
        v47[6] = *(_OWORD *)(v27 + 96);
        v30 = *(_OWORD *)(v27 + 112);
        v31 = v27 + 128;
        v47[7] = v30;
        v47[8] = *(_OWORD *)v31;
        v47[9] = *(_OWORD *)(v31 + 16);
        v47[10] = *(_OWORD *)(v31 + 32);
        v47[11] = *(_OWORD *)(v31 + 48);
        v47[12] = *(_OWORD *)(v31 + 64);
        v48 = *(_OWORD *)(v31 + 80);
        v49 = *(_QWORD *)(v31 + 96);
        COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)v47);
        v32 = *((_DWORD *)this + 50) - 1;
        v33 = *((_DWORD *)this + 50) == 0;
        if ( v32 >= -1 )
        {
          while ( !v33 )
          {
            v34 = 232LL * (unsigned int)v32;
            v35 = *((_QWORD *)this + 22);
            if ( *(_BYTE *)(v34 + v35 + 184) )
            {
              if ( *(_DWORD *)(v34 + v35 + 212) < DWORD1(v48) )
                break;
            }
            v33 = --v32 == -1;
            if ( v32 < -1 )
              goto LABEL_50;
          }
          DynArray<COverlayContext::OverlayPlaneInfo,0>::InsertAt((char *)this + 176, v47, (unsigned int)(v32 + 1));
        }
      }
    }
    else
    {
      COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
        (COverlayContext::OverlayPlaneInfo *)(232LL * OverlayCandidateIndex + *((_QWORD *)this + 22)),
        (struct COverlayContext::OverlayPlaneInfo *)v27);
      COverlayContext::ComparePlaneAttributes(
        (struct COverlayContext::OverlayPlaneInfo *)(v29 + *((_QWORD *)this + 22)),
        (struct COverlayContext::OverlayPlaneInfo *)(v26 + *((_QWORD *)this + 30)),
        (bool *)(v29 + *((_QWORD *)this + 22) + 208),
        (bool *)(v29 + *((_QWORD *)this + 22) + 209));
    }
LABEL_50:
    ;
  }
  v36 = 0;
  for ( k = 1; v36 < *((_DWORD *)this + 50); ++v36 )
  {
    v38 = 232LL * v36;
    if ( !COverlayContext::IsEligibleForOverlays(
            this,
            (struct COverlayContext::OverlayPlaneInfo *)(v38 + *((_QWORD *)this + 22))) )
    {
      v39 = *((_QWORD *)this + 22);
      if ( *(_BYTE *)(v38 + v39 + 184)
        && !(unsigned __int8)COverlayContext::RectContainedInRegionRect(
                               v38 + v39 + 144,
                               *((unsigned int *)this + 183),
                               (char *)this + 736) )
      {
        v40 = *(_OWORD *)((char *)this + 40);
        *((_DWORD *)this + 183) = 1;
        v8 = 1;
        *((_OWORD *)this + 46) = v40;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v41 = (unsigned int)*(_QWORD *)(*(_QWORD *)(v38 + *((_QWORD *)this + 22) + 24) + 40LL);
        Template_xd(
          v41,
          &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
          v41 | ((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v38 + *((_QWORD *)this + 22) + 24) + 40LL)) << 32),
          5LL);
      }
      COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v38 + *((_QWORD *)this + 22)));
      DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 176, v36--);
    }
  }
  if ( (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 32) <= 1u) && !*((_DWORD *)this + 38)
    || !CMILMatrix::IsTranslateAndScale<1>((__int64)this + 528)
    || ((v42 = *((float *)this + 132), v42 <= 1.0) || *((float *)this + 137) < 1.0)
    && (*((float *)this + 137) <= 1.0 || v42 < 1.0) )
  {
    k = 0;
  }
  *((_BYTE *)this + 1091) = k;
LABEL_74:
  *((_BYTE *)this + 1080) = 0;
  **((_DWORD **)this + 121) = 0;
  *((_DWORD *)this + 266) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1040, 16LL);
  *a5 = v8;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(v44, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
  return 0LL;
}
