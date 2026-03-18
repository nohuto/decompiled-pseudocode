/*
 * XREFs of ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180075D50
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800766F0 (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x18005C800 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTree::ReleaseTreeDatas(CVisualTree *this)
{
  _QWORD *v1; // rsi
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  void (__fastcall *v4)(void **); // rbp

  v1 = (_QWORD *)((char *)this + 40);
  while ( (_QWORD *)*v1 != v1 )
  {
    v2 = (_QWORD *)(*v1 - 280LL);
    v3 = v2[3];
    v4 = *(void (__fastcall **)(void **))(*v2 + 16LL);
    if ( v4 == CVisualTreeData::Clear )
      CVisualTreeData::Clear((void **)(*v1 - 280LL));
    else
      v4((void **)(*v1 - 280LL));
    if ( *(_QWORD *)(v3 + 704) )
      (*(void (__fastcall **)(_QWORD *, __int64))*v2)(v2, 1LL);
    else
      *(_QWORD *)(v3 + 704) = v2;
  }
}
