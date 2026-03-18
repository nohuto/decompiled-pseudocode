/*
 * XREFs of ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0095EB0
 * Callers:
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DAD0 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060B38 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C006165C (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C0061940 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 v15; // rcx

  v4 = a2;
  v6 = WdLogNewEntry5_WdWarning(a1);
  v7 = v4;
  *(_QWORD *)(v6 + 24) = a3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdWarning(v6);
  if ( !(_DWORD)v4 )
  {
    v15 = a1 + 48;
    goto LABEL_8;
  }
  v12 = v4 - 1;
  if ( !v12 )
  {
    v15 = a1 + 56;
    goto LABEL_8;
  }
  if ( v12 == 1 )
  {
    v15 = a1 + 64;
LABEL_8:
    result = RtlAvlRemoveNode(v15, a3);
    goto LABEL_9;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10, v11);
  v13[7] = 0LL;
  v13[3] = 270LL;
  v13[4] = 52LL;
  v13[5] = 14LL;
  v13[6] = v7;
  result = WdLogEvent5_WdCriticalError(v13);
LABEL_9:
  *(_DWORD *)(a3 + 88) = 3;
  return result;
}
