/*
 * XREFs of ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180010EAC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001160C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18001D2C4 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x18001D788 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002C2EC (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004B950 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18005C694 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009AAB4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Top@CBaseClipStack@@IEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A37D8 (-Top@CBaseClipStack@@IEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 *     ?Transform2DBounds@?$CMatrix@UDeviceHPC@CoordinateSpace@@UPageInPixels@2@@@QEBAXAEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@AEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180110A4C (-Transform2DBounds@-$CMatrix@UDeviceHPC@CoordinateSpace@@UPageInPixels@2@@@QEBAXAEBV-$CRectF@UDe.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180126874 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801282A4 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     Template_xdddddddd @ 0x18012C54C (Template_xdddddddd.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidateForContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        CShape *a6,
        unsigned int a7)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r13
  _QWORD *v10; // rdi
  CShape *v11; // r12
  __int64 v12; // r14
  __int64 (__fastcall *v13)(_QWORD *); // rax
  CCompositionSurfaceInfo *v14; // r15
  __int64 v15; // rax
  int v16; // ebx
  float v17; // xmm0_4
  float v18; // eax
  float v19; // xmm0_4
  __int64 v20; // rax
  __int64 (__fastcall *v21)(_QWORD *); // rax
  int v22; // r13d
  unsigned int v23; // xmm0_4
  char v24; // r14
  char v25; // si
  char v26; // di
  unsigned __int8 v27; // al
  int v28; // edx
  int v29; // ecx
  char v30; // al
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  char *v32; // rsi
  __int64 v33; // rcx
  int DoesImageOcclude; // eax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int128 v37; // xmm1
  int v38; // eax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  unsigned __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  int (__fastcall **v44)(char *, GUID *, __int64 *); // rax
  void *v45; // rdx
  const struct FastRegion::Internal::CRgnData *v46; // rdx
  char v48; // si
  int v49; // eax
  int v50; // eax
  bool v52; // [rsp+60h] [rbp-A0h] BYREF
  char v53; // [rsp+61h] [rbp-9Fh]
  char v54; // [rsp+62h] [rbp-9Eh]
  char v55; // [rsp+63h] [rbp-9Dh]
  DXGI_MODE_ROTATION v56; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v57; // [rsp+68h] [rbp-98h]
  unsigned int v58[2]; // [rsp+6Ch] [rbp-94h] BYREF
  float v59; // [rsp+74h] [rbp-8Ch]
  __int64 v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v62; // [rsp+88h] [rbp-78h]
  __int64 v63; // [rsp+90h] [rbp-70h]
  _OWORD v64[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v65; // [rsp+E0h] [rbp-20h]
  struct tagRECT v66; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v67[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v68[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v69[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v70[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v71[2]; // [rsp+140h] [rbp+40h] BYREF
  struct FastRegion::Internal::CRgnData *v72[2]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v73; // [rsp+160h] [rbp+60h]
  __int128 v74; // [rsp+170h] [rbp+70h]
  __int128 v75; // [rsp+180h] [rbp+80h]
  int v76; // [rsp+190h] [rbp+90h]

  v7 = *a4;
  v8 = a1;
  v9 = a5;
  v10 = a4;
  v11 = a6;
  v12 = a2;
  v57 = 0;
  v13 = *(__int64 (__fastcall **)(_QWORD *))(v7 + 184);
  v61 = 0LL;
  v60 = a1;
  v62 = a4;
  v63 = a3;
  v71[0] = a2;
  v68[0] = a5;
  v67[0] = (__int64)a6;
  v14 = (CCompositionSurfaceInfo *)v13(a4);
  v69[0] = (__int64)v14;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v15 = *v10;
    v65 = 0;
    (*(void (__fastcall **)(_QWORD *, _OWORD *, struct tagRECT *))(v15 + 56))(v10, v64, &v66);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v70[0] = *((_QWORD *)v14 + 5);
      v16 = v70[0];
      v17 = *(float *)&v66.bottom + 6291456.25;
      v18 = v17;
      v19 = *(float *)&v66.right + 6291456.25;
      v56 = (int)(LODWORD(v18) << 10) >> 11;
      v20 = *v10;
      *(float *)v58 = v19;
      v21 = *(__int64 (__fastcall **)(_QWORD *))(v20 + 104);
      v22 = (int)(LODWORD(v19) << 10) >> 11;
      *(float *)&v23 = *(float *)&v66.top + 6291456.25;
      v58[1] = v23;
      v59 = *(float *)&v66.left + 6291456.25;
      v24 = v21(v10);
      v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 96LL))(v10);
      v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 128LL))(v10);
      v27 = (*(__int64 (__fastcall **)(_QWORD *))(*v62 + 120LL))(v62);
      Template_xdddddddd(
        v29,
        v28,
        v16,
        v27,
        v26,
        v25,
        v24,
        (int)(LODWORD(v59) << 10) >> 11,
        (int)(v23 << 10) >> 11,
        v22,
        v56);
      v10 = v62;
      v12 = v71[0];
      v14 = (CCompositionSurfaceInfo *)v69[0];
      v9 = v68[0];
      v11 = (CShape *)v67[0];
      v8 = v60;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 96LL))(v10)
    || (v30 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 120LL))(v10), v53 = 0, v30) )
  {
    v53 = 1;
  }
  v55 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 16) + 456LL))(*(_QWORD *)(v12 + 16));
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v14);
  if ( RenderingRealizationNoRef )
    v32 = (char *)RenderingRealizationNoRef + 112;
  else
    v32 = 0LL;
  if ( (v53 || v55) && v32 && !CLightStack::HasLighting((CLightStack *)(v8 + 96)) )
  {
    v52 = 0;
    v54 = 0;
    DoesImageOcclude = COcclusionContext::DoesImageOcclude(v33, v10, a7, &v52);
    v57 = DoesImageOcclude;
    if ( DoesImageOcclude < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DoesImageOcclude, 0x80Du);
    }
    else
    {
      if ( !v52 )
      {
        if ( (a7 & 2) != 0 || (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v32 + 48LL))(v32) == 3 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
            goto LABEL_58;
          v41 = *((unsigned int *)v14 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v14 + 5)) << 32);
          v42 = 0LL;
          goto LABEL_23;
        }
        v54 = 1;
      }
      v36 = v60;
      v65 = 0;
      CBaseMatrixStack::Top((CBaseMatrixStack *)(v60 + 16), (struct CMILMatrix *)v64);
      CMILMatrix::Multiply((CMILMatrix *)v64, (const struct CMILMatrix *)(v12 + 528));
      if ( v9 )
      {
        v37 = *(_OWORD *)(v9 + 16);
        v38 = *(_DWORD *)(v9 + 64);
        *(_OWORD *)v72 = *(_OWORD *)v9;
        v39 = *(_OWORD *)(v9 + 32);
        v73 = v37;
        v40 = *(_OWORD *)(v9 + 48);
        v74 = v39;
        v75 = v40;
        v76 = v38;
        CMILMatrix::Multiply((CMILMatrix *)v72, (const struct CMILMatrix *)v64);
      }
      else
      {
        *(_OWORD *)v72 = v64[0];
        v73 = v64[1];
        v74 = v64[2];
        v75 = v64[3];
        v76 = v65;
      }
      v58[0] = 0;
      v52 = 1;
      v56 = DXGI_MODE_ROTATION_IDENTITY;
      if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v64)
        && COverlayContext::DeriveOverlayRotationParameters(
             (COverlayContext *)v12,
             (const struct CMILMatrix *)v72,
             &v56,
             v58,
             &v52) )
      {
        if ( !v11 || CShape::IsAxisAlignedRectangle(v11) )
        {
          *(_OWORD *)v67 = *(_OWORD *)(v12 + 40);
          CBaseClipStack::Top(v36 + 56, &v66);
          CMILMatrix::Transform2DBoundsHelper<0>(v12 + 528, &v66, v68);
          v66 = *(struct tagRECT *)v68;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v67, &v66);
          if ( v11 )
          {
            v43 = (*(__int64 (__fastcall **)(CShape *, _QWORD *, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, v71, 0LL);
            v57 = v43;
            if ( v43 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x876u);
              goto LABEL_58;
            }
            CMILMatrix::Transform2DBoundsHelper<0>(v64, v71, v71);
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v67, v71);
          }
          if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v67) )
            goto LABEL_53;
          v44 = *(int (__fastcall ***)(char *, GUID *, __int64 *))v32;
          v65 = 0;
          if ( (*v44)(v32, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v61) < 0 )
          {
            (*(void (__fastcall **)(_QWORD *, _OWORD *, _QWORD *))(*v10 + 56LL))(v10, v64, v70);
            CMILMatrix::Transform2DBoundsHelper<0>(v72, v70, v69);
            v45 = v69;
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD, _OWORD *, _QWORD *, struct tagRECT *, __int64 *))(*(_QWORD *)v61 + 24LL))(
              v61,
              0LL,
              v64,
              v70,
              &v66,
              v69);
            CMILMatrix::Transform2DBoundsHelper<0>(v72, v69, v69);
            CMILMatrix::Transform2DBoundsHelper<0>(v72, &v66, &v66);
            v45 = &v66;
          }
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v67, v45);
          if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v67) )
          {
LABEL_53:
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              v42 = 3LL;
              v41 = *((unsigned int *)v14 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v14 + 5)) << 32);
              goto LABEL_23;
            }
          }
          else
          {
            CMatrix<CoordinateSpace::DeviceHPC,CoordinateSpace::PageInPixels>::Transform2DBounds(v12 + 596, v67, v68);
            v66.left = (int)*(float *)v68;
            v66.top = (int)*((float *)v68 + 1);
            v66.right = (int)*(float *)&v68[1];
            v66.bottom = (int)*((float *)&v68[1] + 1);
            FastRegion::CRegion::CRegion((FastRegion::CRegion *)v72, &v66);
            if ( !(*(_DWORD *)v72[0]
                && (v46 = *(const struct FastRegion::Internal::CRgnData **)(v36 + 816), *(_DWORD *)v46)
                && FastRegion::Internal::CRgnData::Intersects(v72[0], v46)) )
            {
              v48 = v54;
              if ( v53
                && (v49 = COverlayContext::CheckAndRecordOverlayCandidate(
                            (COverlayContext *)v12,
                            (__int64)v69,
                            (__int64)v67,
                            (__int64)v68,
                            v56,
                            v58[0],
                            v54,
                            v52),
                    v57 = v49,
                    v49 < 0) )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x8CDu);
              }
              else if ( v55 )
              {
                if ( !v48 )
                {
                  v50 = COverlayContext::CheckAndNotifyFullScreenSwapChain((COverlayContext *)v12);
                  v57 = v50;
                  if ( v50 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x8D3u);
                }
              }
            }
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v72);
          }
        }
        else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v42 = 2LL;
          v41 = *((unsigned int *)v14 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v14 + 5)) << 32);
LABEL_23:
          Template_xd(v35, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, v41, v42);
        }
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v42 = 1LL;
        v41 = *((unsigned int *)v14 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v14 + 5)) << 32);
        goto LABEL_23;
      }
    }
  }
LABEL_58:
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  return v57;
}
