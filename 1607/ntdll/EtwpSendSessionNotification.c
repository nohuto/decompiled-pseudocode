/*
 * XREFs of EtwpSendSessionNotification @ 0x180053C98
 * Callers:
 *     EtwpStopLoggerInstance @ 0x180051DA0 (EtwpStopLoggerInstance.c)
 *     EtwpLogger @ 0x180052AF0 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x180052C70 (EtwpFlushActiveBuffers.c)
 *     EtwpStartUmLogger @ 0x18005396C (EtwpStartUmLogger.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x180054010 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int128 v6; // xmm1
  __int64 v8; // [rsp+20h] [rbp-39h]
  _QWORD v9[12]; // [rsp+30h] [rbp-29h] BYREF

  *(_DWORD *)((char *)&v8 + 2) = 256;
  HIWORD(v8) = 0;
  LOWORD(v8) = *(_WORD *)(a1 + 20);
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[3]) = -1;
  v6 = *(_OWORD *)(a1 + 56);
  *(_OWORD *)&v9[5] = SessionNotificationGuid;
  v9[0] = 0x6000000007LL;
  *(_OWORD *)&v9[7] = v6;
  v9[10] = v8;
  v9[9] = __PAIR64__(a3, a2);
  HIDWORD(v9[4]) = NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock(v9);
}
