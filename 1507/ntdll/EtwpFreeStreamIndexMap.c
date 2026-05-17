/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x180009688
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1800094E8 (EtwpFreeLoggerContext.c)
 *     EtwpInitLoggerContext @ 0x1800769B4 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwpFreeStreamIndexMap(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 512);
  if ( v1 )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v1);
    *(_QWORD *)(a1 + 512) = 0LL;
  }
  return result;
}
