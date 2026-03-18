/*
 * XREFs of ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00681E0
 * Callers:
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00686A4 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0069480 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006A108 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 * Callees:
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  int v4; // ecx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v4 = *((_DWORD *)this + 54);
    if ( v4 )
    {
      v5 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 == 1 )
        {
          *((_QWORD *)i + 19) = this;
        }
        else
        {
          v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2);
          v6[3] = 270LL;
          v6[4] = 52LL;
          v6[5] = 10LL;
          v6[6] = 0LL;
          v6[7] = 0LL;
          WdLogEvent5_WdCriticalError(v6);
        }
      }
      else
      {
        *((_QWORD *)i + 18) = this;
      }
    }
    else
    {
      *((_QWORD *)i + 17) = this;
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
}
