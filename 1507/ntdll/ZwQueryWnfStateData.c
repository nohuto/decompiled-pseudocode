/*
 * XREFs of ZwQueryWnfStateData @ 0x180094D90
 * Callers:
 *     RtlQueryWnfStateData @ 0x18006DC50 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800772B0 (RtlQueryWnfStateDataWithExplicitScope.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  NTSTATUS result; // eax

  result = 329;
  __asm { syscall; Low latency system call }
  return result;
}
