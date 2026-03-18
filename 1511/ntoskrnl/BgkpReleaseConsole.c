/*
 * XREFs of BgkpReleaseConsole @ 0x1401B6444
 * Callers:
 *     BgkDisplayCharacter @ 0x1406DE0BC (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1406DE168 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1406DE1A0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1406DE1F4 (BgkSetCursor.c)
 * Callees:
 *     <none>
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_1402CFD78);
}
