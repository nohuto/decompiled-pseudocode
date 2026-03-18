/*
 * XREFs of GreGetHandleCount @ 0x1C00B5D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetHandleCount()
{
  return (unsigned int)gcCurHmgr;
}
