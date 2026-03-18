/*
 * XREFs of ??0CFlipChain@@IEAA@PEAVCComposition@@@Z @ 0x1801083E4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ?Initialize@CFlipChain@@MEAAJXZ @ 0x1801094C0 (-Initialize@CFlipChain@@MEAAJXZ.c)
 */

CFlipChain *__fastcall CFlipChain::CFlipChain(CFlipChain *this, struct CComposition *a2)
{
  char *v3; // rcx
  unsigned int v4; // eax

  *((_QWORD *)this + 1) = &IImageSource::`vftable';
  *((_DWORD *)this + 6) = 0;
  v3 = (char *)this + 16;
  *((_QWORD *)v3 + 2) = a2;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_DWORD *)v3 + 8) = 0;
  *(_QWORD *)this = &CFlipChain::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CFlipChain::`vftable'{for `IImageSource'};
  *(_QWORD *)v3 = &CFlipChain::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CFlipChain::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_BYTE *)this + 273) = 0;
  CFlipChain::Initialize((CFlipChain *)v3);
  v4 = CFlipChain::s_ulTokenIdCounter;
  *((_DWORD *)this + 48) = CFlipChain::s_ulTokenIdCounter;
  CFlipChain::s_ulTokenIdCounter = v4 + 1;
  return this;
}
