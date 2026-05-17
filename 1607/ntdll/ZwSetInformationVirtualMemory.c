/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1800A9570
 * Callers:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800EFA8C (RtlpGuardGrantSuppressedCallAccess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 395LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
