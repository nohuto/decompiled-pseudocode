/*
 * XREFs of ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18005C830
 * Callers:
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004D8D0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualTreeData::Initialize(CVisualTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  *((_QWORD *)this + 37) = a2;
  CTreeData::Initialize(this, 0LL, a3);
}
