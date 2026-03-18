/*
 * XREFs of ??0CManipulationTransform@@IEAA@PEAVCComposition@@@Z @ 0x180068044
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CManipulationTransform *__fastcall CManipulationTransform::CManipulationTransform(
        CManipulationTransform *this,
        struct CComposition *a2)
{
  CManipulationTransform *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CManipulationTransform::`vftable';
  *((_DWORD *)this + 36) = 1065353216;
  *((_DWORD *)this + 37) = 1065353216;
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 57) = 1065353216;
  *((_DWORD *)this + 52) = 1065353216;
  *((_DWORD *)this + 47) = 1065353216;
  *((_DWORD *)this + 42) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 220) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  return result;
}
