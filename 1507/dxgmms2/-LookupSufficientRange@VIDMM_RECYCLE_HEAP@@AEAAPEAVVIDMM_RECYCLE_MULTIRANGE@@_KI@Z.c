/*
 * XREFs of ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z @ 0x1C0067C4C
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00652AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006560C (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00657B4 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006596C (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068E08 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C006AFA4 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::LookupSufficientRange(
        VIDMM_RECYCLE_HEAP *this,
        __int64 a2,
        unsigned int a3)
{
  struct _RTL_BALANCED_NODE *v3; // rbx
  int AlignedRange; // eax
  int v8; // eax
  int v9; // eax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  v10[0] = a2;
  v10[1] = a3;
  if ( v3 )
  {
    do
    {
      AlignedRange = VidMmFindAlignedRange(v10, v3);
      if ( AlignedRange >= 0 )
      {
        if ( AlignedRange <= 0 )
          break;
        v3 = v3->Children[1];
      }
      else
      {
        v3 = v3->Children[0];
      }
    }
    while ( v3 );
    if ( v3 )
    {
      if ( LODWORD(v3[1].Children[0]) )
        return (struct VIDMM_RECYCLE_MULTIRANGE *)v3;
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v3[3].ParentValue), v3);
      return VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(
               (VIDMM_RECYCLE_HEAP_MGR **)this,
               (struct VIDMM_RECYCLE_RANGE *)v3);
    }
  }
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    do
    {
      v8 = VidMmFindAlignedRange(v10, v3);
      if ( v8 >= 0 )
      {
        if ( v8 <= 0 )
          break;
        v3 = v3->Children[1];
      }
      else
      {
        v3 = v3->Children[0];
      }
    }
    while ( v3 );
    if ( v3 )
    {
      if ( LODWORD(v3[1].Children[0]) )
        return (struct VIDMM_RECYCLE_MULTIRANGE *)v3;
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v3[3].ParentValue), v3);
      return VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(
               (VIDMM_RECYCLE_HEAP_MGR **)this,
               (struct VIDMM_RECYCLE_RANGE *)v3);
    }
  }
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    do
    {
      v9 = VidMmFindAlignedRange(v10, v3);
      if ( v9 >= 0 )
      {
        if ( v9 <= 0 )
          break;
        v3 = v3->Children[1];
      }
      else
      {
        v3 = v3->Children[0];
      }
    }
    while ( v3 );
    if ( v3 )
    {
      if ( LODWORD(v3[1].Children[0]) )
        return (struct VIDMM_RECYCLE_MULTIRANGE *)v3;
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v3[3].ParentValue), v3);
      return VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(
               (VIDMM_RECYCLE_HEAP_MGR **)this,
               (struct VIDMM_RECYCLE_RANGE *)v3);
    }
  }
  return 0LL;
}
