/*
 * XREFs of ?Initialize@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800B0580
 * Callers:
 *     ??0CDirtyRegion@@QEAA@XZ @ 0x18000CC48 (--0CDirtyRegion@@QEAA@XZ.c)
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x180072544 (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegionAnnotationAllocationSet::Initialize(CDirtyRegionAnnotationAllocationSet *this)
{
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  *((_QWORD *)this + 2) = this;
  *((_QWORD *)this + 3) = this;
  *((_QWORD *)this + 1) = (char *)this + 16;
  *(_QWORD *)this = (char *)this + 16;
  *((_DWORD *)this + 392) = 0;
}
