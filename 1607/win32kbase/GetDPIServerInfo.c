/*
 * XREFs of GetDPIServerInfo @ 0x1C007A720
 * Callers:
 *     GetCharDimensions @ 0x1C0057B00 (GetCharDimensions.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

char *GetDPIServerInfo()
{
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    return (char *)gpsi + 5416;
  else
    return (char *)gpsi + 5520;
}
