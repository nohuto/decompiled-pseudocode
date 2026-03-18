/*
 * XREFs of ??0CManipulationTransform@@IEAA@PEAVCComposition@@@Z @ 0x180022480
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTransform@@IEAA@PEAVCComposition@@@Z @ 0x180023508 (--0CTransform@@IEAA@PEAVCComposition@@@Z.c)
 */

CManipulationTransform *__fastcall CManipulationTransform::CManipulationTransform(
        CManipulationTransform *this,
        struct CComposition *a2)
{
  CManipulationTransform *result; // rax

  CTransform::CTransform(this, a2);
  *(_QWORD *)this = &CManipulationTransform::`vftable';
  *((_DWORD *)this + 60) = 1065353216;
  *((_DWORD *)this + 61) = 1065353216;
  *((_DWORD *)this + 62) = 1065353216;
  *(_QWORD *)((char *)this + 316) = 0LL;
  *(_QWORD *)((char *)this + 308) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *(_QWORD *)((char *)this + 268) = 0LL;
  result = this;
  *((_DWORD *)this + 81) = 1065353216;
  *((_DWORD *)this + 76) = 1065353216;
  *((_DWORD *)this + 71) = 1065353216;
  *((_DWORD *)this + 66) = 1065353216;
  return result;
}
