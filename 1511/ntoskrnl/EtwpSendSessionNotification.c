/*
 * XREFs of EtwpSendSessionNotification @ 0x1404CC658
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14046A7C8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14046ABB8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x1404CA224 (EtwpCreateLogFile.c)
 *     EtwpFlushBuffer @ 0x1404CACEC (EtwpFlushBuffer.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
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
