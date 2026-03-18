/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x1401E51D0
 * Callers:
 *     KeAccumulateTicks @ 0x1400A9AB0 (KeAccumulateTicks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlInvokeHypervisorDebugger(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)HvlpFlags;
  if ( ((HvlpFlags & 4) == 0 || (HvlpRootFlags & 1) != 0) && (HvlpFlags & 1) != 0 )
    return HvlpHypercallCodeVa(65546LL, a1, a2);
  return result;
}
