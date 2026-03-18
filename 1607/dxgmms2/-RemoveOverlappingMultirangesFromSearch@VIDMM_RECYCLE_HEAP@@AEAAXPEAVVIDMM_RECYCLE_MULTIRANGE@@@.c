/*
 * XREFs of ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0061374
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C006096C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0061200 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2,
        __int64 a3,
        __int64 a4)
{
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct VIDMM_RECYCLE_MULTIRANGE *v12; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v13; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r9

  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v7 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = i;
    WdLogEvent5_WdEvent(v7);
    if ( *((_DWORD *)a2 + 54) )
    {
      v14 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 17);
      if ( v14 )
      {
        v15 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
        *(_QWORD *)(v15 + 24) = v14;
        WdLogEvent5_WdEvent(v15);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v14, a2, v16);
        *((_QWORD *)i + 17) = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 54) != 1 )
    {
      v12 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 18);
      if ( v12 )
      {
        v17 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
        *(_QWORD *)(v17 + 24) = v12;
        WdLogEvent5_WdEvent(v17);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v12, a2, v18);
        *((_QWORD *)i + 18) = 0LL;
      }
    }
    if ( *((_DWORD *)a2 + 54) != 2 )
    {
      v13 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 19);
      if ( v13 )
      {
        v19 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
        *(_QWORD *)(v19 + 24) = v13;
        WdLogEvent5_WdEvent(v19);
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v13, a2, v20);
        *((_QWORD *)i + 19) = 0LL;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
}
