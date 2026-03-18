/*
 * XREFs of ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x1800F87B0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CComponentTransform3D *__fastcall CComponentTransform3D::CComponentTransform3D(
        CComponentTransform3D *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 10) |= 1u;
  *(_QWORD *)this = &CComponentTransform3D::`vftable'{for `IExpressionSource'};
  *((_QWORD *)this + 1) = &CComponentTransform3D::`vftable'{for `CTransform3D'};
  *((_QWORD *)this + 20) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 23) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 25) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 26) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 27) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 56) = 1065353216;
  *((_DWORD *)this + 61) = 1065353216;
  *((_DWORD *)this + 66) = 1065353216;
  *((_DWORD *)this + 71) = 1065353216;
  return this;
}
