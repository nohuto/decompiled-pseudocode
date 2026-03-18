/*
 * XREFs of ?EndShutdown@@YAXJ@Z @ 0x1C01318E4
 * Callers:
 *     xxxSetInformationThread @ 0x1C007D080 (xxxSetInformationThread.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C0090EB0 (_PostThreadMessage.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C01319A0 (-NotifyLogon@@YAHK@Z.c)
 *     HandlePTPTelemetry @ 0x1C01319BC (HandlePTPTelemetry.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EndShutdown(int a1)
{
  struct tagWINDOWSTATION *v1; // rbx
  bool v2; // di

  v1 = grpwinstaLogoff;
  gpidEndSession = 0LL;
  gdwThreadEndSession = 0;
  *(_DWORD *)(gpsi + 2220LL) &= ~1u;
  *((_DWORD *)v1 + 8) &= ~8u;
  v2 = (gdwShutdownFlags & 0x1803) != 0;
  if ( a1 < 0 )
  {
    if ( gptiShutdownNotify )
    {
      PostThreadMessage(gptiShutdownNotify, 0x16u, 0LL, 0LL);
      gptiShutdownNotify = 0LL;
    }
    *((_DWORD *)v1 + 8) = gdwLocks | *((_DWORD *)v1 + 8) & 0xFFFFFFFD;
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
    if ( !v2 )
      PoUserShutdownCancelled();
  }
  UnlockObjectAssignment(&grpwinstaLogoff);
}
