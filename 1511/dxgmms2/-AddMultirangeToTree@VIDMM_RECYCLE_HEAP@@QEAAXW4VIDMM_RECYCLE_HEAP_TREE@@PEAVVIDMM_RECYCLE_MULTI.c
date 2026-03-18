/*
 * XREFs of ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4A0
 * Callers:
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005B2C0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005B770 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005C7B0 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C9D0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C005CE6C (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C005D108 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081EC4 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008206C (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0082228 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005EF78 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::AddMultirangeToTree(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // r14
  struct _RTL_BALANCED_NODE *v12; // rdi
  struct _RTL_BALANCED_NODE *v13; // rax
  struct _RTL_BALANCED_NODE *v14; // rax
  __int64 result; // rax
  _QWORD *v16; // rax
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v9 = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v10 = *(_QWORD *)(a3 + 56);
  v17[0] = v9;
  v17[1] = v10;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v11 = a1 + 6;
      LOBYTE(v9) = 0;
      v12 = (struct _RTL_BALANCED_NODE *)a1[6];
      if ( v12 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v17, v12) < 0 )
          {
            v14 = v12->Children[0];
            if ( !v12->Children[0] )
              goto LABEL_16;
          }
          else
          {
            v14 = v12->Children[1];
            if ( !v14 )
              goto LABEL_11;
          }
          v12 = v14;
        }
      }
    }
    else
    {
      if ( (_DWORD)v4 != 2 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v4 - 1), v7, v9, v8);
        v16[3] = 270LL;
        v16[4] = 52LL;
        v16[5] = 15LL;
        v16[6] = v4;
        v16[7] = 0LL;
        result = WdLogEvent5_WdCriticalError(v16);
        goto LABEL_13;
      }
      v11 = a1 + 7;
      LOBYTE(v9) = 0;
      v12 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v12 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v17, v12) >= 0 )
          {
            v13 = v12->Children[1];
            if ( !v13 )
              goto LABEL_11;
          }
          else
          {
            v13 = v12->Children[0];
            if ( !v12->Children[0] )
              goto LABEL_16;
          }
          v12 = v13;
        }
      }
    }
  }
  else
  {
    v11 = a1 + 5;
    LOBYTE(v9) = 0;
    v12 = (struct _RTL_BALANCED_NODE *)a1[5];
    if ( v12 )
    {
      while ( 1 )
      {
        while ( (int)VidMmCompareForInsertAlignedRange(v17, v12) >= 0 )
        {
          if ( !v12->Children[1] )
          {
LABEL_11:
            LOBYTE(v9) = 1;
            goto LABEL_12;
          }
          v12 = v12->Children[1];
        }
        if ( !v12->Children[0] )
          break;
        v12 = v12->Children[0];
      }
LABEL_16:
      LOBYTE(v9) = 0;
    }
  }
LABEL_12:
  result = RtlAvlInsertNodeEx(v11, v12, v9, a3);
LABEL_13:
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
