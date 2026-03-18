/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A4AD8
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C0007A70 (QueuePowerRequest.c)
 */

void __fastcall PowerDisplayBurst(enum POWER_MONITOR_REQUEST_REASON a1)
{
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 == MonitorRequestReasonUserDisplayBurst )
  {
    qword_1C00FFF70 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  }
  else if ( a1 == MonitorRequestReasonAcDcDisplayBurst || a1 == MonitorRequestReasonBatteryCountChange )
  {
    qword_1C00FFF78 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  }
  if ( !dword_1C00FFFB4 )
  {
    LODWORD(v1) = 4;
    *((_QWORD *)&v1 + 1) = a1;
    QueuePowerRequest(&v1, 0);
  }
}
