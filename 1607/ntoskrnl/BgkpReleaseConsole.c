/*
 * XREFs of BgkpReleaseConsole @ 0x1401C3E00
 * Callers:
 *     BgkDisplayCharacter @ 0x14072A0A8 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x14072A154 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x14072A18C (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x14072A1E0 (BgkSetCursor.c)
 * Callees:
 *     <none>
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection(&stru_1402F6F98);
}
