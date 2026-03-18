/*
 * XREFs of ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800B053C
 * Callers:
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x180072544 (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers(
        CDirtyRegionAnnotationAllocationSet *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 *v4; // rdx
  __int64 v5; // rax
  WPF::ProcessHeapImpl *v6; // rcx

  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD **)(v2 + 8);
  if ( *(CDirtyRegionAnnotationAllocationSet **)v2 != this || *v3 != v2 )
    __fastfail(3u);
  *((_QWORD *)this + 1) = v3;
  *v3 = this;
  while ( 1 )
  {
    v4 = *(__int64 **)this;
    if ( *(CDirtyRegionAnnotationAllocationSet **)this == this )
      break;
    v5 = *v4;
    if ( (CDirtyRegionAnnotationAllocationSet *)v4[1] != this || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    v6 = WPF::g_pProcessHeap;
    *(_QWORD *)this = v5;
    *(_QWORD *)(v5 + 8) = this;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)v6 + 32LL))(v6);
  }
}
