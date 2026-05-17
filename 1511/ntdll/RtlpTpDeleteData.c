/*
 * XREFs of RtlpTpDeleteData @ 0x1800089F8
 * Callers:
 *     RtlpTpWaitRundown @ 0x180006DA0 (RtlpTpWaitRundown.c)
 *     RtlRegisterWait @ 0x180007100 (RtlRegisterWait.c)
 *     RtlpTpTimerRundown @ 0x180008088 (RtlpTpTimerRundown.c)
 *     RtlCreateTimer @ 0x1800081A0 (RtlCreateTimer.c)
 *     RtlpTpWorkUnposted @ 0x180008900 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x18000BBE0 (RtlQueueWorkItem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlpTpDeleteData(void **a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return NtClose(v1);
  return result;
}
