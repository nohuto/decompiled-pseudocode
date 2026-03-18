/*
 * XREFs of SetConnectCompletedState @ 0x1C0079180
 * Callers:
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 * Callees:
 *     IsDwmAsyncNotifySessionConnectedSupported_0 @ 0x1C0001B10 (IsDwmAsyncNotifySessionConnectedSupported_0.c)
 *     DwmAsyncNotifySessionConnected_0 @ 0x1C0001B18 (DwmAsyncNotifySessionConnected_0.c)
 *     ReferenceDwmApiPort @ 0x1C000ADB0 (ReferenceDwmApiPort.c)
 *     PowerConnectionEvent @ 0x1C00791B4 (PowerConnectionEvent.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( (int)IsDwmAsyncNotifySessionConnectedSupported_0() >= 0 )
    {
      ReferenceDwmApiPort();
      DwmAsyncNotifySessionConnected_0();
    }
  }
}
