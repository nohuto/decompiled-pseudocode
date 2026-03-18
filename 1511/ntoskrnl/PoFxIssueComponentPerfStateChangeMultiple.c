/*
 * XREFs of PoFxIssueComponentPerfStateChangeMultiple @ 0x1401E95B8
 * Callers:
 *     PoFxIssueComponentPerfStateChange @ 0x1401E9594 (PoFxIssueComponentPerfStateChange.c)
 * Callees:
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxIssueComponentPerfStateChangeMultiple(
        ULONG_PTR BugCheckParameter2,
        char a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        __int64 a6)
{
  if ( (a2 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( (a2 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( a3 >= *(_DWORD *)(BugCheckParameter2 + 620) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 2uLL);
  return PopFxIssueComponentPerfStateChanges(BugCheckParameter2, a5, a6);
}
