/*
 * XREFs of ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0095318
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060B38 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0060D60 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0061200 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C0061940 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00617A8 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::AddRangeToTree(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // bl
  ULONG_PTR v10; // r9
  ULONG_PTR v11; // rax
  _QWORD *v12; // rax
  __int64 result; // rax
  _QWORD *v14; // r14
  struct _RTL_BALANCED_NODE *v15; // rdi
  struct _RTL_BALANCED_NODE *v16; // rax
  struct _RTL_BALANCED_NODE *v17; // rax
  struct _RTL_BALANCED_NODE *v18; // rax
  ULONG_PTR v19[2]; // [rsp+20h] [rbp-38h] BYREF
  char v20; // [rsp+30h] [rbp-28h]

  v4 = a2;
  v6 = WdLogNewEntry5_WdWarning(a1);
  *(_QWORD *)(v6 + 24) = a3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdWarning(v6);
  v9 = 0;
  v10 = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v11 = *(_QWORD *)(a3 + 56);
  v19[0] = v10;
  v19[1] = v11;
  v20 = 0;
  switch ( (_DWORD)v4 )
  {
    case 0:
      v14 = a1 + 6;
      v15 = (struct _RTL_BALANCED_NODE *)a1[6];
      if ( v15 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v19, v15) < 0 )
          {
            v18 = v15->Children[0];
            if ( !v15->Children[0] )
              goto LABEL_9;
          }
          else
          {
            v18 = v15->Children[1];
            if ( !v18 )
            {
LABEL_8:
              v9 = 1;
              goto LABEL_9;
            }
          }
          v15 = v18;
        }
      }
      goto LABEL_9;
    case 1:
      v14 = a1 + 7;
      v15 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v15 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v19, v15) < 0 )
          {
            v17 = v15->Children[0];
            if ( !v15->Children[0] )
              goto LABEL_9;
          }
          else
          {
            v17 = v15->Children[1];
            if ( !v17 )
              goto LABEL_8;
          }
          v15 = v17;
        }
      }
      goto LABEL_9;
    case 2:
      v14 = a1 + 8;
      v15 = (struct _RTL_BALANCED_NODE *)a1[8];
      if ( v15 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v19, v15) < 0 )
          {
            v16 = v15->Children[0];
            if ( !v15->Children[0] )
              break;
          }
          else
          {
            v16 = v15->Children[1];
            if ( !v16 )
              goto LABEL_8;
          }
          v15 = v16;
        }
      }
LABEL_9:
      LOBYTE(v8) = v9;
      result = RtlAvlInsertNodeEx(v14, v15, v8, a3);
      goto LABEL_10;
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v4 - 1), v7, v8, v10);
  v12[3] = 270LL;
  v12[4] = 52LL;
  v12[5] = 13LL;
  v12[6] = v4;
  v12[7] = 0LL;
  result = WdLogEvent5_WdCriticalError(v12);
LABEL_10:
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
