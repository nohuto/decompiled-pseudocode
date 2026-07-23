/*
 * XREFs of PoFxCompleteIdleCondition @ 0x1400AB20C
 * Callers:
 *     <none>
 * Callees:
 *     PopFxIdleWorkerTail @ 0x1400BF6F0 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxCompleteIdleCondition(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  int v5; // ebx

  result = *(_QWORD *)(BugCheckParameter2 + 624);
  v4 = (unsigned int)BugCheckParameter3;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(result + 8LL * (unsigned int)BugCheckParameter3)
                                                       + 136LL));
  if ( !v5 )
    result = PopFxIdleWorkerTail(BugCheckParameter2);
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, v4, 2uLL);
  return result;
}
