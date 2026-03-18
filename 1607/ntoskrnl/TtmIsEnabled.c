/*
 * XREFs of TtmIsEnabled @ 0x1403F3924
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140008CFC (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
