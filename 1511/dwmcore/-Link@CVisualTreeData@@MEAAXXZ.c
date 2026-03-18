/*
 * XREFs of ?Link@CVisualTreeData@@MEAAXXZ @ 0x18005C940
 * Callers:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800591D0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualTreeData::Link(CVisualTreeData *this)
{
  __int64 v1; // r9
  char *v2; // rdx
  _QWORD *v3; // r8
  char *v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // r8

  v1 = *((_QWORD *)this + 37);
  v2 = (char *)this + 280;
  v3 = *(_QWORD **)(v1 + 48);
  *((_QWORD *)this + 35) = v1 + 40;
  *((_QWORD *)this + 36) = v3;
  if ( *v3 != v1 + 40 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v1 + 48) = v2;
  v4 = (char *)this + 264;
  ++*(_DWORD *)(v1 + 56);
  v5 = *((_QWORD *)this + 3) + 416LL;
  v6 = *(_QWORD **)(*((_QWORD *)this + 3) + 424LL);
  *((_QWORD *)this + 33) = v5;
  *((_QWORD *)this + 34) = v6;
  if ( *v6 != v5 )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v5 + 8) = v4;
  *((_BYTE *)this + 16) |= 1u;
}
