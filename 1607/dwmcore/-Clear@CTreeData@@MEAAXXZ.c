/*
 * XREFs of ?Clear@CTreeData@@MEAAXXZ @ 0x180031250
 * Callers:
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x180031760 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x180031364 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x1800316F0 (-UnLink@CVisualTreeData@@MEAAXXZ.c)
 *     ?Clear@CCpuClippingData@@QEAAXXZ @ 0x1800554A4 (-Clear@CCpuClippingData@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::Clear(CTreeData *this)
{
  void (*v2)(void); // rax

  v2 = *(void (**)(void))(*(_QWORD *)this + 40LL);
  if ( (char *)v2 == (char *)CVisualTreeData::UnLink )
    CVisualTreeData::UnLink(this);
  else
    v2();
  CDrawListCacheSet::Invalidate((CTreeData *)((char *)this + 128));
  CCpuClippingData::Clear((CTreeData *)((char *)this + 136));
  *((_QWORD *)this + 3) = 0LL;
}
