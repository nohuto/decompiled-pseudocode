/*
 * XREFs of SetConsoleSwitchInProgress @ 0x1C0079100
 * Callers:
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 * Callees:
 *     <none>
 */

int __fastcall SetConsoleSwitchInProgress(int a1)
{
  int result; // eax

  LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = a1;
  if ( gptiCurrent )
  {
    result = (*((_DWORD *)gptiCurrent + 270) ^ (2 * (a1 == 1))) & 2;
    *((_DWORD *)gptiCurrent + 270) ^= result;
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
