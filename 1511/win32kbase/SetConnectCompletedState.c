/*
 * XREFs of SetConnectCompletedState @ 0x1C0068E20
 * Callers:
 *     RemoteConnect @ 0x1C00628B0 (RemoteConnect.c)
 * Callees:
 *     IsDwmAsyncNotifySessionConnectedSupported_0 @ 0x1C0001B30 (IsDwmAsyncNotifySessionConnectedSupported_0.c)
 *     DwmAsyncNotifySessionConnected_0 @ 0x1C0001B38 (DwmAsyncNotifySessionConnected_0.c)
 *     PowerConnectionEvent @ 0x1C0068D58 (PowerConnectionEvent.c)
 *     ReferenceDwmApiPort @ 0x1C0069FA0 (ReferenceDwmApiPort.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent(a1);
    if ( (int)IsDwmAsyncNotifySessionConnectedSupported_0() >= 0 )
    {
      ReferenceDwmApiPort();
      DwmAsyncNotifySessionConnected_0();
    }
  }
}
