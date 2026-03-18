/*
 * XREFs of ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800B8674
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1800B85E0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x180031760 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004FA7C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x18004FD38 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualTree::ReleaseTreeDatas(CVisualTree *this)
{
  _QWORD *v1; // rdi
  CVisualTreeData *v2; // rbx
  CVisual *v3; // rsi
  void (__fastcall *v4)(CVisualTreeData *); // rax

  v1 = (_QWORD *)((char *)this + 40);
  while ( (_QWORD *)*v1 != v1 )
  {
    v2 = (CVisualTreeData *)(*v1 - 240LL);
    v3 = (CVisual *)*((_QWORD *)v2 + 3);
    v4 = *(void (__fastcall **)(CVisualTreeData *))(*(_QWORD *)v2 + 16LL);
    if ( v4 == CVisualTreeData::Clear )
      CVisualTreeData::Clear(v2);
    else
      v4(v2);
    if ( CVisual::GetUnusedTreeData(v3) )
      (**(void (__fastcall ***)(CVisualTreeData *, __int64))v2)(v2, 1LL);
    else
      CVisual::SetUnusedTreeData(v3, v2);
  }
}
