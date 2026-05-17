/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x18005BCC4
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800472B8 (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x18005BB24 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwpFreeStreamIndexMap(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 512);
  if ( v1 )
  {
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 512) = 0LL;
  }
  return result;
}
