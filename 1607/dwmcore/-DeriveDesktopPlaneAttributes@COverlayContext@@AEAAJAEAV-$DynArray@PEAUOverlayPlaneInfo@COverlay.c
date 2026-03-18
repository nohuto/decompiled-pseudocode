/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180127DF0
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800B5068 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18009AC34 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?OverlaysEnabled@COverlayContext@@AEAA_NXZ @ 0x180110150 (-OverlaysEnabled@COverlayContext@@AEAA_NXZ.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180126630 (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayC.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x1801266D4 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x180127C60 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180129B2C (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
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
  unsigned int v8; // r9d
  int v11; // r15d
  unsigned int v12; // esi
  char v13; // r12
  char CanFastDisableDesktopPlane; // al
  bool v15; // zf
  char v16; // al
  bool v17; // al
  char v18; // dl
  int v19; // eax
  int v20; // eax
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
  float v31; // xmm0_4
  __int64 v32; // rcx
  __int128 *v33; // rdx
  __int64 v34; // r8
  __int128 v35; // xmm1
  int v36; // r10d
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v41; // [rsp+30h] [rbp-81h]
  float v42; // [rsp+30h] [rbp-81h]
  char v43; // [rsp+34h] [rbp-7Dh]
  unsigned int v45; // [rsp+38h] [rbp-79h] BYREF
  unsigned int *v46; // [rsp+40h] [rbp-71h]
  COverlayContext *v47; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v49[20]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v50; // [rsp+B4h] [rbp+3h]
  int v51; // [rsp+BCh] [rbp+Bh]

  v8 = 0;
  v43 = a4;
  v11 = 0;
  v46 = a6;
  v12 = 0;
  if ( *(_DWORD *)(a2 + 24) || (v13 = 0, a4) )
    v13 = 1;
  if ( !a3
    || (CanFastDisableDesktopPlane = COverlayContext::CanFastDisableDesktopPlane((__int64)this, a2),
        v8 = 0,
        v15 = CanFastDisableDesktopPlane == 0,
        v16 = 1,
        v15) )
  {
    v16 = 0;
  }
  if ( !v13 || v16 )
    goto LABEL_35;
  v12 = 1;
  v45 = 1;
  if ( !*(_DWORD *)(a2 + 24)
    || (v17 = COverlayContext::RequiresFrontPlane(**(struct COverlayContext::OverlayPlaneInfo ***)a2), v18 = 1, !v17) )
  {
    v18 = v8;
  }
  if ( *((_DWORD *)this + 38) <= v8 || (v15 = !COverlayContext::OverlaysEnabled(this), v19 = 4, !v15) )
    v19 = v8;
  *(_DWORD *)a7 = v19;
  *(_DWORD *)(a7 + 52) = 1;
  if ( v18 || (v20 = 1, *(_DWORD *)(a2 + 24) == v8) )
    v20 = v8;
  *(_DWORD *)(a7 + 56) = v20;
  *(_DWORD *)(a7 + 76) = v8;
  *(_DWORD *)(a7 + 96) = 2;
  if ( v43 == (_BYTE)v8 )
  {
    v25 = *((float *)this + 6) + 6291456.25;
    *(_DWORD *)(a7 + 4) = (int)(LODWORD(v25) << 10) >> 11;
    v26 = *((float *)this + 7) + 6291456.25;
    *(_DWORD *)(a7 + 8) = (int)(LODWORD(v26) << 10) >> 11;
    v27 = *((float *)this + 8) + 6291456.25;
    *(_DWORD *)(a7 + 12) = (int)(LODWORD(v27) << 10) >> 11;
    v28 = *((float *)this + 9) + 6291456.25;
    *(_DWORD *)(a7 + 16) = (int)(LODWORD(v28) << 10) >> 11;
    v29 = *((float *)this + 6) + 6291456.25;
    *(_DWORD *)(a7 + 20) = (int)(LODWORD(v29) << 10) >> 11;
    v30 = *((float *)this + 7) + 6291456.25;
    *(_DWORD *)(a7 + 24) = (int)(LODWORD(v30) << 10) >> 11;
    v31 = *((float *)this + 8) + 6291456.25;
    *(_DWORD *)(a7 + 28) = (int)(LODWORD(v31) << 10) >> 11;
    v24 = *((float *)this + 9);
  }
  else
  {
    *(_QWORD *)(a7 + 4) = 0LL;
    *(_DWORD *)(a7 + 12) = *((_DWORD *)this + 14);
    *(_DWORD *)(a7 + 16) = *((_DWORD *)this + 15);
    v21 = *((float *)this + 10) + 6291456.25;
    *(_DWORD *)(a7 + 20) = (int)(LODWORD(v21) << 10) >> 11;
    v22 = *((float *)this + 11) + 6291456.25;
    *(_DWORD *)(a7 + 24) = (int)(LODWORD(v22) << 10) >> 11;
    v23 = *((float *)this + 12) + 6291456.25;
    *(_DWORD *)(a7 + 28) = (int)(LODWORD(v23) << 10) >> 11;
    v24 = *((float *)this + 13);
  }
  v41 = v24 + 6291456.25;
  *(_DWORD *)(a7 + 32) = (int)(LODWORD(v41) << 10) >> 11;
  if ( a3 == (_BYTE)v8 || v18 )
  {
    v37 = *((float *)this + 10) + 6291456.25;
    *(_DWORD *)(a7 + 36) = (int)(LODWORD(v37) << 10) >> 11;
    v38 = *((float *)this + 11) + 6291456.25;
    *(_DWORD *)(a7 + 40) = (int)(LODWORD(v38) << 10) >> 11;
    v39 = *((float *)this + 12) + 6291456.25;
    *(_DWORD *)(a7 + 44) = (int)(LODWORD(v39) << 10) >> 11;
    v42 = *((float *)this + 13) + 6291456.25;
    *(_DWORD *)(a7 + 48) = (int)(LODWORD(v42) << 10) >> 11;
LABEL_35:
    *v46 = v12;
    return (unsigned int)v11;
  }
  v48 = v8;
  v47 = (COverlayContext *)&v48;
  *(_DWORD *)v49 = v8;
  *(_QWORD *)&v49[4] = 0LL;
  *(_QWORD *)&v49[12] = 0LL;
  v50 = 0LL;
  v51 = 0;
  v11 = COverlayContext::ComputeDesktopClip((float *)this, a2, (FastRegion::CRegion *)&v47);
  if ( v11 >= 0 )
  {
    if ( *(_DWORD *)v47 )
    {
      if ( a5 )
      {
        COverlayContext::CheckAndComputeDesktopPlaneSplit(v47, (struct CRegion *)&v47, &v45, (struct tagRECT *)v49);
        v12 = v45;
        *(_OWORD *)(a7 + 36) = *(_OWORD *)v49;
        if ( v12 > 1 )
        {
          v32 = 104LL;
          v33 = (__int128 *)&v49[16];
          v34 = v12 - 1;
          do
          {
            *(_OWORD *)(a7 + v32) = *(_OWORD *)a7;
            v32 += 104LL;
            *(_OWORD *)(a7 + v32 - 88) = *(_OWORD *)(a7 + 16);
            *(_OWORD *)(a7 + v32 - 72) = *(_OWORD *)(a7 + 32);
            *(_OWORD *)(a7 + v32 - 56) = *(_OWORD *)(a7 + 48);
            *(_OWORD *)(a7 + v32 - 40) = *(_OWORD *)(a7 + 64);
            *(_OWORD *)(a7 + v32 - 24) = *(_OWORD *)(a7 + 80);
            *(_QWORD *)(a7 + v32 - 8) = *(_QWORD *)(a7 + 96);
            v35 = *v33++;
            *(_OWORD *)(a7 + v32 - 68) = v35;
            --v34;
          }
          while ( v34 );
        }
      }
      else
      {
        *(_QWORD *)&v49[8] = 0LL;
        *(_QWORD *)v49 = 0LL;
        FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)&v47, (struct tagRECT *)v49);
        v36 = *(_DWORD *)v49;
        *(_DWORD *)(a7 + 40) = *(_DWORD *)&v49[4];
        *(_QWORD *)(a7 + 44) = *(_QWORD *)&v49[8];
        *(_DWORD *)(a7 + 36) = v36;
      }
    }
    else
    {
      v12 = 0;
    }
    FastRegion::CRegion::FreeMemory(&v47);
    goto LABEL_35;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xBA9u);
  FastRegion::CRegion::FreeMemory(&v47);
  return (unsigned int)v11;
}
