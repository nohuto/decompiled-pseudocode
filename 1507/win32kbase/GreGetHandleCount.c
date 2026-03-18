/*
 * XREFs of GreGetHandleCount @ 0x1C00B32A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetHandleCount()
{
  return (unsigned int)gcCurHmgr;
}
