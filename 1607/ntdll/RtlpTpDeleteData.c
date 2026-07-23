/*
 * XREFs of RtlpTpDeleteData @ 0x18003A138
 * Callers:
 *     RtlQueueWorkItem @ 0x180039CE0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18003A040 (RtlpTpWorkUnposted.c)
 *     RtlCreateTimer @ 0x180064820 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x180064A90 (RtlRegisterWait.c)
 *     RtlpTpTimerRundown @ 0x180064E40 (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x180064EE0 (RtlpTpWaitRundown.c)
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
