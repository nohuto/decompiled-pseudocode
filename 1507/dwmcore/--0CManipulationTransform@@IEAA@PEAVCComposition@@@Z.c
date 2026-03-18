/*
 * XREFs of ??0CManipulationTransform@@IEAA@PEAVCComposition@@@Z @ 0x180016900
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
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
  *(_QWORD *)this = &CManipulationTransform::`vftable'{for `CTransform'};
  *((_QWORD *)this + 13) = &CManipulationTransform::`vftable'{for `IExpressionSource'};
  *((_DWORD *)this + 34) = 1065353216;
  *((_DWORD *)this + 35) = 1065353216;
  *((_DWORD *)this + 36) = 1065353216;
  *((_DWORD *)this + 55) = 1065353216;
  *((_DWORD *)this + 50) = 1065353216;
  *((_DWORD *)this + 45) = 1065353216;
  *((_DWORD *)this + 40) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  return result;
}
