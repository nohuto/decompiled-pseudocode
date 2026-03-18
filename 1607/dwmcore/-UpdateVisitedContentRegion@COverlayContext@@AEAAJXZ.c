/*
 * XREFs of ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180129E40
 * Callers:
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180126874 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009AA50 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009AAB4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009AC74 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::UpdateVisitedContentRegion(FastRegion::CRegion **this)
{
  int v1; // ebx
  unsigned int v3; // esi
  unsigned int v4; // edx
  int v5; // eax
  FastRegion::CRegion *v7; // [rsp+38h] [rbp-59h] BYREF
  int v8; // [rsp+40h] [rbp-51h] BYREF
  FastRegion::CRegion *v9[10]; // [rsp+88h] [rbp-9h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 266) )
  {
    v8 = 0;
    v7 = (FastRegion::CRegion *)&v8;
    FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)&v7, 0, 0, 0, 0);
    v3 = 0;
    if ( *((_DWORD *)this + 266) <= v4 )
    {
LABEL_5:
      v5 = FastRegion::CRegion::Union(this + 121, &v7);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE3Du);
      }
      else
      {
        *((_DWORD *)this + 266) = 0;
        DynArrayImpl<0>::ShrinkToSize((__int64)(this + 130), 0x10u);
      }
    }
    else
    {
      while ( 1 )
      {
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v9, (const struct tagRECT *)this[130] + v3);
        v1 = FastRegion::CRegion::Union(&v7, v9);
        FastRegion::CRegion::FreeMemory(v9);
        if ( v1 < 0 )
          break;
        if ( ++v3 >= *((_DWORD *)this + 266) )
          goto LABEL_5;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xE37u);
    }
    FastRegion::CRegion::FreeMemory(&v7);
  }
  return (unsigned int)v1;
}
