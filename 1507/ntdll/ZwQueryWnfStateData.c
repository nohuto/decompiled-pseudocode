/*
 * XREFs of ZwQueryWnfStateData @ 0x180094D90
 * Callers:
 *     RtlQueryWnfStateData @ 0x18006DC50 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800772B0 (RtlQueryWnfStateDataWithExplicitScope.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 329LL;
  __asm { syscall; Low latency system call }
  return result;
}
