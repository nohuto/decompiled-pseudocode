/*
 * XREFs of ?Clear@CTreeData@@MEAAXXZ @ 0x1800594A0
 * Callers:
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x18005C800 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Clear@CCpuClippingData@@QEAAXXZ @ 0x180035DB8 (-Clear@CCpuClippingData@@QEAAXXZ.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18005971C (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x18005C8D0 (-UnLink@CVisualTreeData@@MEAAXXZ.c)
 */

void __fastcall CTreeData::Clear(void **this)
{
  void (__fastcall *v2)(CVisualTreeData *__hidden); // rdi

  v2 = (void (__fastcall *)(CVisualTreeData *__hidden))*((_QWORD *)*this + 5);
  if ( v2 == CVisualTreeData::UnLink )
    CVisualTreeData::UnLink((CVisualTreeData *)this);
  else
    v2((CVisualTreeData *)this);
  CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(this + 15));
  CCpuClippingData::Clear(this + 23);
  this[3] = 0LL;
}
