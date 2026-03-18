/*
 * XREFs of GreGetPeakHandleCount @ 0x1C00B5D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetPeakHandleCount()
{
  return (unsigned int)gcMaxHmgr;
}
