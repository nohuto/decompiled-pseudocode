/*
 * XREFs of ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x180127C60
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180127DF0 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D198 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009AA50 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009AAB4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009AC74 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::ComputeDesktopClip(float *a1, __int64 a2, FastRegion::CRegion *a3)
{
  unsigned int v5; // ebx
  float v6; // xmm0_4
  float v7; // eax
  float v8; // xmm0_4
  int v9; // r9d
  float v10; // xmm0_4
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  FastRegion::CRegion **v15; // rdx
  int v16; // eax
  float v18; // [rsp+30h] [rbp-88h]
  FastRegion::CRegion *v19[10]; // [rsp+40h] [rbp-78h] BYREF

  v5 = 0;
  v6 = a1[13] + 6291456.25;
  v7 = v6;
  v8 = a1[12] + 6291456.25;
  v9 = (int)(LODWORD(v8) << 10) >> 11;
  v10 = a1[11] + 6291456.25;
  v18 = a1[10] + 6291456.25;
  FastRegion::CRegion::SetRectangle(
    a3,
    (int)(LODWORD(v18) << 10) >> 11,
    (int)(LODWORD(v10) << 10) >> 11,
    v9,
    (int)(LODWORD(v7) << 10) >> 11);
  v11 = *(_DWORD *)(a2 + 24) - 1;
  v12 = v11;
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v19,
        (const struct tagRECT *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v12) + 76LL));
      v5 = FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)a3, v19);
      FastRegion::CRegion::FreeMemory(v19);
      if ( (v5 & 0x80000000) != 0 )
        break;
      v13 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v12);
      if ( !*(_BYTE *)(v13 + 171) )
      {
        v14 = *(_QWORD *)(v13 + 160);
        v15 = v14 ? (FastRegion::CRegion **)(v14 + 16) : 0LL;
        v16 = FastRegion::CRegion::Union((FastRegion::CRegion **)a3, v15);
        v5 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC1Du);
          return v5;
        }
      }
      if ( --v12 < 0 )
        return v5;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC16u);
  }
  return v5;
}
