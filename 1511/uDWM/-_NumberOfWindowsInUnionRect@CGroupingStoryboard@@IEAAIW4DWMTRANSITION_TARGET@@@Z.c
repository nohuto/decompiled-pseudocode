/*
 * XREFs of ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x180002190
 * Callers:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000204C (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x180001FAC (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_NumberOfWindowsInUnionRect(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v5 = 0;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, a2, &v5) >= 0 )
    return *(unsigned int *)(56LL * v5 + *(_QWORD *)(a1 + 120) + 48);
  return v2;
}
