/*
 * XREFs of RtlpDetachThreadFromUmsCompletionList @ 0x1800DE464
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800DDF20 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 *     RtlDeleteUmsThreadContext @ 0x1800DDE30 (RtlDeleteUmsThreadContext.c)
 */

__int64 RtlpDetachThreadFromUmsCompletionList()
{
  struct _TEB *v0; // rbx
  __int64 result; // rax
  unsigned __int64 v2; // rcx

  v0 = NtCurrentTeb();
  result = NtSetInformationThread();
  if ( (int)result >= 0 )
  {
    v2 = (unsigned __int64)v0->TlsSlots[4];
    v0->TlsSlots[4] = 0LL;
    return RtlDeleteUmsThreadContext(v2);
  }
  return result;
}
