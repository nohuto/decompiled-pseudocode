/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C007EC58
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C000CEC8 (UserPowerInfoCallout.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C000BF30 (QueuePowerRequest.c)
 */

void __fastcall PowerDisplayBurst(enum POWER_MONITOR_REQUEST_REASON a1)
{
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  switch ( a1 )
  {
    case MonitorRequestReasonUserDisplayBurst:
      LODWORD(qword_1C0104720) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      break;
    case MonitorRequestReasonAcDcDisplayBurst:
    case MonitorRequestReasonBatteryCountChange:
      HIDWORD(qword_1C0104720) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      break;
    case MonitorRequestReasonResumeS4:
      dword_1C0104728 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      break;
  }
  if ( !dword_1C010475C )
  {
    LODWORD(v1) = 4;
    *((_QWORD *)&v1 + 1) = a1;
    QueuePowerRequest(&v1, 0);
  }
}
