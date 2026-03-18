/*
 * XREFs of ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x18003DA40
 * Callers:
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18003C97C (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 * Callees:
 *     ??_GCDirtyRegionAnnotation@@QEAAPEAXI@Z @ 0x1800DBB88 (--_GCDirtyRegionAnnotation@@QEAAPEAXI@Z.c)
 */

void __fastcall CDirtyRegion::ClearDirtyRegionAnnotationLists(CDirtyRegion *this, unsigned int a2)
{
  unsigned int v2; // edi
  CDirtyRegionAnnotation **v3; // rbx
  CDirtyRegionAnnotation *v4; // rcx
  CDirtyRegionAnnotation **v5; // rax

  v2 = 0;
  v3 = (CDirtyRegionAnnotation **)((char *)this + 448);
  do
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 == (CDirtyRegionAnnotation *)v3 )
        break;
      v5 = *(CDirtyRegionAnnotation ***)v4;
      if ( *((CDirtyRegionAnnotation ***)v4 + 1) != v3 || v5[1] != v4 )
        __fastfail(3u);
      *v3 = (CDirtyRegionAnnotation *)v5;
      v5[1] = (CDirtyRegionAnnotation *)v3;
      CDirtyRegionAnnotation::`scalar deleting destructor'(v4, a2);
    }
    ++v2;
    v3 += 2;
  }
  while ( v2 < 8 );
}
