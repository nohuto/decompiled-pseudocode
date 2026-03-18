/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004CD30
 * Callers:
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18005E924 (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x18010F318 (-Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z.c)
 *     ??0CSpriteVisual@@QEAA@PEAVCComposition@@@Z @ 0x180120EBC (--0CSpriteVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800591D0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180059500 (--0CTreeData@@IEAA@XZ.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  CTreeData *v3; // rcx
  __int64 v4; // r9
  CVisual *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *(_QWORD *)((char *)this + 292) = 1LL;
  *((_QWORD *)this + 51) = 0LL;
  CTreeData::CTreeData((CVisual *)((char *)this + 432));
  *((_BYTE *)v3 + 264) &= 0xF8u;
  *(_QWORD *)v3 = &CDesktopTreeData::`vftable';
  *((_QWORD *)this + 89) = v4;
  *((_QWORD *)this + 90) = v4;
  *((_QWORD *)this + 91) = v4;
  *((_DWORD *)this + 184) = v4;
  *((_QWORD *)this + 40) = (char *)this + 312;
  *((_QWORD *)this + 39) = (char *)this + 312;
  *((_QWORD *)this + 53) = (char *)this + 416;
  *((_QWORD *)this + 52) = (char *)this + 416;
  CTreeData::Initialize(v3, 0LL, this);
  result = this;
  *((_DWORD *)this + 96) = 1065353216;
  return result;
}
