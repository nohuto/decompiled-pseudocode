/*
 * XREFs of ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005B8F8
 * Callers:
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005B2C0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005B770 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C005CE6C (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v4 = (_QWORD *)*((_QWORD *)this + 8);
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 54);
    if ( v6 )
    {
      v8 = (unsigned int)(v6 - 1);
      if ( (_DWORD)v8 )
      {
        if ( (_DWORD)v8 == 1 )
        {
          v4[19] = this;
        }
        else
        {
          v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2, a3, a4);
          v9[3] = 270LL;
          v9[4] = 52LL;
          v9[5] = 10LL;
          v9[6] = 0LL;
          v9[7] = 0LL;
          WdLogEvent5_WdCriticalError(v9);
        }
      }
      else
      {
        v4[18] = this;
      }
    }
    else
    {
      v4[17] = this;
    }
    if ( v4 == *((_QWORD **)this + 9) )
      break;
    v7 = v4[15];
    if ( v7 == v4[9] + 72LL )
      v4 = 0LL;
    else
      v4 = (_QWORD *)(v7 - 120);
  }
}
