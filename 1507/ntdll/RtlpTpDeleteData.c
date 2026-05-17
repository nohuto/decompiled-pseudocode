/*
 * XREFs of RtlpTpDeleteData @ 0x18007CC80
 * Callers:
 *     RtlpTpWaitRundown @ 0x18007B920 (RtlpTpWaitRundown.c)
 *     RtlRegisterWait @ 0x18007BDC0 (RtlRegisterWait.c)
 *     RtlpTpWorkUnposted @ 0x18007C2C0 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 *     RtlCreateTimer @ 0x18007C830 (RtlCreateTimer.c)
 *     RtlpTpTimerRundown @ 0x18007CC1C (RtlpTpTimerRundown.c)
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
