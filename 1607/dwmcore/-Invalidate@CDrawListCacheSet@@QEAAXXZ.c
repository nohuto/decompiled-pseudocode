/*
 * XREFs of ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x180031364
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x1800310D0 (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180031250 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x180050DE0 (-ClearContentTreeDataCaches@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListCacheSet::Invalidate(CDrawListCacheSet *this)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  CMILRefCountBase *v4; // rcx
  void (*v5)(void); // rax

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = 0;
    if ( *(_DWORD *)(v1 + 24) )
    {
      do
      {
        v4 = *(CMILRefCountBase **)(*(_QWORD *)v1 + 16LL * v3 + 8);
        if ( v4 )
        {
          v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
          if ( (char *)v5 == (char *)CMILRefCountBase::Release )
            CMILRefCountBase::Release(v4);
          else
            v5();
        }
        v1 = *(_QWORD *)this;
        ++v3;
      }
      while ( v3 < *(_DWORD *)(*(_QWORD *)this + 24LL) );
    }
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 0;
  }
}
