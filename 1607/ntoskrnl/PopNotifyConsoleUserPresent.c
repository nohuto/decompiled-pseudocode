/*
 * XREFs of PopNotifyConsoleUserPresent @ 0x1404F04D8
 * Callers:
 *     PopReleaseAdaptiveLock @ 0x1404EFF44 (PopReleaseAdaptiveLock.c)
 *     PopUserPresentSetWorker @ 0x1404F0484 (PopUserPresentSetWorker.c)
 *     NtSetThreadExecutionState @ 0x14052CD00 (NtSetThreadExecutionState.c)
 *     PopDispatchFullWake @ 0x140534800 (PopDispatchFullWake.c)
 *     PopSetSystemAwayMode @ 0x14066EAA8 (PopSetSystemAwayMode.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140008ADC (RtlGetActiveConsoleId.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     TtmNotifyConsoleUserPresent @ 0x1406788B4 (TtmNotifyConsoleUserPresent.c)
 */

void __fastcall PopNotifyConsoleUserPresent(char a1, char a2, unsigned int a3)
{
  unsigned int ActiveConsoleId; // eax
  int v6; // [rsp+20h] [rbp-30h] BYREF
  char v7; // [rsp+24h] [rbp-2Ch]
  int v8; // [rsp+28h] [rbp-28h]
  char *v9; // [rsp+30h] [rbp-20h]
  int v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  unsigned int v12; // [rsp+68h] [rbp+18h] BYREF
  char v13; // [rsp+78h] [rbp+28h] BYREF
  char v14; // [rsp+79h] [rbp+29h]
  unsigned int v15; // [rsp+7Ch] [rbp+2Ch]

  LOBYTE(v12) = a2;
  if ( PsWin32CalloutsEstablished )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    v12 = ActiveConsoleId;
    if ( ActiveConsoleId != -1 )
    {
      if ( TtmpEnabled == 1 )
      {
        TtmNotifyConsoleUserPresent(ActiveConsoleId, a3);
      }
      else
      {
        v10 = 0;
        v11 = 0LL;
        v9 = &v13;
        v13 = a1;
        v14 = 0;
        v15 = a3;
        v6 = 1;
        v7 = 0;
        v8 = 8;
        PsInvokeWin32Callout(5, (__int64)&v6, 1, (__int64)&v12);
      }
    }
  }
}
