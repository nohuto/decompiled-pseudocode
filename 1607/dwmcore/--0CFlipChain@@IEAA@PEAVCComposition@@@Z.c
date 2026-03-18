/*
 * XREFs of ??0CFlipChain@@IEAA@PEAVCComposition@@@Z @ 0x180141A6C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBitmapResource@@IEAA@PEAVCComposition@@@Z @ 0x1800AE8B8 (--0CBitmapResource@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CFlipChain@@MEAAJXZ @ 0x180142220 (-Initialize@CFlipChain@@MEAAJXZ.c)
 */

CFlipChain *__fastcall CFlipChain::CFlipChain(CFlipChain *this, struct CComposition *a2)
{
  unsigned int v3; // eax

  CBitmapResource::CBitmapResource(this, a2);
  *(_QWORD *)this = &CFlipChain::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CFlipChain::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CFlipChain::`vftable'{for `CContent'};
  *((_QWORD *)this + 18) = &CFlipChain::`vftable';
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_BYTE *)this + 345) = 0;
  CFlipChain::Initialize((CFlipChain *)((char *)this + 16));
  v3 = CFlipChain::s_ulTokenIdCounter;
  *((_DWORD *)this + 66) = CFlipChain::s_ulTokenIdCounter;
  CFlipChain::s_ulTokenIdCounter = v3 + 1;
  return this;
}
