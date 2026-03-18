/*
 * XREFs of ?Clear@CTreeData@@MEAAXXZ @ 0x180059780
 * Callers:
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x180059EC0 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?Clear@CCpuClippingData@@QEAAXXZ @ 0x180059A88 (-Clear@CCpuClippingData@@QEAAXXZ.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x180059C80 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x180059EF0 (-UnLink@CVisualTreeData@@MEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CTreeData::Clear(CTreeData *this)
{
  void (__fastcall *v2)(CVisualTreeData *__hidden); // rdi

  v2 = *(void (__fastcall **)(CVisualTreeData *__hidden))(*(_QWORD *)this + 40LL);
  if ( v2 == CVisualTreeData::UnLink )
    CVisualTreeData::UnLink(this);
  else
    v2(this);
  CDrawListCacheSet::Invalidate((CTreeData *)((char *)this + 120));
  CCpuClippingData::Clear((CTreeData *)((char *)this + 184));
  *((_QWORD *)this + 3) = 0LL;
}
