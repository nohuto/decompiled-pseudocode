/*
 * XREFs of ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180040328
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800403BC (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x180059EC0 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CVisualTree::ReleaseTreeDatas(CVisualTree *this)
{
  _QWORD *v1; // rsi
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  void (__fastcall *v4)(CVisualTreeData *__hidden); // rbp

  v1 = (_QWORD *)((char *)this + 40);
  while ( (_QWORD *)*v1 != v1 )
  {
    v2 = (_QWORD *)(*v1 - 280LL);
    v3 = v2[3];
    v4 = *(void (__fastcall **)(CVisualTreeData *__hidden))(*v2 + 16LL);
    if ( v4 == CVisualTreeData::Clear )
      CVisualTreeData::Clear((CVisualTreeData *)(*v1 - 280LL));
    else
      v4((CVisualTreeData *)(*v1 - 280LL));
    if ( *(_QWORD *)(v3 + 720) )
      (*(void (__fastcall **)(_QWORD *, __int64))*v2)(v2, 1LL);
    else
      *(_QWORD *)(v3 + 720) = v2;
  }
}
