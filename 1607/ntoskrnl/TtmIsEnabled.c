/*
 * XREFs of TtmIsEnabled @ 0x1403F27E8
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140008870 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
