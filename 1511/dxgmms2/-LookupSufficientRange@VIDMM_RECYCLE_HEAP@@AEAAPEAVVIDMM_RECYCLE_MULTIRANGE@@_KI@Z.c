/*
 * XREFs of ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z @ 0x1C005D238
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C005C5E8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005F57C (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081EC4 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008206C (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0082228 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00829D8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::LookupSufficientRange(
        VIDMM_RECYCLE_HEAP *this,
        __int64 a2,
        unsigned int a3)
{
  struct _RTL_BALANCED_NODE *v3; // rbx
  int v5; // eax
  int AlignedRange; // eax
  int v8; // eax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  v10[0] = a2;
  v10[1] = a3;
  if ( v3 )
  {
    while ( 1 )
    {
      AlignedRange = VidMmFindAlignedRange(v10, v3);
      if ( AlignedRange >= 0 )
      {
        if ( AlignedRange <= 0 )
        {
LABEL_14:
          if ( v3 )
          {
            if ( !LODWORD(v3[1].Children[0]) )
            {
              VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v3[3].ParentValue), v3);
              return VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v3);
            }
            return (struct VIDMM_RECYCLE_MULTIRANGE *)v3;
          }
          break;
        }
        v3 = v3->Children[1];
      }
      else
      {
        v3 = v3->Children[0];
      }
      if ( !v3 )
        goto LABEL_14;
    }
  }
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( !v3 )
    goto LABEL_3;
  while ( 1 )
  {
    v8 = VidMmFindAlignedRange(v10, v3);
    if ( v8 >= 0 )
      break;
    v3 = v3->Children[0];
LABEL_22:
    if ( !v3 )
      goto LABEL_25;
  }
  if ( v8 > 0 )
  {
    v3 = v3->Children[1];
    goto LABEL_22;
  }
LABEL_25:
  if ( v3 )
  {
    if ( !LODWORD(v3[1].Children[0]) )
    {
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v3[3].ParentValue), v3);
      return VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v3);
    }
    return (struct VIDMM_RECYCLE_MULTIRANGE *)v3;
  }
LABEL_3:
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    do
    {
      v5 = VidMmFindAlignedRange(v10, v3);
      if ( v5 < 0 )
      {
        v3 = v3->Children[0];
      }
      else
      {
        if ( v5 <= 0 )
          break;
        v3 = v3->Children[1];
      }
    }
    while ( v3 );
    if ( v3 )
    {
      if ( !LODWORD(v3[1].Children[0]) )
      {
        VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v3[3].ParentValue), v3);
        return VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v3);
      }
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v3;
    }
  }
  return 0LL;
}
