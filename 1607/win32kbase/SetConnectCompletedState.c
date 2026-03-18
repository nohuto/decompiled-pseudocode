/*
 * XREFs of SetConnectCompletedState @ 0x1C0070A30
 * Callers:
 *     xxxRemoteConnect @ 0x1C00B1960 (xxxRemoteConnect.c)
 * Callees:
 *     IsDwmAsyncNotifySessionConnectedSupported_0 @ 0x1C0001B00 (IsDwmAsyncNotifySessionConnectedSupported_0.c)
 *     DwmAsyncNotifySessionConnected_0 @ 0x1C0001B08 (DwmAsyncNotifySessionConnected_0.c)
 *     ReferenceDwmApiPort @ 0x1C001D7D0 (ReferenceDwmApiPort.c)
 *     PowerConnectionEvent @ 0x1C0070A64 (PowerConnectionEvent.c)
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
