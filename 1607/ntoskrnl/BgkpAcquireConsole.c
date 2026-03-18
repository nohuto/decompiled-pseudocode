/*
 * XREFs of BgkpAcquireConsole @ 0x1401C3F00
 * Callers:
 *     BgkDisplayStringEx @ 0x1401C3D58 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1401C3E58 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1401C3E9C (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x14072A0A8 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x14072A154 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x14072A18C (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x14072A1E0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection(&stru_1402F6F98) != 0;
}
