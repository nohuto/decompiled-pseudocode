/*
 * XREFs of _EnablePerMonitorMenuScaling @ 0x1C0135100
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall EnablePerMonitorMenuScaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF) != 2 )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL) |= 0x80000u;
  return 1LL;
}
