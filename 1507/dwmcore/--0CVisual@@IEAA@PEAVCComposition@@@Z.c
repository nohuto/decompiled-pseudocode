/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800343F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18007DC8C (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x1800F5698 (-Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z.c)
 * Callees:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180059590 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800597D4 (--0CTreeData@@IEAA@XZ.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  CTreeData *v3; // rcx
  CVisual *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisual::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 7) = &CWindowNode::`vftable'{for `IExpressionSource'};
  *((_QWORD *)this + 8) = &CWindowNode::`vftable'{for `IGraphNode'};
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *(_QWORD *)((char *)this + 308) = 1LL;
  *((_QWORD *)this + 53) = 0LL;
  CTreeData::CTreeData((CVisual *)((char *)this + 448));
  *((_BYTE *)v3 + 264) &= 0xF8u;
  *(_QWORD *)v3 = &CDesktopTreeData::`vftable';
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_DWORD *)this + 188) = 0;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_DWORD *)this + 196) = 0;
  *((_BYTE *)this + 88) |= 0x80u;
  *((_DWORD *)this + 23) |= 0x78000u;
  *((_DWORD *)this + 51) = -1;
  *((_DWORD *)this + 53) = -1;
  *((_DWORD *)this + 54) = -1;
  *((_DWORD *)this + 52) = 5;
  *((_QWORD *)this + 42) = (char *)this + 328;
  *((_QWORD *)this + 41) = (char *)this + 328;
  *((_QWORD *)this + 55) = (char *)this + 432;
  *((_QWORD *)this + 54) = (char *)this + 432;
  CTreeData::Initialize(v3, 0LL, this);
  result = this;
  *((_DWORD *)this + 100) = 1065353216;
  *((_DWORD *)this + 24) = 0;
  return result;
}
