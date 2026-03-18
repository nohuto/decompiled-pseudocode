/*
 * XREFs of ??0CAnalogTextureTarget@@AEAA@PEAVCComposition@@@Z @ 0x180165E90
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800B8344 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CAnalogTextureTarget *__fastcall CAnalogTextureTarget::CAnalogTextureTarget(
        CAnalogTextureTarget *this,
        struct CComposition *a2)
{
  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)this = &CAnalogTextureTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAnalogTextureTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CAnalogTextureTarget::`vftable'{for `IVisualTreeClient'};
  *((_DWORD *)this + 64) = 0;
  *((_WORD *)this + 138) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = (char *)this + 296;
  *((_DWORD *)this + 74) = 0;
  *((_OWORD *)this + 12) = CMILMatrix::Identity;
  *((_OWORD *)this + 13) = xmmword_1801EAD20;
  *((_OWORD *)this + 14) = xmmword_1801EAD30;
  *((_OWORD *)this + 15) = xmmword_1801EAD40;
  *((_DWORD *)this + 64) = dword_1801EAD50;
  return this;
}
