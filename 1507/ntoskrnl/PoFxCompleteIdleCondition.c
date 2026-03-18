/*
 * XREFs of PoFxCompleteIdleCondition @ 0x140130710
 * Callers:
 *     VerifierPoFxCompleteIdleCondition @ 0x140742388 (VerifierPoFxCompleteIdleCondition.c)
 * Callees:
 *     PopFxIdleWorkerTail @ 0x1400279A0 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 */

int __fastcall PoFxCompleteIdleCondition(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rax
  ULONG_PTR v4; // rsi
  int v5; // ebx

  v2 = BugCheckParameter2[78];
  v4 = (unsigned int)BugCheckParameter3;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v2 + 8LL * (unsigned int)BugCheckParameter3) + 136LL));
  if ( !v5 )
    LODWORD(v2) = PopFxIdleWorkerTail(BugCheckParameter2, BugCheckParameter3, 0LL);
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, (ULONG_PTR)BugCheckParameter2, v4, 2uLL);
  return v2;
}
