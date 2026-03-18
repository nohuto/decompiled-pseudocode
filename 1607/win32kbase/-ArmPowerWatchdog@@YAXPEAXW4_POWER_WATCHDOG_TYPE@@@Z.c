/*
 * XREFs of ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00704F4
 * Callers:
 *     QueuePowerRequest @ 0x1C000A740 (QueuePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall ArmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v4; // edx
  _DWORD *v5; // rcx
  int v6; // eax
  _QWORD InputBuffer[10]; // [rsp+30h] [rbp-9h] BYREF

  if ( a1 )
  {
    v2 = a2;
    memset(InputBuffer, 0, sizeof(InputBuffer));
    v4 = 0;
    LODWORD(InputBuffer[0]) = 21;
    v5 = &gPowerWatchdogTimeouts;
    InputBuffer[1] = a1;
    while ( *v5 != (_DWORD)v2 )
    {
      ++v4;
      v5 += 6;
      if ( (unsigned __int64)v4 >= 5 )
      {
        v6 = 30000;
        goto LABEL_7;
      }
    }
    v6 = v5[4];
LABEL_7:
    InputBuffer[2] = __PAIR64__(gSessionId, v6);
    LODWORD(InputBuffer[3]) = 412;
    InputBuffer[4] = v2;
    if ( gPowerWatchdogTest )
      InputBuffer[4] = v2 | 0xFFFFFFFF80000000uLL;
    if ( (_DWORD)v2 == 16 )
    {
      BYTE1(InputBuffer[8]) = 1;
      InputBuffer[5] = &gpPowerThread;
      InputBuffer[6] = gpresUser;
      InputBuffer[7] = &gpPowerRequestCurrent;
      BYTE3(InputBuffer[8]) = 1;
    }
    else
    {
      InputBuffer[6] = 0LL;
      InputBuffer[7] = 0LL;
      InputBuffer[5] = KeGetCurrentThread();
    }
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x50u, 0LL, 0);
  }
}
