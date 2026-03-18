/*
 * XREFs of ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x1801106F4
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180110884 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18006D960 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18006D9C4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DA6C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DCA4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
  const struct FastRegion::Internal::CRgnData **v15; // rdx
  int v16; // eax
  float v18; // [rsp+34h] [rbp-84h]
  void *v19[10]; // [rsp+40h] [rbp-78h] BYREF

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
        (const struct tagRECT *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v12) + 68LL));
      v5 = FastRegion::CRegion::Subtract(
             (const struct FastRegion::Internal::CRgnData **)a3,
             (const struct FastRegion::Internal::CRgnData **)v19);
      FastRegion::CRegion::FreeMemory(v19);
      if ( (v5 & 0x80000000) != 0 )
        break;
      v13 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v12);
      if ( !*(_BYTE *)(v13 + 163) )
      {
        v14 = *(_QWORD *)(v13 + 152);
        v15 = v14 ? (const struct FastRegion::Internal::CRgnData **)(v14 + 16) : 0LL;
        v16 = FastRegion::CRegion::Union((const struct FastRegion::Internal::CRgnData **)a3, v15);
        v5 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB6Bu);
          return v5;
        }
      }
      if ( --v12 < 0 )
        return v5;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB64u);
  }
  return v5;
}
