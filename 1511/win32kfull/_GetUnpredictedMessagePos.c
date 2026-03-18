/*
 * XREFs of _GetUnpredictedMessagePos @ 0x1C0152F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetUnpredictedMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 1124LL) | (*(unsigned __int16 *)(gptiCurrent + 1128LL) << 16);
}
