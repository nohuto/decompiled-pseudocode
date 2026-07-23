/*
 * XREFs of EtwpSendSessionNotification @ 0x14040F37C
 * Callers:
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeCreateLogfile @ 0x1404A13F4 (EtwpRealtimeCreateLogfile.c)
 *     EtwpFlushBuffer @ 0x1404A1FE0 (EtwpFlushBuffer.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1404A264C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpCreateLogFile @ 0x1404AC23C (EtwpCreateLogFile.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v3; // bx
  __int128 v7; // xmm1
  _QWORD Src[12]; // [rsp+20h] [rbp-88h] BYREF

  v3 = *(_WORD *)a1;
  if ( !*(_WORD *)a1 )
    v3 = -1;
  memset(Src, 0, sizeof(Src));
  v7 = *(_OWORD *)(a1 + 292);
  *(GUID *)&Src[5] = SessionNotificationGuid;
  Src[0] = 0x6000000007LL;
  *(_OWORD *)&Src[7] = v7;
  Src[10] = v3;
  Src[9] = __PAIR64__(a3, a2);
  return EtwpNotifyGuid(Src);
}
