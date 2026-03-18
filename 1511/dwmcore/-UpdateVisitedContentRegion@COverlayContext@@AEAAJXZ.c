/*
 * XREFs of ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180007640
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801100CC (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18006D960 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18006D9C4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DCA4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::UpdateVisitedContentRegion(COverlayContext *this)
{
  int v1; // ebx
  unsigned int v4; // esi
  unsigned int v5; // edx
  int v6; // eax
  int *v7; // [rsp+38h] [rbp-59h] BYREF
  int v8; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v9[80]; // [rsp+88h] [rbp-9h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 204) )
  {
    v8 = 0;
    v7 = &v8;
    FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)&v7, 0, 0, 0, 0);
    v4 = 0;
    if ( *((_DWORD *)this + 204) <= v5 )
    {
LABEL_6:
      v6 = FastRegion::CRegion::Union((COverlayContext *)((char *)this + 720), (const struct CRegion *)&v7);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xD83u);
      }
      else
      {
        *((_DWORD *)this + 204) = 0;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 792, 16LL);
      }
    }
    else
    {
      while ( 1 )
      {
        FastRegion::CRegion::CRegion(
          (FastRegion::CRegion *)v9,
          (const struct tagRECT *)(*((_QWORD *)this + 99) + 16LL * v4));
        v1 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v7, (const struct CRegion *)v9);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v9);
        if ( v1 < 0 )
          break;
        if ( ++v4 >= *((_DWORD *)this + 204) )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xD7Du);
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v7);
  }
  return (unsigned int)v1;
}
