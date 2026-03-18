/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00B20AC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C0070B38 (UserPowerInfoCallout.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C000A740 (QueuePowerRequest.c)
 */

void __fastcall PowerDisplayBurst(enum POWER_MONITOR_REQUEST_REASON a1)
{
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  switch ( a1 )
  {
    case MonitorRequestReasonUserDisplayBurst:
      qword_1C011BAF0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case MonitorRequestReasonAcDcDisplayBurst:
    case MonitorRequestReasonBatteryCountChange:
      qword_1C011BAF8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case MonitorRequestReasonResumeS4:
      qword_1C011BB00 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
  }
  if ( !dword_1C011BB5C )
  {
    LODWORD(v1) = 4;
    *((_QWORD *)&v1 + 1) = a1;
    QueuePowerRequest(&v1, 0);
  }
}
