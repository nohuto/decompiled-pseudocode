/*
 * XREFs of ?GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18000C5D0
 * Callers:
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18000C56C (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004F938 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18004F984 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

const struct CTreeData *__fastcall CVisual::GetParentTreeData(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4)
{
  __int64 v4; // rax
  struct CTreeData *TreeData; // rbx
  CComposition *v6; // r15
  __int64 v9; // rbp
  __int64 v11; // r10
  _BYTE *v12; // r11
  struct CWeakReferenceBase **TransformParentDataInternal; // r14
  CVisual *v14; // rcx

  v4 = *((_QWORD *)this + 34);
  TreeData = 0LL;
  v6 = (CComposition *)*((_QWORD *)this + 2);
  *a4 = 0;
  v9 = *((_QWORD *)v6 + 44);
  if ( (*(_DWORD *)(v4 + 4) & 0x10000000) != 0 )
  {
    TransformParentDataInternal = (struct CWeakReferenceBase **)CVisual::GetTransformParentDataInternal(this);
    v14 = *(CVisual **)*TransformParentDataInternal;
    if ( v14 )
    {
      if ( (*(_BYTE *)(v11 + 16) & 4) != 0 && *(_QWORD *)(v11 + 216) == v9 )
        goto LABEL_2;
      *v12 = 1;
      TreeData = CVisual::FindTreeData(v14, a2);
    }
    else
    {
      CComposition::ReleaseWeakReference(v6, *TransformParentDataInternal);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CWeakReferenceBase **))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
        WPF::g_pProcessHeap,
        TransformParentDataInternal);
      CVisual::SetTransformParentDataInternal(this, 0LL);
    }
    if ( TreeData )
      return TreeData;
  }
LABEL_2:
  if ( this != *((CVisual **)a2 + 3) )
    return CVisual::FindTreeData(*((CVisual **)this + 18), a2);
  return TreeData;
}
