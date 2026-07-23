/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x1401BD5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  _enable();
  return result;
}
