/*
 * XREFs of BgkpReleaseConsole @ 0x1401F13D8
 * Callers:
 *     BgkDisplayCharacter @ 0x14076113C (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1407611E8 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140761220 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140761274 (BgkSetCursor.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 */

void BgkpReleaseConsole()
{
  unsigned __int64 v0; // rtt

  _m_prefetchw(&stru_14031EF18);
  v0 = stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v0 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_14031EF18,
               (stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
               stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&stru_14031EF18);
}
