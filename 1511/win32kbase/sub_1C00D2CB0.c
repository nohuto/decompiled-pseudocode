/*
 * XREFs of sub_1C00D2CB0 @ 0x1C00D2CB0
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0086CD0 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     IsIsProcessForegroundSupported_0 @ 0x1C0002F18 (IsIsProcessForegroundSupported_0.c)
 *     IsProcessForeground_0 @ 0x1C0002F20 (IsProcessForeground_0.c)
 *     RIMIsRunningOnMobile @ 0x1C00D4FBC (RIMIsRunningOnMobile.c)
 *     RIMIsTestSigningOn @ 0x1C00D501C (RIMIsTestSigningOn.c)
 */

__int64 __fastcall sub_1C00D2CB0(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 1;
  if ( !(unsigned int)RIMIsTestSigningOn() )
  {
    if ( (unsigned int)RIMIsRunningOnMobile()
      && (PsGetProcessWin32Process(*(_QWORD *)(a1 + 32)), (int)IsIsProcessForegroundSupported_0() >= 0) )
    {
      return (unsigned int)IsProcessForeground_0();
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
