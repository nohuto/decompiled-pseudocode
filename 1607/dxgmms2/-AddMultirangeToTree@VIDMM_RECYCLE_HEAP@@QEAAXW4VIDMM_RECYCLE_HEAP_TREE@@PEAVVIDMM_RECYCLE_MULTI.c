/*
 * XREFs of ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0060820
 * Callers:
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005E2A0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005E830 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060B38 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0060D60 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0061200 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C006149C (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0095490 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0095638 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00957F4 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00617A8 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::AddMultirangeToTree(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // r14
  struct _RTL_BALANCED_NODE *v13; // rbx
  struct _RTL_BALANCED_NODE *v14; // rax
  struct _RTL_BALANCED_NODE *v15; // rax
  __int64 result; // rax
  _QWORD *v17; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  char v19; // [rsp+30h] [rbp-18h]

  v5 = (int)a2;
  v7 = WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = a3;
  *(_QWORD *)(v7 + 32) = v5;
  WdLogEvent5_WdEvent(v7);
  v10 = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v11 = *(_QWORD *)(a3 + 56);
  v18[0] = v10;
  v18[1] = v11;
  v19 = 0;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      v12 = a1 + 7;
      LOBYTE(v9) = 0;
      v13 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v13 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v18, v13) < 0 )
          {
            v15 = v13->Children[0];
            if ( !v13->Children[0] )
              goto LABEL_16;
          }
          else
          {
            v15 = v13->Children[1];
            if ( !v15 )
              goto LABEL_11;
          }
          v13 = v15;
        }
      }
    }
    else
    {
      if ( (_DWORD)v5 != 2 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v5 - 1), v8, v9, v10);
        v17[3] = 270LL;
        v17[4] = 52LL;
        v17[5] = 15LL;
        v17[6] = v5;
        v17[7] = 0LL;
        result = WdLogEvent5_WdCriticalError(v17);
        goto LABEL_13;
      }
      v12 = a1 + 8;
      LOBYTE(v9) = 0;
      v13 = (struct _RTL_BALANCED_NODE *)a1[8];
      if ( v13 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v18, v13) >= 0 )
          {
            v14 = v13->Children[1];
            if ( !v14 )
              goto LABEL_11;
          }
          else
          {
            v14 = v13->Children[0];
            if ( !v13->Children[0] )
              goto LABEL_16;
          }
          v13 = v14;
        }
      }
    }
  }
  else
  {
    v12 = a1 + 6;
    LOBYTE(v9) = 0;
    v13 = (struct _RTL_BALANCED_NODE *)a1[6];
    if ( v13 )
    {
      while ( 1 )
      {
        while ( (int)VidMmCompareForInsertAlignedRange(v18, v13) >= 0 )
        {
          if ( !v13->Children[1] )
          {
LABEL_11:
            LOBYTE(v9) = 1;
            goto LABEL_12;
          }
          v13 = v13->Children[1];
        }
        if ( !v13->Children[0] )
          break;
        v13 = v13->Children[0];
      }
LABEL_16:
      LOBYTE(v9) = 0;
    }
  }
LABEL_12:
  result = RtlAvlInsertNodeEx(v12, v13, v9, a3);
LABEL_13:
  *(_DWORD *)(a3 + 88) = v5;
  return result;
}
