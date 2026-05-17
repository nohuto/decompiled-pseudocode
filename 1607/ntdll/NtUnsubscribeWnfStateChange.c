/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x1800A9B30
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x1800663C8 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     <none>
 */

__int64 NtUnsubscribeWnfStateChange()
{
  __int64 result; // rax

  result = 441LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
