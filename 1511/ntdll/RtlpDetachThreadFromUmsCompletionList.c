/*
 * XREFs of RtlpDetachThreadFromUmsCompletionList @ 0x1800E3C14
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800E36D0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 *     RtlDeleteUmsThreadContext @ 0x1800E35E0 (RtlDeleteUmsThreadContext.c)
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
