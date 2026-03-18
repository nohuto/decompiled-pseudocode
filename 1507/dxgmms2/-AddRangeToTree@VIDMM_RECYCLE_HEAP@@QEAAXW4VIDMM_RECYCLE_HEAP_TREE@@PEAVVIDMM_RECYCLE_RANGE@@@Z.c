/*
 * XREFs of ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064DA0
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066F60 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0069480 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069CA0 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C006A234 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C006AF6C (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::AddRangeToTree(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // bl
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 result; // rax
  _QWORD *v13; // r14
  struct _RTL_BALANCED_NODE *v14; // rdi
  struct _RTL_BALANCED_NODE *v15; // rax
  struct _RTL_BALANCED_NODE *v16; // rax
  struct _RTL_BALANCED_NODE *v17; // rax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
  *(_QWORD *)(v6 + 24) = a3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdWarning(v6);
  v9 = 0;
  v10 = *(_QWORD *)(a3 + 56);
  v18[0] = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v18[1] = v10;
  switch ( (_DWORD)v4 )
  {
    case 0:
      v13 = a1 + 5;
      v14 = (struct _RTL_BALANCED_NODE *)a1[5];
      if ( v14 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v18, v14) < 0 )
          {
            v17 = v14->Children[0];
            if ( !v14->Children[0] )
              goto LABEL_9;
          }
          else
          {
            v17 = v14->Children[1];
            if ( !v17 )
            {
LABEL_8:
              v9 = 1;
              goto LABEL_9;
            }
          }
          v14 = v17;
        }
      }
      goto LABEL_9;
    case 1:
      v13 = a1 + 6;
      v14 = (struct _RTL_BALANCED_NODE *)a1[6];
      if ( v14 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v18, v14) < 0 )
          {
            v16 = v14->Children[0];
            if ( !v14->Children[0] )
              goto LABEL_9;
          }
          else
          {
            v16 = v14->Children[1];
            if ( !v16 )
              goto LABEL_8;
          }
          v14 = v16;
        }
      }
      goto LABEL_9;
    case 2:
      v13 = a1 + 7;
      v14 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v14 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v18, v14) < 0 )
          {
            v15 = v14->Children[0];
            if ( !v14->Children[0] )
              break;
          }
          else
          {
            v15 = v14->Children[1];
            if ( !v15 )
              goto LABEL_8;
          }
          v14 = v15;
        }
      }
LABEL_9:
      LOBYTE(v8) = v9;
      result = RtlAvlInsertNodeEx(v13, v14, v8, a3);
      goto LABEL_10;
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v4 - 1), v7);
  v11[3] = 270LL;
  v11[4] = 52LL;
  v11[5] = 13LL;
  v11[6] = v4;
  v11[7] = 0LL;
  result = WdLogEvent5_WdCriticalError(v11);
LABEL_10:
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
