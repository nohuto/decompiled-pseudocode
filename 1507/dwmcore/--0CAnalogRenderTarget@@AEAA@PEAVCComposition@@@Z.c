/*
 * XREFs of ??0CAnalogRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180125FDC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CAnalogRenderTarget *__fastcall CAnalogRenderTarget::CAnalogRenderTarget(
        CAnalogRenderTarget *this,
        struct CComposition *a2)
{
  CAnalogRenderTarget *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CAnalogRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAnalogRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CAnalogRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CAnalogRenderTarget::`vftable';
  result = this;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 216) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *(_OWORD *)((char *)this + 136) = IdentityMatrix;
  *(_OWORD *)((char *)this + 152) = *(&IdentityMatrix + 1);
  *(_OWORD *)((char *)this + 168) = xmmword_180190B20;
  *(_OWORD *)((char *)this + 184) = xmmword_180190B30;
  return result;
}
