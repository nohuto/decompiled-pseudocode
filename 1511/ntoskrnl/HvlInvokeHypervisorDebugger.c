/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x1401AE35C
 * Callers:
 *     KeAccumulateTicks @ 0x140048FA0 (KeAccumulateTicks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlInvokeHypervisorDebugger(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)HvlpFlags;
  if ( ((HvlpFlags & 4) == 0 || (HvlpRootFlags & 1) != 0) && (HvlpFlags & 1) != 0 )
    return HvcallCodeVa(65546LL, a1, a2);
  return result;
}
