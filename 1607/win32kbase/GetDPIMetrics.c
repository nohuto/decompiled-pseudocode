/*
 * XREFs of GetDPIMetrics @ 0x1C007A6D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

HFONT *GetDPIMetrics()
{
  bool v0; // zf
  HFONT *result; // rax

  v0 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0;
  result = &gdpiSystem;
  if ( v0 )
    return &gdpi96;
  return result;
}
