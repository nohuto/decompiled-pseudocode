/*
 * XREFs of RtlpTpDeleteData @ 0x18003A148
 * Callers:
 *     RtlQueueWorkItem @ 0x180039CF0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18003A050 (RtlpTpWorkUnposted.c)
 *     RtlCreateTimer @ 0x180064830 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x180064AA0 (RtlRegisterWait.c)
 *     RtlpTpTimerRundown @ 0x180064E50 (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x180064EF0 (RtlpTpWaitRundown.c)
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
