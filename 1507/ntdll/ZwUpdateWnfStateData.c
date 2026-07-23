/*
 * XREFs of ZwUpdateWnfStateData @ 0x180095410
 * Callers:
 *     SignalStartWerSvc @ 0x180002130 (SignalStartWerSvc.c)
 *     RtlPublishWnfStateData @ 0x180073290 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180077820 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  NTSTATUS result; // eax

  result = 433;
  __asm { syscall; Low latency system call }
  return result;
}
