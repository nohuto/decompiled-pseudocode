/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180110884
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x18007EBB0 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 * Callees:
 *     ?OverlaysEnabled@COverlayContext@@AEAA_NXZ @ 0x18000761C (-OverlaysEnabled@COverlayContext@@AEAA_NXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800193B8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?IsEmpty@CRegion@FastRegion@@QEBA_NXZ @ 0x1800FBDD4 (-IsEmpty@CRegion@FastRegion@@QEBA_NXZ.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x18010FE70 (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayC.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x18010FF14 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x1801106F4 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180111A68 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::DeriveDesktopPlaneAttributes(
        COverlayContext *this,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        unsigned int *a6,
        __int64 a7)
{
  unsigned int v8; // r8d
  unsigned int v12; // r15d
  unsigned int v13; // esi
  char CanFastDisableDesktopPlane; // al
  bool v15; // al
  char v16; // dl
  bool v17; // zf
  int v18; // eax
  unsigned int v19; // eax
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  int v31; // eax
  __int64 v32; // r8
  COverlayContext *v33; // rcx
  __int64 v34; // rcx
  __int128 *v35; // rdx
  __int64 v36; // r8
  __int128 v37; // xmm1
  int v38; // edx
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v43; // [rsp+30h] [rbp-81h]
  float v44; // [rsp+30h] [rbp-81h]
  unsigned int v45; // [rsp+34h] [rbp-7Dh] BYREF
  unsigned int *v46; // [rsp+38h] [rbp-79h]
  unsigned int *v47; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v49[20]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v50; // [rsp+A4h] [rbp-Dh]
  int v51; // [rsp+ACh] [rbp-5h]

  v8 = 0;
  v46 = a6;
  v12 = 0;
  v13 = 0;
  if ( a3 )
  {
    CanFastDisableDesktopPlane = COverlayContext::CanFastDisableDesktopPlane((__int64)this, a2);
    v8 = 0;
    if ( CanFastDisableDesktopPlane )
      goto LABEL_28;
  }
  v13 = 1;
  v45 = 1;
  if ( !*(_DWORD *)(a2 + 24)
    || (v15 = COverlayContext::RequiresFrontPlane(**(struct COverlayContext::OverlayPlaneInfo ***)a2), v16 = 1, !v15) )
  {
    v16 = v8;
  }
  if ( *((_DWORD *)this + 29) <= v8
    || *((_BYTE *)this + 839) == (_BYTE)v8
    || (v17 = !COverlayContext::OverlaysEnabled(this), v18 = 4, !v17) )
  {
    v18 = v8;
  }
  *(_DWORD *)a7 = v18;
  v19 = v8;
  LOBYTE(v19) = v16 == 0;
  *(_DWORD *)(a7 + 52) = 1;
  *(_DWORD *)(a7 + 56) = v19;
  *(_DWORD *)(a7 + 76) = v8;
  *(_DWORD *)(a7 + 96) = 2;
  if ( a4 )
  {
    *(_QWORD *)(a7 + 4) = 0LL;
    *(_DWORD *)(a7 + 12) = *((_DWORD *)this + 14);
    *(_DWORD *)(a7 + 16) = *((_DWORD *)this + 15);
    v20 = *((float *)this + 10) + 6291456.25;
    *(_DWORD *)(a7 + 20) = (int)(LODWORD(v20) << 10) >> 11;
    v21 = *((float *)this + 11) + 6291456.25;
    *(_DWORD *)(a7 + 24) = (int)(LODWORD(v21) << 10) >> 11;
    v22 = *((float *)this + 12) + 6291456.25;
    *(_DWORD *)(a7 + 28) = (int)(LODWORD(v22) << 10) >> 11;
    v23 = *((float *)this + 13);
  }
  else
  {
    v24 = *((float *)this + 6) + 6291456.25;
    *(_DWORD *)(a7 + 4) = (int)(LODWORD(v24) << 10) >> 11;
    v25 = *((float *)this + 7) + 6291456.25;
    *(_DWORD *)(a7 + 8) = (int)(LODWORD(v25) << 10) >> 11;
    v26 = *((float *)this + 8) + 6291456.25;
    *(_DWORD *)(a7 + 12) = (int)(LODWORD(v26) << 10) >> 11;
    v27 = *((float *)this + 9) + 6291456.25;
    *(_DWORD *)(a7 + 16) = (int)(LODWORD(v27) << 10) >> 11;
    v28 = *((float *)this + 6) + 6291456.25;
    *(_DWORD *)(a7 + 20) = (int)(LODWORD(v28) << 10) >> 11;
    v29 = *((float *)this + 7) + 6291456.25;
    *(_DWORD *)(a7 + 24) = (int)(LODWORD(v29) << 10) >> 11;
    v30 = *((float *)this + 8) + 6291456.25;
    *(_DWORD *)(a7 + 28) = (int)(LODWORD(v30) << 10) >> 11;
    v23 = *((float *)this + 9);
  }
  v43 = v23 + 6291456.25;
  *(_DWORD *)(a7 + 32) = (int)(LODWORD(v43) << 10) >> 11;
  if ( !a3 || v16 )
  {
    v39 = *((float *)this + 10) + 6291456.25;
    *(_DWORD *)(a7 + 36) = (int)(LODWORD(v39) << 10) >> 11;
    v40 = *((float *)this + 11) + 6291456.25;
    *(_DWORD *)(a7 + 40) = (int)(LODWORD(v40) << 10) >> 11;
    v41 = *((float *)this + 12) + 6291456.25;
    *(_DWORD *)(a7 + 44) = (int)(LODWORD(v41) << 10) >> 11;
    v44 = *((float *)this + 13) + 6291456.25;
    *(_DWORD *)(a7 + 48) = (int)(LODWORD(v44) << 10) >> 11;
LABEL_28:
    *v46 = v13;
    return v12;
  }
  v48 = v8;
  v47 = &v48;
  *(_DWORD *)v49 = v8;
  *(_QWORD *)&v49[4] = 0LL;
  *(_QWORD *)&v49[12] = 0LL;
  v50 = 0LL;
  v51 = 0;
  v31 = COverlayContext::ComputeDesktopClip((float *)this, a2, (FastRegion::CRegion *)&v47);
  v12 = v31;
  if ( v31 >= 0 )
  {
    if ( FastRegion::CRegion::IsEmpty((FastRegion::CRegion *)&v47) )
    {
      v13 = v32;
    }
    else if ( a5 == (_BYTE)v32 || FastRegion::CRegion::IsEmpty((FastRegion::CRegion *)&v47) )
    {
      *(_QWORD *)&v49[8] = v32;
      *(_QWORD *)v49 = v32;
      FastRegion::CRegion::GetBoundingRect((LONG **)&v47, (struct tagRECT *)v49);
      v38 = *(_DWORD *)v49;
      *(_DWORD *)(a7 + 40) = *(_DWORD *)&v49[4];
      *(_QWORD *)(a7 + 44) = *(_QWORD *)&v49[8];
      *(_DWORD *)(a7 + 36) = v38;
    }
    else
    {
      COverlayContext::CheckAndComputeDesktopPlaneSplit(v33, (struct CRegion *)&v47, &v45, (struct tagRECT *)v49);
      v13 = v45;
      *(_OWORD *)(a7 + 36) = *(_OWORD *)v49;
      if ( v13 > 1 )
      {
        v34 = 104LL;
        v35 = (__int128 *)&v49[16];
        v36 = v13 - 1;
        do
        {
          *(_OWORD *)(a7 + v34) = *(_OWORD *)a7;
          v34 += 104LL;
          *(_OWORD *)(a7 + v34 - 88) = *(_OWORD *)(a7 + 16);
          *(_OWORD *)(a7 + v34 - 72) = *(_OWORD *)(a7 + 32);
          *(_OWORD *)(a7 + v34 - 56) = *(_OWORD *)(a7 + 48);
          *(_OWORD *)(a7 + v34 - 40) = *(_OWORD *)(a7 + 64);
          *(_OWORD *)(a7 + v34 - 24) = *(_OWORD *)(a7 + 80);
          *(_QWORD *)(a7 + v34 - 8) = *(_QWORD *)(a7 + 96);
          v37 = *v35++;
          *(_OWORD *)(a7 + v34 - 68) = v37;
          --v36;
        }
        while ( v36 );
      }
    }
    FastRegion::CRegion::FreeMemory((void **)&v47);
    goto LABEL_28;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xAF7u);
  FastRegion::CRegion::FreeMemory((void **)&v47);
  return v12;
}
