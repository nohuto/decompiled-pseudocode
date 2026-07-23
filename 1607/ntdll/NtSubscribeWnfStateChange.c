/*
 * XREFs of NtSubscribeWnfStateChange @ 0x1800A98F0
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x180029554 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x180065AD0 (RtlpRemoveUserSubFromNameSub.c)
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

  result = 423;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
