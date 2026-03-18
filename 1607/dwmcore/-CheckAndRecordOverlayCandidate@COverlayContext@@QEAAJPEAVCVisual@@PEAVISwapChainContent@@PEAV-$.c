/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180010EAC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18001D098 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D0D8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18001D2C4 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004B8AC (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreSupportedStretchFactors@COverlayContext@@AEAA_NPEAVISwapChainContent@@PEAUtagRECT@@1_N@Z @ 0x180078E38 (-AreSupportedStretchFactors@COverlayContext@@AEAA_NPEAVISwapChainContent@@PEAUtagRECT@@1_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009AAB4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18009AC34 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z @ 0x1800B20D0 (-RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?OverlaysEnabled@COverlayContext@@AEAA_NXZ @ 0x180110150 (-OverlaysEnabled@COverlayContext@@AEAA_NXZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1801108E8 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     ?AddMultipleAndSet@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180126494 (-AddMultipleAndSet@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUOverlayPlaneInf.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x1801286D4 (-FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAV2@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCRegionWrapper@@_N888881@Z @ 0x1801289F0 (-Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAV2@PEAVCVisual@@PEAVISwapChainContent@@PEAVCComp.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEAA_NPEBUtagRECT@@00@Z @ 0x1801291D0 (-IsIntelWorkaroundNeeded@COverlayContext@@AEAA_NPEBUtagRECT@@00@Z.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180129E40 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     Template_xddddd @ 0x18012A044 (Template_xddddd.c)
 *     Template_xdddddddqqddddddddddddqqq @ 0x18012A0FC (Template_xdddddddqqddddddddddddqqq.c)
 *     Template_xddqqddddddddddddqqq @ 0x18012A360 (Template_xddqqddddddddddddqqq.c)
 *     Template_xqqdddd @ 0x18012A6EC (Template_xqqdddd.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_NPEBVCRegion@@@Z @ 0x18012D1AC (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x180151FD0 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x180187AA4 (-Create@CRegionWrapper@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        struct CVisual *a2,
        struct ISwapChainContent *a3,
        float *a4,
        __int64 a5,
        float *a6,
        __int64 a7,
        int a8,
        int a9,
        char a10,
        char a11)
{
  struct ISwapChainContent *v11; // r14
  double v14; // xmm0_8
  int v15; // eax
  double v16; // xmm0_8
  int v17; // eax
  double v18; // xmm0_8
  int v19; // eax
  double v20; // xmm0_8
  int v21; // eax
  double v22; // xmm0_8
  int v23; // eax
  double v24; // xmm0_8
  int v25; // eax
  double v26; // xmm0_8
  int v27; // eax
  int v28; // eax
  double v29; // xmm0_8
  int v30; // r8d
  double v31; // xmm0_8
  int v32; // edx
  double v33; // xmm0_8
  int v34; // ecx
  double v35; // xmm0_8
  __int64 v36; // rax
  bool v37; // cc
  bool v38; // di
  int updated; // eax
  int v40; // esi
  const struct FastRegion::Internal::CRgnData **v41; // r12
  const struct FastRegion::Internal::CRgnData *v42; // rcx
  char v43; // al
  bool v44; // bl
  CCompositionSurfaceInfo *v45; // rax
  __int64 v46; // r15
  struct CBitmapRealization *RenderingRealizationNoRef; // rbx
  __int64 v48; // rax
  char *v49; // rcx
  LONG left; // ebx
  char v51; // r15
  char v52; // al
  struct ISwapChainContent *v53; // rdi
  char v54; // r14
  char v55; // si
  unsigned __int8 v56; // al
  int v57; // edx
  int v58; // ecx
  __int64 v59; // rax
  unsigned int v60; // ebx
  __int64 v61; // rcx
  __int64 v62; // rax
  struct CVisual *v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  struct CRegionWrapper *v66; // rdi
  int v67; // eax
  int v68; // eax
  int v69; // edx
  __int64 v70; // rdi
  char v71; // bl
  bool v72; // bl
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // eax
  int v76; // eax
  int RectangleCount; // eax
  int v78; // ecx
  int v79; // r10d
  int v80; // edx
  int v81; // ecx
  int v82; // r9d
  int v84; // [rsp+20h] [rbp-140h]
  int v85; // [rsp+E0h] [rbp-80h] BYREF
  char v86; // [rsp+E4h] [rbp-7Ch]
  bool IsIntelWorkaroundNeeded; // [rsp+E5h] [rbp-7Bh]
  int v88; // [rsp+E8h] [rbp-78h] BYREF
  int v89; // [rsp+ECh] [rbp-74h] BYREF
  struct CBitmapRealization *v90; // [rsp+F0h] [rbp-70h]
  struct CVisual *v91; // [rsp+F8h] [rbp-68h]
  __int64 v92; // [rsp+100h] [rbp-60h] BYREF
  struct tagRECT v93; // [rsp+108h] [rbp-58h] BYREF
  int v94; // [rsp+118h] [rbp-48h] BYREF
  struct ISwapChainContent *v95; // [rsp+120h] [rbp-40h]
  __int64 v96; // [rsp+128h] [rbp-38h] BYREF
  struct CRegionWrapper *v97; // [rsp+130h] [rbp-30h] BYREF
  struct tagRECT v98; // [rsp+138h] [rbp-28h] BYREF
  int v99; // [rsp+150h] [rbp-10h] BYREF
  RECT rc; // [rsp+154h] [rbp-Ch] BYREF
  RECT rc2; // [rsp+164h] [rbp+4h] BYREF
  RECT rc1; // [rsp+174h] [rbp+14h] BYREF
  int v103; // [rsp+184h] [rbp+24h]
  BOOL v104; // [rsp+188h] [rbp+28h]
  int v105; // [rsp+19Ch] [rbp+3Ch]
  int v106; // [rsp+1B0h] [rbp+50h]
  float v107[4]; // [rsp+1C0h] [rbp+60h] BYREF
  struct FastRegion::Internal::CRgnData *v108[10]; // [rsp+1D0h] [rbp+70h] BYREF
  _OWORD v109[15]; // [rsp+220h] [rbp+C0h] BYREF

  v11 = a3;
  v95 = a3;
  v91 = a2;
  v92 = 0LL;
  v96 = 0LL;
  memset_0(&v99, 0, 0x68uLL);
  v14 = *a4;
  v97 = 0LL;
  *(float *)&v14 = v14 + 6291456.25;
  v85 = LODWORD(v14);
  v15 = LODWORD(v14);
  v16 = a4[1];
  rc.left = v15 << 10 >> 11;
  *(float *)&v16 = v16 + 6291456.25;
  v85 = LODWORD(v16);
  v17 = LODWORD(v16);
  v18 = a4[2];
  rc.top = v17 << 10 >> 11;
  *(float *)&v18 = v18 + 6291456.25;
  v85 = LODWORD(v18);
  v19 = LODWORD(v18);
  v20 = a4[3];
  rc.right = v19 << 10 >> 11;
  *(float *)&v20 = v20 + 6291456.25;
  v85 = LODWORD(v20);
  v21 = LODWORD(v20);
  v22 = *(float *)a5;
  rc.bottom = v21 << 10 >> 11;
  *(float *)&v22 = v22 + 6291456.25;
  v85 = LODWORD(v22);
  v23 = LODWORD(v22);
  v24 = *(float *)(a5 + 4);
  rc2.left = v23 << 10 >> 11;
  *(float *)&v24 = v24 + 6291456.25;
  v85 = LODWORD(v24);
  v25 = LODWORD(v24);
  v26 = *(float *)(a5 + 8);
  rc2.top = v25 << 10 >> 11;
  *(float *)&v26 = v26 + 6291456.25;
  v85 = LODWORD(v26);
  v27 = LODWORD(v26);
  LODWORD(v26) = *(_DWORD *)(a5 + 12);
  rc2.right = v27 << 10 >> 11;
  *(float *)&v26 = *(float *)&v26 + 6291456.25;
  v85 = LODWORD(v26);
  v28 = LODWORD(v26);
  v29 = *a6;
  rc2.bottom = v28 << 10 >> 11;
  *(float *)&v29 = v29 + 6291456.25;
  v85 = LODWORD(v29);
  v30 = LODWORD(v29);
  v31 = a6[1];
  rc1.left = v30 << 10 >> 11;
  *(float *)&v31 = v31 + 6291456.25;
  v85 = LODWORD(v31);
  v32 = LODWORD(v31);
  v33 = a6[2];
  rc1.top = v32 << 10 >> 11;
  *(float *)&v33 = v33 + 6291456.25;
  v85 = LODWORD(v33);
  v34 = LODWORD(v33);
  v35 = a6[3];
  rc1.right = v34 << 10 >> 11;
  *(float *)&v35 = v35 + 6291456.25;
  v107[1] = (float)rc1.top;
  v85 = LODWORD(v35);
  rc1.bottom = (int)(LODWORD(v35) << 10) >> 11;
  v36 = *((_QWORD *)this + 9);
  v107[0] = (float)rc1.left;
  v37 = *(_DWORD *)(v36 + 252) < 2000;
  v107[2] = (float)rc1.right;
  v107[3] = (float)rc1.bottom;
  v86 = v37 && (a9 & 3) != 0 && !COverlayContext::RectContainsRect(&rc1, &rc2);
  IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(this, &rc, &rc2, &rc1);
  v38 = IsIntelWorkaroundNeeded;
  updated = COverlayContext::UpdateVisitedContentRegion(this);
  v89 = updated;
  v40 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x370u);
    goto LABEL_83;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v108, &rc1);
  v41 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 968);
  v42 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)this + 121);
  if ( *(_DWORD *)v42 && *(_DWORD *)v108[0] )
    v43 = FastRegion::Internal::CRgnData::Intersects(v42, v108[0]);
  else
    v43 = 0;
  v44 = v43 == 0;
  FastRegion::CRegion::FreeMemory(v108);
  v85 = v44;
  v45 = (CCompositionSurfaceInfo *)(*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 184LL))(v11);
  *(_QWORD *)&v93.left = v45;
  v46 = (__int64)v45;
  if ( !v45 )
    goto LABEL_83;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v45);
  v90 = RenderingRealizationNoRef;
  (**(void (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
    RenderingRealizationNoRef,
    &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
    &v92);
  (**(void (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
    RenderingRealizationNoRef,
    &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
    &v96);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*((_QWORD *)RenderingRealizationNoRef + 14) + 24LL))(
      (__int64)RenderingRealizationNoRef + 112,
      &v88,
      &v94);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v48 = *((_QWORD *)RenderingRealizationNoRef + 14);
      v49 = (char *)RenderingRealizationNoRef + 112;
      *(_QWORD *)&v98.left = *(_QWORD *)(v46 + 40);
      left = v98.left;
      v51 = (*(__int64 (__fastcall **)(char *))(v48 + 40))(v49);
      v52 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 104LL))(v11);
      v53 = v95;
      v54 = v52;
      v55 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v95 + 96LL))(v95);
      LOBYTE(v53) = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v53 + 128LL))(v53);
      v56 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v95 + 120LL))(v95);
      Template_xdddddddqqddddddddddddqqq(
        v58,
        v57,
        left,
        v56,
        (char)v53,
        v55,
        v54,
        v85,
        v88,
        v94,
        v51,
        v99,
        rc.left,
        rc.top,
        rc.right,
        rc.bottom,
        rc2.left,
        rc2.top,
        rc2.right,
        rc2.bottom,
        rc1.left,
        rc1.top,
        rc1.right,
        rc1.bottom,
        v103,
        v104,
        v105);
      v40 = v89;
      v41 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 968);
      v11 = v95;
      v46 = *(_QWORD *)&v93.left;
      RenderingRealizationNoRef = v90;
    }
    v38 = IsIntelWorkaroundNeeded;
  }
  if ( COverlayContext::OverlaysEnabled(this)
    && (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 96LL))(v11)
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(this, v91, v11, 0LL) == -1
    && !v86
    && !v38
    && !IsRectEmpty(&rc)
    && !IsRectEmpty(&rc2)
    && !IsRectEmpty(&rc1)
    && COverlayContext::AreSupportedStretchFactors(this, v11, &rc, &rc2, a8 == 2)
    && (a11 && *((_BYTE *)this + 1093) || *(_DWORD *)(v46 + 104) > 2u) )
  {
    v59 = *((_QWORD *)this + 120);
    if ( (!v59 || *(_QWORD *)(v59 + 32) != v46)
      && (!v96 || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v96 + 40LL))(v96, 0LL))
      && *(_QWORD *)(v46 + 176) == *((_QWORD *)this + 8) )
    {
      v99 = a9;
      v103 = a8;
      v104 = a10 != 0;
      v106 = 2;
      v105 = *((_DWORD *)RenderingRealizationNoRef + 43);
      v86 = 0;
      if ( a10 )
      {
        v86 = 1;
      }
      else
      {
        v60 = 0;
        if ( *((_DWORD *)this + 50) )
        {
          while ( 1 )
          {
            v61 = 232LL * v60;
            v62 = *((_QWORD *)this + 22);
            if ( *(_BYTE *)(v62 + v61 + 169) )
            {
              if ( !*(_BYTE *)(v62 + v61 + 173)
                && *(_BYTE *)(v62 + v61 + 172)
                && EqualRect(&rc1, (const RECT *)(v61 + v62 + 76)) )
              {
                break;
              }
            }
            if ( ++v60 >= *((_DWORD *)this + 50) )
              goto LABEL_43;
          }
          v63 = v91;
          v64 = 232LL * v60;
          *(_BYTE *)(v64 + *((_QWORD *)this + 22) + 173) = 1;
          *(_BYTE *)(v64 + *((_QWORD *)this + 22) + 172) = 0;
          *(_QWORD *)(v64 + *((_QWORD *)this + 22) + 176) = v63;
        }
LABEL_43:
        RenderingRealizationNoRef = v90;
      }
      v65 = CRegionWrapper::Create(&v97);
      v40 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x3FFu);
        goto LABEL_83;
      }
      v66 = v97;
      v67 = FastRegion::CRegion::Copy((FastRegion::CRegion **)v97 + 2, v41);
      v40 = v67;
      if ( v67 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x401u);
        goto LABEL_83;
      }
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v108, &rc1);
      v40 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v66 + 2, v108);
      FastRegion::CRegion::FreeMemory(v108);
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x402u);
        goto LABEL_83;
      }
      COverlayContext::OverlayPlaneInfo::Init(
        (unsigned int)v109,
        (_DWORD)this,
        (_DWORD)v91,
        (_DWORD)v11,
        v46,
        *(_QWORD *)(v46 + 56),
        (__int64)&v99,
        a7,
        (__int64)v66,
        v92 != 0,
        a10,
        a11,
        v85,
        v86);
      v68 = DynArray<COverlayContext::OverlayPlaneInfo,0>::AddMultipleAndSet((__int64)this + 176, v109);
      v40 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v68, 0x414u);
        goto LABEL_83;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        (*(void (__fastcall **)(__int64, int *, int *))(*((_QWORD *)RenderingRealizationNoRef + 14) + 24LL))(
          (__int64)RenderingRealizationNoRef + 112,
          &v88,
          &v89);
        v69 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 14) + 40LL))((__int64)RenderingRealizationNoRef + 112);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xddqqddddddddddddqqq(
            v105,
            v69,
            *(_DWORD *)(v46 + 40),
            v88,
            v89,
            v69,
            v99,
            rc.left,
            rc.top,
            rc.right,
            rc.bottom,
            rc2.left,
            rc2.top,
            rc2.right,
            rc2.bottom,
            rc1.left,
            rc1.top,
            rc1.right,
            rc1.bottom,
            v103,
            v104,
            v105);
      }
    }
  }
  if ( CCommonRegistryData::m_fDisableDirectFlip
    || *((int *)this + 230) > 0
    || !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *, _QWORD))(*(_QWORD *)v11 + 152LL))(
          v11,
          *((_QWORD *)this + 2))
    || (v70 = *((_QWORD *)this + 2),
        v71 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 88LL))(v11),
        v71 != (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v70 + 440LL))(v70))
    || (v72 = 0, (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 104LL))(v11))
    || !EqualRect(&rc, &rc2)
    || !EqualRect(&rc2, &rc1)
    || !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v107, (float *)this + 6)
    || a8 != 1
    || (a9 & 3) != 0 )
  {
LABEL_83:
    v73 = v92;
    if ( !v92 )
      goto LABEL_85;
    goto LABEL_84;
  }
  v73 = v92;
  if ( !v92 )
  {
    if ( a10 )
      goto LABEL_85;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_x(
        0LL,
        &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
        *(unsigned int *)(v46 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v46 + 40)) << 32));
    if ( (_BYTE)v85 )
    {
      v41 = 0LL;
LABEL_81:
      CDirectFlipInfo::Init(
        (COverlayContext *)((char *)this + 864),
        this,
        *((struct IRenderTarget **)this + 2),
        v91,
        (struct CCompositionSurfaceInfo *)v46,
        v72,
        (const struct CRegion *)v41);
      goto LABEL_83;
    }
    v74 = *((_QWORD *)this + 2);
    v85 = 0;
    v75 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v74 + 24LL))(v74, &v85);
    v40 = v75;
    if ( v75 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x454u);
      goto LABEL_83;
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 128LL))(v11) )
    {
      if ( !CCompositionSurfaceInfo::HasSecondaryRepresentations((CCompositionSurfaceInfo *)v46)
        && !*(_DWORD *)(*((_QWORD *)this + 138) + 208LL) )
      {
        v76 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v90 + 14) + 40LL))((__int64)v90 + 112);
        if ( v76 == v85 )
        {
          v72 = 1;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v98 = 0LL;
            FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)v41, &v98);
            *(_QWORD *)&v93.left = *(_QWORD *)(v46 + 40);
            RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)v41);
            Template_xddddd(
              v78,
              (unsigned int)&EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE,
              v79,
              RectangleCount,
              v98.left,
              v98.top,
              v98.right,
              v98.bottom);
          }
          goto LABEL_81;
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v93 = 0LL;
      FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)v41, &v93);
      Template_xqqdddd(v81, v80, *(_DWORD *)(v46 + 40), v82, v84, v93.left, v93.top, v93.right, v93.bottom);
    }
    goto LABEL_83;
  }
LABEL_84:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
LABEL_85:
  if ( v96 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
  if ( v97 )
    (*(void (__fastcall **)(struct CRegionWrapper *))(*(_QWORD *)v97 + 8LL))(v97);
  return (unsigned int)v40;
}
