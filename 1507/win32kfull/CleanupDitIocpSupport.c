/*
 * XREFs of CleanupDitIocpSupport @ 0x1C00F3CBC
 * Callers:
 *     UserDeactivateDwmInputProcessing @ 0x1C00F3B10 (UserDeactivateDwmInputProcessing.c)
 *     InitDitIocpSupport @ 0x1C00F4074 (InitDitIocpSupport.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanupDitIocpSupport(int a1, __int64 a2)
{
  int v2; // edi
  HANDLE v4; // rcx
  int v5; // eax
  int v6; // [rsp+28h] [rbp-30h]
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  if ( gbDITUseIocp )
  {
    gbDITResetEventAlreadySignaled = 0;
    if ( ghDITResetEventWcp )
    {
      ZwClose(ghDITResetEventWcp);
      ghDITResetEventWcp = 0LL;
    }
    gbDITMmcssEventAlreadySignaled = 0;
    if ( ghDITMmcssEventWcp )
    {
      ZwClose(ghDITMmcssEventWcp);
      ghDITMmcssEventWcp = 0LL;
    }
    if ( !a1 )
    {
      if ( ghDITEventWcp )
      {
        ZwClose(ghDITEventWcp);
        ghDITEventWcp = 0LL;
      }
      if ( ghDITRITEventWcp )
      {
        ZwClose(ghDITRITEventWcp);
        ghDITRITEventWcp = 0LL;
      }
      if ( ghDITMouseFlushTimerWcp )
      {
        ZwClose(ghDITMouseFlushTimerWcp);
        ghDITMouseFlushTimerWcp = 0LL;
      }
      v4 = ghDITIocp;
      if ( ghDITIocp )
      {
        if ( v2 )
        {
          UserSessionSwitchLeaveCrit(ghDITIocp, a2);
          do
          {
            LOBYTE(v6) = 0;
            v9 = -200000LL;
            v5 = ZwRemoveIoCompletionEx(ghDITIocp, v7, 1LL, &v8, &v9, v6);
          }
          while ( v5 >= 0 && v5 != 258 );
          EnterCrit(1LL);
          v4 = ghDITIocp;
        }
        ZwClose(v4);
        ghDITIocp = 0LL;
      }
    }
  }
}
