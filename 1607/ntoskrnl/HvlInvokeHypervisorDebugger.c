/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x1401BAACC
 * Callers:
 *     KeAccumulateTicks @ 0x1400DC3C0 (KeAccumulateTicks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlInvokeHypervisorDebugger(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 2) == 0 || (result = (unsigned int)HvlpRootFlags, (HvlpRootFlags & 1) != 0) )
  {
    if ( HvlHypervisorConnected )
      return HvcallCodeVa(65546LL, a1, a2);
  }
  return result;
}
