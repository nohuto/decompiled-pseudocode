/*
 * XREFs of ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068CF0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00652AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0069480 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *v8; // rsi
  __int64 v9; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v10; // rsi
  __int64 v11; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v12; // rsi
  __int64 v13; // rax

  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v5 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v5 + 24) = i;
    WdLogEvent5_WdEvent(v5);
    if ( *((_DWORD *)a2 + 54) )
    {
      v8 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 17);
      if ( v8 )
      {
        v9 = WdLogNewEntry5_WdEvent(v7, v6);
        *(_QWORD *)(v9 + 24) = v8;
        WdLogEvent5_WdEvent(v9);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v8, a2);
        *((_QWORD *)i + 17) = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 54) != 1 )
    {
      v10 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 18);
      if ( v10 )
      {
        v11 = WdLogNewEntry5_WdEvent(v7, v6);
        *(_QWORD *)(v11 + 24) = v10;
        WdLogEvent5_WdEvent(v11);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v10, a2);
        *((_QWORD *)i + 18) = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 54) != 2 )
    {
      v12 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 19);
      if ( v12 )
      {
        v13 = WdLogNewEntry5_WdEvent(v7, v6);
        *(_QWORD *)(v13 + 24) = v12;
        WdLogEvent5_WdEvent(v13);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v12, a2);
        *((_QWORD *)i + 19) = 0LL;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
}
