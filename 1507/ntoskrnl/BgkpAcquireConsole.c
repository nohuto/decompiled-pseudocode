/*
 * XREFs of BgkpAcquireConsole @ 0x1401F139C
 * Callers:
 *     BgkDisplayStringEx @ 0x1401F1188 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1401F12B0 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1401F1314 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x14076113C (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1407611E8 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140761220 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140761274 (BgkSetCursor.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 */

BOOLEAN BgkpAcquireConsole()
{
  unsigned __int64 v0; // rtt
  BOOLEAN result; // al

  _m_prefetchw(&stru_14031EF18);
  v0 = stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v0 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_14031EF18,
               (stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    return 1;
  result = ExfAcquireRundownProtection(&stru_14031EF18);
  if ( result )
    return 1;
  return result;
}
