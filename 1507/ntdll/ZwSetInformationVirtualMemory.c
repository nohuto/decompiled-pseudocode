/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x180095120
 * Callers:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800E5758 (RtlpGuardGrantSuppressedCallAccess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 386LL;
  __asm { syscall; Low latency system call }
  return result;
}
