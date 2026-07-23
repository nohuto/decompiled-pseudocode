/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x1800A80B0
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180065C20 (RtlpWnfNotificationThread.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D38 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9E20 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtGetCompleteWnfStateSubscription(
        PWNF_STATE_NAME OldDescriptorStateName,
        ULONG64 *OldSubscriptionId,
        ULONG OldDescriptorEventMask,
        ULONG OldDescriptorStatus,
        PWNF_DELIVERY_DESCRIPTOR NewDeliveryDescriptor,
        ULONG DescriptorSize)
{
  NTSTATUS result; // eax

  result = 229;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
