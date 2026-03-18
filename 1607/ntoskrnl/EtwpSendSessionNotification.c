/*
 * XREFs of EtwpSendSessionNotification @ 0x1404935F4
 * Callers:
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14049030C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140490628 (EtwpRealtimeCreateLogfile.c)
 *     EtwpFlushBuffer @ 0x14049132C (EtwpFlushBuffer.c)
 *     EtwpStopLoggerInstance @ 0x140493B50 (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x140494518 (EtwpCreateLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     EtwpNotifyGuid @ 0x14048DF38 (EtwpNotifyGuid.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rcx
  __int128 v8; // xmm1
  _QWORD v10[12]; // [rsp+20h] [rbp-88h] BYREF

  v3 = *(_WORD *)a1;
  if ( !*(_WORD *)a1 )
    v3 = -1;
  memset(v10, 0, sizeof(v10));
  v7 = *(_QWORD *)(a1 + 904);
  v8 = *(_OWORD *)(a1 + 276);
  *(_OWORD *)&v10[5] = SessionNotificationGuid;
  *(_OWORD *)&v10[7] = v8;
  v10[0] = 0x6000000007LL;
  v10[10] = v3;
  v10[9] = __PAIR64__(a3, a2);
  return EtwpNotifyGuid(v7, (__int64)v10, 0);
}
