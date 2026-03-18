/*
 * XREFs of ?Link@CVisualTreeData@@MEAAXXZ @ 0x180031690
 * Callers:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180030EC0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x18004EED0 (-AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z.c)
 */

void __fastcall CVisualTreeData::Link(CVisualTreeData *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // rdx

  v2 = *((_QWORD *)this + 32);
  v3 = *(_QWORD **)(v2 + 48);
  v4 = (_QWORD *)((char *)this + 240);
  if ( *v3 != v2 + 40 )
    __fastfail(3u);
  *v4 = v2 + 40;
  *((_QWORD *)this + 31) = v3;
  *v3 = v4;
  *(_QWORD *)(v2 + 48) = v4;
  ++*(_DWORD *)(v2 + 56);
  CVisual::AddVisualTreeDataToList(*((CVisual **)this + 3), this);
  *((_BYTE *)this + 16) |= 1u;
}
