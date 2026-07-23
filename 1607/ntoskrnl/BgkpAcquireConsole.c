/*
 * XREFs of BgkpAcquireConsole @ 0x1401C3DE4
 * Callers:
 *     BgkDisplayStringEx @ 0x1401C3C3C (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1401C3D3C (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1401C3D80 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x14072A0A8 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x14072A154 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x14072A18C (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x14072A1E0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection(&stru_1402F6F98) != 0;
}
