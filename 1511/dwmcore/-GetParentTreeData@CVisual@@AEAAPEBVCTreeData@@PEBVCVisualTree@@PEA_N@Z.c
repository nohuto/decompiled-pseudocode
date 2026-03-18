/*
 * XREFs of ?GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEA_N@Z @ 0x180009400
 * Callers:
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@W4WalkReason@@@Z @ 0x18000937C (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@W4WalkReason@@@Z.c)
 * Callees:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180008FA4 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180094860 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 */

const struct CTreeData *__fastcall CVisual::GetParentTreeData(CVisual *this, const struct CVisualTree *a2, bool *a3)
{
  struct CTreeData *TreeData; // rdi
  struct CWeakReferenceBase *v5; // rdx
  const struct CVisual **v9; // rbp

  TreeData = 0LL;
  v5 = (struct CWeakReferenceBase *)*((_QWORD *)this + 43);
  *a3 = 0;
  if ( v5 )
  {
    v9 = *(const struct CVisual ***)v5;
    if ( *(_QWORD *)v5 )
    {
      if ( !CVisualTree::IsAncestorInSameSpace(a2, (const struct CVisual **)this, v9) )
        goto LABEL_2;
      *a3 = 1;
      TreeData = CVisual::FindTreeData((CVisual *)v9, a2);
    }
    else
    {
      CComposition::ReleaseWeakReference(*((CComposition **)this + 2), v5);
      *((_QWORD *)this + 43) = 0LL;
    }
    if ( TreeData )
      return TreeData;
  }
LABEL_2:
  if ( this != *((CVisual **)a2 + 3) )
    return CVisual::FindTreeData(*((CVisual **)this + 8), a2);
  return TreeData;
}
