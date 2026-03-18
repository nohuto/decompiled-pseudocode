/*
 * XREFs of ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x180072544
 * Callers:
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180070EE8 (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 * Callees:
 *     ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800B053C (-ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 */

void __fastcall CDirtyRegion::ClearDirtyRegionAnnotationLists(CDirtyRegion *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  CDirtyRegionAnnotationAllocationSet *v3; // rbx

  v1 = (_QWORD *)((char *)this + 584);
  v2 = 8LL;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --v2;
  }
  while ( v2 );
  v3 = (CDirtyRegion *)((char *)this + 712);
  CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers((CDirtyRegion *)((char *)this + 712));
  CDirtyRegionAnnotationAllocationSet::Initialize(v3);
}
