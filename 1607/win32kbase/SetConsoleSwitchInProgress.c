/*
 * XREFs of SetConsoleSwitchInProgress @ 0x1C0081640
 * Callers:
 *     xxxRemoteConnect @ 0x1C00B1960 (xxxRemoteConnect.c)
 * Callees:
 *     <none>
 */

int __fastcall SetConsoleSwitchInProgress(int a1)
{
  int result; // eax

  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = a1;
  if ( gptiCurrent )
  {
    result = (*((_DWORD *)gptiCurrent + 274) ^ (2 * (a1 == 1))) & 2;
    *((_DWORD *)gptiCurrent + 274) ^= result;
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
