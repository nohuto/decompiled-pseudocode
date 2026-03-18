/*
 * XREFs of ?AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z @ 0x18003CBB4
 * Callers:
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x18003CC34 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::AppendDirtyRegionLists(CDirtyRegion *this, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // r10

  v3 = (_QWORD *)((char *)this + 16 * a3 + 448);
  if ( (_QWORD *)*v3 != v3 )
  {
    **((_QWORD **)this + 2 * a2 + 57) = *v3;
    *(_QWORD *)(*v3 + 8LL) = *((_QWORD *)this + 2 * a2 + 57);
    **((_QWORD **)this + 2 * a3 + 57) = (char *)this + 16 * a2 + 448;
    *((_QWORD *)this + 2 * a2 + 57) = *((_QWORD *)this + 2 * a3 + 57);
    v3[1] = v3;
    *v3 = v3;
  }
}
