/*
 * XREFs of UpdateWindowSpriteDPI @ 0x1C0058A40
 * Callers:
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     UpdateWindowMonitor @ 0x1C005C120 (UpdateWindowMonitor.c)
 * Callees:
 *     GreDwmNotifySpriteDPIChange @ 0x1C000EE5C (GreDwmNotifySpriteDPIChange.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0057520 (GetMonitorFlagsFromWindow.c)
 */

void __fastcall UpdateWindowSpriteDPI(__int64 a1, __int64 a2)
{
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v5; // rcx

  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 50) & 8) != 0 )
    {
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
      OriginFromMonFlags(MonitorFlagsFromWindow, a2);
      OriginFromMonFlags(32LL, a2);
      GreDwmNotifySpriteDPIChange(v5, *(HWND *)a1, 0LL);
    }
  }
}
