/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004FE84
 * Callers:
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x180025A20 (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x1801258A8 (-Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z.c)
 *     ??0CSpriteVisual@@QEAA@PEAVCComposition@@@Z @ 0x180138DF0 (--0CSpriteVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureCviInitialized@CDropShadow@@AEAAJXZ @ 0x18014F690 (-EnsureCviInitialized@CDropShadow@@AEAAJXZ.c)
 * Callees:
 *     ??0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z @ 0x180023F70 (--0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180030EC0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800312A8 (--0CTreeData@@IEAA@XZ.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  CTreeData *v3; // rcx

  CPropertyChangeResource::CPropertyChangeResource(this, a2);
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 34) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 39) = 0LL;
  CTreeData::CTreeData((CVisual *)((char *)this + 320));
  *((_BYTE *)v3 + 224) &= 0xF8u;
  *(_QWORD *)v3 = &CDesktopTreeData::`vftable';
  CTreeData::Initialize(v3, 0LL, this);
  return this;
}
