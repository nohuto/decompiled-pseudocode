/*
 * XREFs of BgkpAcquireConsole @ 0x1401B6428
 * Callers:
 *     BgkDisplayStringEx @ 0x1401B627C (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1401B6380 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1401B63C4 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x1406DE0BC (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1406DE168 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1406DE1A0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1406DE1F4 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection(&stru_1402CFD78) != 0;
}
