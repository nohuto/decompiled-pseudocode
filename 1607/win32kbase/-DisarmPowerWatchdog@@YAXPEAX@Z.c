/*
 * XREFs of ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C007003C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall DisarmPowerWatchdog(void *a1)
{
  _QWORD InputBuffer[10]; // [rsp+30h] [rbp-68h] BYREF

  if ( a1 )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x50u, 0LL, 0);
  }
}
