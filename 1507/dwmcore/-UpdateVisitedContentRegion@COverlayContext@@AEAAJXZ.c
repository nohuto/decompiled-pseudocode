/*
 * XREFs of ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x1800069EC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6270 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVIImageSource@@PEAV-$TMilRect_@MUMil.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180087E9C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180087F0C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::UpdateVisitedContentRegion(COverlayContext *this)
{
  int v1; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int *v6; // [rsp+38h] [rbp-59h] BYREF
  int v7; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v8[80]; // [rsp+88h] [rbp-9h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 182) )
  {
    v7 = 0;
    v4 = 0;
    v6 = &v7;
    do
    {
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v8,
        (const struct tagRECT *)(*((_QWORD *)this + 88) + 16LL * v4));
      v1 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v6, (const struct CRegion *)v8);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v8);
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xCE3u);
        goto LABEL_8;
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 182) );
    v5 = FastRegion::CRegion::Union((COverlayContext *)((char *)this + 632), (const struct CRegion *)&v6);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xCE9u);
    }
    else
    {
      *((_DWORD *)this + 182) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)this + 704, 16LL);
    }
LABEL_8:
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v6);
  }
  return (unsigned int)v1;
}
