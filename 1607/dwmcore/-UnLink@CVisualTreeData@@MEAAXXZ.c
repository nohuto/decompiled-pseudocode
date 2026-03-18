/*
 * XREFs of ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x1800316F0
 * Callers:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180031250 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualTreeData::UnLink(CVisualTreeData *this)
{
  __int64 v1; // r9
  CVisualTreeData **v2; // r8
  CVisualTreeData **v3; // rdx
  CVisualTreeData **v4; // rdx
  CVisualTreeData **v5; // rax

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    v1 = *((_QWORD *)this + 32);
    v2 = (CVisualTreeData **)*((_QWORD *)this + 30);
    v3 = (CVisualTreeData **)*((_QWORD *)this + 31);
    if ( v2[1] != (CVisualTreeData *)((char *)this + 240) || *v3 != (CVisualTreeData *)((char *)this + 240) )
      __fastfail(3u);
    *v3 = (CVisualTreeData *)v2;
    v2[1] = (CVisualTreeData *)v3;
    --*(_DWORD *)(v1 + 56);
    v4 = (CVisualTreeData **)*((_QWORD *)this + 28);
    v5 = (CVisualTreeData **)*((_QWORD *)this + 29);
    if ( v4[1] != (CVisualTreeData *)((char *)this + 224) || *v5 != (CVisualTreeData *)((char *)this + 224) )
      __fastfail(3u);
    *v5 = (CVisualTreeData *)v4;
    v4[1] = (CVisualTreeData *)v5;
    *((_BYTE *)this + 16) &= ~1u;
  }
}
