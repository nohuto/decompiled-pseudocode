/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C00DFAB0
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C001121C (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     IsIsProcessForegroundSupported_0 @ 0x1C0002EF8 (IsIsProcessForegroundSupported_0.c)
 *     IsProcessForeground_0 @ 0x1C0002F00 (IsProcessForeground_0.c)
 *     RIMIsRunningOnMobile @ 0x1C00E145C (RIMIsRunningOnMobile.c)
 *     RIMIsTestSigningOn @ 0x1C00E1474 (RIMIsTestSigningOn.c)
 */

__int64 __fastcall rimObsIsRegisteredObserverAllowed(__int64 a1)
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
