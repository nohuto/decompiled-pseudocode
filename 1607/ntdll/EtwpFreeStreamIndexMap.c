/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x180052010
 * Callers:
 *     EtwpFreeLoggerContext @ 0x180051E4C (EtwpFreeLoggerContext.c)
 *     EtwpInitLoggerContext @ 0x1800550D0 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall EtwpFreeStreamIndexMap(__int64 a1)
{
  void *v1; // r8
  LOGICAL result; // eax

  v1 = *(void **)(a1 + 504);
  if ( v1 )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  return result;
}
