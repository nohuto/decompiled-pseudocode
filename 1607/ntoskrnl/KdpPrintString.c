/*
 * XREFs of KdpPrintString @ 0x1406F2000
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x14014C444 (KdRefreshDebuggerNotPresent.c)
 *     KdpPrint @ 0x1406F20D8 (KdpPrint.c)
 * Callees:
 *     KdpPollBreakInWithPortLock @ 0x140081D38 (KdpPollBreakInWithPortLock.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x1406F2F08 (KdpCopyMemoryChunks.c)
 */

bool __fastcall KdpPrintString(unsigned __int16 *a1)
{
  int v2; // [rsp+20h] [rbp-50h]
  __int64 v3; // [rsp+28h] [rbp-48h]
  unsigned int v4; // [rsp+30h] [rbp-40h] BYREF
  __int16 v5; // [rsp+38h] [rbp-38h] BYREF
  void *v6; // [rsp+40h] [rbp-30h]
  __int16 v7; // [rsp+48h] [rbp-28h] BYREF
  int *v8; // [rsp+50h] [rbp-20h]
  int v9; // [rsp+58h] [rbp-18h] BYREF
  __int16 v10; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  unsigned int v12; // [rsp+60h] [rbp-10h]

  KdpCopyMemoryChunks(*((_QWORD *)a1 + 1), (unsigned int)&KdpMessageBuffer, *a1, 0, 4, (__int64)&v4);
  if ( (unsigned __int64)v4 + 16 > (unsigned int)KdTransportMaxPacketSize )
    v4 = KdTransportMaxPacketSize - 16;
  v10 = KeProcessorLevel;
  v9 = 12848;
  Number = KeGetPcr()->Prcb.Number;
  v7 = 16;
  v8 = &v9;
  v12 = v4;
  v5 = v4;
  v6 = &KdpMessageBuffer;
  KdSendPacket(3LL, &v7, &v5, &KdpContext, v2, v3);
  return KdpPollBreakInWithPortLock();
}
