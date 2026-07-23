/*
 * XREFs of EtwpSendSessionNotification @ 0x180044FB8
 * Callers:
 *     EtwpStartUmLogger @ 0x180044BE8 (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x18005BCF0 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x18005BE98 (EtwpFlushActiveBuffers.c)
 *     EtwpStopLoggerInstance @ 0x18005C910 (EtwpStopLoggerInstance.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x180052940 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, int a2, int a3)
{
  __int128 v6; // xmm1
  __int64 v8; // [rsp+20h] [rbp-39h]
  _BYTE Notification[96]; // [rsp+30h] [rbp-29h] BYREF

  *(_DWORD *)((char *)&v8 + 2) = 256;
  HIWORD(v8) = 0;
  LOWORD(v8) = *(_WORD *)(a1 + 20);
  memset(Notification, 0, sizeof(Notification));
  *(_DWORD *)&Notification[24] = -1;
  v6 = *(_OWORD *)(a1 + 56);
  *(_DWORD *)&Notification[4] = 96;
  *(GUID *)&Notification[40] = SessionNotificationGuid;
  *(_DWORD *)Notification = 7;
  *(_OWORD *)&Notification[56] = v6;
  *(_QWORD *)&Notification[80] = v8;
  *(_DWORD *)&Notification[72] = a2;
  *(_DWORD *)&Notification[76] = a3;
  *(_DWORD *)&Notification[36] = NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock((PETW_NOTIFICATION_HEADER)Notification);
}
