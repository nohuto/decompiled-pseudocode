/*
 * XREFs of ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x18004F488
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0?$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ @ 0x1800517EC (--0-$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ.c)
 */

CRenderData *__fastcall CRenderData::CRenderData(CRenderData *this, struct CComposition *a2)
{
  CRenderData *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CRenderData::`vftable';
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  DynArray<CRenderTarget *,1>::DynArray<CRenderTarget *,1>((char *)this + 88);
  result = this;
  *((_BYTE *)this + 120) = 0;
  return result;
}
