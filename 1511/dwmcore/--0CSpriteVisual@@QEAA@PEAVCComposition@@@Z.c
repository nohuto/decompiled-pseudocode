/*
 * XREFs of ??0CSpriteVisual@@QEAA@PEAVCComposition@@@Z @ 0x180120EBC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004CD30 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::CSpriteVisual(CSpriteVisual *this, struct CComposition *a2)
{
  CSpriteVisual *result; // rax

  CVisual::CVisual(this, a2);
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 19) |= 0x108u;
  *(_QWORD *)this = &CSpriteVisual::`vftable';
  result = this;
  *((_DWORD *)this + 20) = 1;
  return result;
}
