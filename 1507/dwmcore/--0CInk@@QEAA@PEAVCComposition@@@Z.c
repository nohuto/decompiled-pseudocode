/*
 * XREFs of ??0CInk@@QEAA@PEAVCComposition@@@Z @ 0x1800F8964
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CInk *__fastcall CInk::CInk(CInk *this, struct CComposition *a2)
{
  CInk *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CInk::`vftable';
  *((_QWORD *)this + 5) = &CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::`vftable';
  *((_QWORD *)this + 6) = this;
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 2;
  *(_QWORD *)((char *)this + 76) = 2LL;
  result = this;
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a2 + 252);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  return result;
}
