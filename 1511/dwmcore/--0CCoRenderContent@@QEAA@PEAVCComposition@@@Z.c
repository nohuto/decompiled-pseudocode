/*
 * XREFs of ??0CCoRenderContent@@QEAA@PEAVCComposition@@@Z @ 0x180132C10
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CCoRenderContent *__fastcall CCoRenderContent::CCoRenderContent(CCoRenderContent *this, struct CComposition *a2)
{
  CCoRenderContent *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCoRenderContent::`vftable'{for `CContent'};
  *((_QWORD *)this + 5) = &CCoRenderContent::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  return result;
}
