/*
 * XREFs of PoFxCompleteIdleCondition @ 0x1400F32D4
 * Callers:
 *     VerifierPoFxCompleteIdleCondition @ 0x1406C0B48 (VerifierPoFxCompleteIdleCondition.c)
 * Callees:
 *     PopFxIdleWorkerTail @ 0x1400DB11C (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
 */

void __fastcall PoFxCompleteIdleCondition(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rsi
  int v4; // ebx

  v3 = (unsigned int)BugCheckParameter3;
  v4 = _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter2[78]
                                                                   + 8LL * (unsigned int)BugCheckParameter3)
                                                       + 136LL));
  if ( !v4 )
    PopFxIdleWorkerTail(BugCheckParameter2, BugCheckParameter3, 0LL);
  if ( v4 < 0 )
    PopFxBugCheck(0x613uLL, (ULONG_PTR)BugCheckParameter2, v3, 2uLL);
}
