/*
 * XREFs of _GetMessagePos @ 0x1C015D700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 684LL) | (*(unsigned __int16 *)(gptiCurrent + 688LL) << 16);
}
