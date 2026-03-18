/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAX_N00PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18001248C
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800126A4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_NPEA_N2@Z @ 0x1800F63E0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverla.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800F6AD8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 */

void __fastcall COverlayContext::DeriveDesktopPlaneAttributes(
        COverlayContext *this,
        char a2,
        char a3,
        char a4,
        struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a5)
{
  char v5; // r11
  struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *v6; // r10
  int v7; // eax
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  LONG bottom; // eax
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  LONG left; // edx
  float v24; // [rsp+20h] [rbp-20h]
  float v25; // [rsp+20h] [rbp-20h]
  struct tagRECT v26; // [rsp+28h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a5;
  if ( *((_DWORD *)this + 29) && *((_BYTE *)this + 823) && *((_DWORD *)this + 23) <= 1u )
    v7 = 4;
  else
    v7 = 0;
  *(_DWORD *)a5 = v7;
  if ( a4 )
  {
    *((_DWORD *)a5 + 1) = 0;
    *((_DWORD *)a5 + 2) = 0;
    *((_DWORD *)a5 + 3) = *((_DWORD *)this + 14);
    *((_DWORD *)a5 + 4) = *((_DWORD *)this + 15);
    v20 = *((float *)this + 10) + 6291456.25;
    *((_DWORD *)a5 + 5) = (int)(LODWORD(v20) << 10) >> 11;
    v21 = *((float *)this + 11) + 6291456.25;
    *((_DWORD *)a5 + 6) = (int)(LODWORD(v21) << 10) >> 11;
    v22 = *((float *)this + 12) + 6291456.25;
    *((_DWORD *)a5 + 7) = (int)(LODWORD(v22) << 10) >> 11;
    v15 = *((float *)this + 13);
  }
  else
  {
    v8 = *((float *)this + 6) + 6291456.25;
    *((_DWORD *)a5 + 1) = (int)(LODWORD(v8) << 10) >> 11;
    v9 = *((float *)this + 7) + 6291456.25;
    *((_DWORD *)a5 + 2) = (int)(LODWORD(v9) << 10) >> 11;
    v10 = *((float *)this + 8) + 6291456.25;
    *((_DWORD *)a5 + 3) = (int)(LODWORD(v10) << 10) >> 11;
    v11 = *((float *)this + 9) + 6291456.25;
    *((_DWORD *)a5 + 4) = (int)(LODWORD(v11) << 10) >> 11;
    v12 = *((float *)this + 6) + 6291456.25;
    *((_DWORD *)a5 + 5) = (int)(LODWORD(v12) << 10) >> 11;
    v13 = *((float *)this + 7) + 6291456.25;
    *((_DWORD *)a5 + 6) = (int)(LODWORD(v13) << 10) >> 11;
    v14 = *((float *)this + 8) + 6291456.25;
    *((_DWORD *)a5 + 7) = (int)(LODWORD(v14) << 10) >> 11;
    v15 = *((float *)this + 9);
  }
  v24 = v15 + 6291456.25;
  *((_DWORD *)a5 + 8) = (int)(LODWORD(v24) << 10) >> 11;
  if ( a2 )
  {
    v26.bottom = 0;
    v26.right = 0;
    v26.top = 0;
    v26.left = 0;
    FastRegion::CRegion::GetBoundingRect((COverlayContext *)((char *)this + 744), &v26);
    left = v26.left;
    *((_DWORD *)v6 + 10) = v26.top;
    *((_DWORD *)v6 + 11) = v26.right;
    bottom = v26.bottom;
    *((_DWORD *)v6 + 9) = left;
  }
  else
  {
    v16 = *((float *)this + 10) + 6291456.25;
    *((_DWORD *)a5 + 9) = (int)(LODWORD(v16) << 10) >> 11;
    v17 = *((float *)this + 11) + 6291456.25;
    *((_DWORD *)a5 + 10) = (int)(LODWORD(v17) << 10) >> 11;
    v18 = *((float *)this + 12) + 6291456.25;
    *((_DWORD *)a5 + 11) = (int)(LODWORD(v18) << 10) >> 11;
    v25 = *((float *)this + 13) + 6291456.25;
    bottom = (int)(LODWORD(v25) << 10) >> 11;
  }
  *((_DWORD *)v6 + 12) = bottom;
  *((_DWORD *)v6 + 13) = 1;
  *((_DWORD *)v6 + 24) = 2;
  *((_DWORD *)v6 + 19) = 0;
  *((_DWORD *)v6 + 14) = v5 == 0;
}
