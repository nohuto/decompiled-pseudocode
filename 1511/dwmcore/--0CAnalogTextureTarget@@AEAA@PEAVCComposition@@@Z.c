/*
 * XREFs of ??0CAnalogTextureTarget@@AEAA@PEAVCComposition@@@Z @ 0x18013BD0C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CAnalogTextureTarget *__fastcall CAnalogTextureTarget::CAnalogTextureTarget(
        CAnalogTextureTarget *this,
        struct CComposition *a2)
{
  CAnalogTextureTarget *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CAnalogTextureTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAnalogTextureTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CAnalogTextureTarget::`vftable'{for `IVisualTreeClient'};
  *((_WORD *)this + 98) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = (char *)this + 216;
  *((_DWORD *)this + 54) = 0;
  result = this;
  *(_OWORD *)((char *)this + 120) = IdentityMatrix;
  *(_OWORD *)((char *)this + 136) = *(&IdentityMatrix + 1);
  *(__m256 *)((char *)this + 152) = ymmword_18019E9D0;
  return result;
}
