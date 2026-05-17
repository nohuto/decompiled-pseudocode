/*
 * XREFs of NtAlpcSetInformation @ 0x1800A7530
 * Callers:
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800653F0 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x180065614 (TppAllocAlpcCompletion.c)
 *     AlpcRegisterCompletionList @ 0x180088FE0 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x18008A2C0 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x18008A2E0 (AlpcUnregisterCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcSetInformation()
{
  __int64 result; // rax

  result = 137LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
