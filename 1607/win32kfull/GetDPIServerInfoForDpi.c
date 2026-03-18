/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C00B76E8
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C00B6970 (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDPIServerInfoForDpiUnsafe @ 0x1C00B7700 (GetDPIServerInfoForDpiUnsafe.c)
 */

__int64 GetDPIServerInfoForDpi()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  result = GetDPIServerInfoForDpiUnsafe();
  if ( !result )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v2, v1, v3, v4) & 0xF) != 0 )
      return gpsi + 5416LL;
    else
      return gpsi + 5520LL;
  }
  return result;
}
