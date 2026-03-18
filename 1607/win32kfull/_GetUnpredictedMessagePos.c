/*
 * XREFs of _GetUnpredictedMessagePos @ 0x1C015A5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetUnpredictedMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 1148LL) | (*(unsigned __int16 *)(gptiCurrent + 1152LL) << 16);
}
