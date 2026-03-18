/*
 * XREFs of ?EndShutdown@@YAXJ@Z @ 0x1C010F9B0
 * Callers:
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C0065710 (_PostThreadMessage.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C010FA74 (-NotifyLogon@@YAHK@Z.c)
 *     HandlePTPTelemetry @ 0x1C014F8EC (HandlePTPTelemetry.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EndShutdown(int a1)
{
  bool v1; // di

  gpidEndSession = 0LL;
  gdwThreadEndSession = 0;
  *(_DWORD *)(gpsi + 2220LL) &= ~1u;
  *(_DWORD *)(grpwinstaLogoff + 32LL) &= ~8u;
  v1 = (gdwShutdownFlags & 0x1803) != 0;
  if ( a1 < 0 )
  {
    if ( gptiShutdownNotify )
    {
      PostThreadMessage(gptiShutdownNotify, 0x16u, 0LL, 0LL);
      gptiShutdownNotify = 0LL;
    }
    *(_DWORD *)(grpwinstaLogoff + 32LL) = gdwLocks | *(_DWORD *)(grpwinstaLogoff + 32LL) & 0xFFFFFFFD;
    PoUserShutdownCancelled();
    NotifyLogon(gdwShutdownFlags | 0x80);
  }
  else
  {
    gptiShutdownNotify = 0LL;
    NotifyLogon(gdwShutdownFlags);
    if ( (gdwShutdownFlags & 0x40580B) != 0 && !gProtocolType )
    {
      if ( gSqmIsOptedIn )
        SqmPowerState();
      HandlePTPTelemetry();
    }
    if ( !v1 )
      PoUserShutdownCancelled();
  }
  UnlockObjectAssignment(grpwinstaLogoff);
}
