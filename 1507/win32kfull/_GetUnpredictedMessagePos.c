/*
 * XREFs of _GetUnpredictedMessagePos @ 0x1C015D720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetUnpredictedMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 1132LL) | (*(unsigned __int16 *)(gptiCurrent + 1136LL) << 16);
}
