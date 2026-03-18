/*
 * XREFs of ?CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z @ 0x18000C72C
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualTree::CollectInvalidClientRects(CVisualTree *this, struct CDirtyRegion *a2)
{
  int i; // ebx
  __int64 v5; // rcx

  for ( i = *((_DWORD *)this + 218); i > 0; --i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 106) + 8LL * (unsigned int)(i - 1));
    (*(void (__fastcall **)(__int64, CVisualTree *, struct CDirtyRegion *))(*(_QWORD *)v5 + 32LL))(v5, this, a2);
  }
}
