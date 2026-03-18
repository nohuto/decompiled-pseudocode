/*
 * XREFs of SetConsoleSwitchInProgress @ 0x1C0062CD0
 * Callers:
 *     RemoteConnect @ 0x1C00628B0 (RemoteConnect.c)
 * Callees:
 *     <none>
 */

int __fastcall SetConsoleSwitchInProgress(int a1)
{
  int result; // eax

  HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = a1;
  if ( gptiCurrent )
  {
    result = (*((_DWORD *)gptiCurrent + 268) ^ (2 * (a1 == 1))) & 2;
    *((_DWORD *)gptiCurrent + 268) ^= result;
  }
  if ( gpevtVideoportCallout )
  {
    if ( a1 )
      return KeResetEvent(gpevtVideoportCallout);
    else
      return KeSetEvent(gpevtVideoportCallout, 1, 0);
  }
  return result;
}
