/*
 * XREFs of NtSubscribeWnfStateChange @ 0x1800952E0
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x18000A9E4 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18000B100 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  NTSTATUS result; // eax

  result = 414;
  __asm { syscall; Low latency system call }
  return result;
}
