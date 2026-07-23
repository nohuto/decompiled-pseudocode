/*
 * XREFs of KdpPrintString @ 0x1406F2F8C
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x14014C9B4 (KdRefreshDebuggerNotPresent.c)
 *     KdpPrint @ 0x1406F2E34 (KdpPrint.c)
 * Callees:
 *     KdpPollBreakInWithPortLock @ 0x140084C18 (KdpPollBreakInWithPortLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 */

bool __fastcall KdpPrintString(char **a1)
{
  unsigned int v2; // [rsp+30h] [rbp-40h] BYREF
  __int16 v3; // [rsp+38h] [rbp-38h] BYREF
  void *v4; // [rsp+40h] [rbp-30h]
  __int16 v5; // [rsp+48h] [rbp-28h] BYREF
  int *v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+58h] [rbp-18h] BYREF
  __int16 v8; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  unsigned int v10; // [rsp+60h] [rbp-10h]

  KdpCopyMemoryChunks(a1[1], (__int64)&KdpMessageBuffer, *(unsigned __int16 *)a1, 0, 4, &v2);
  if ( (unsigned __int64)v2 + 16 > (unsigned int)KdTransportMaxPacketSize )
    v2 = KdTransportMaxPacketSize - 16;
  v8 = KeProcessorLevel;
  v7 = 12848;
  Number = KeGetPcr()->Prcb.Number;
  v5 = 16;
  v6 = &v7;
  v10 = v2;
  v3 = v2;
  v4 = &KdpMessageBuffer;
  KdSendPacket(3LL, &v5, &v3, &KdpContext);
  return KdpPollBreakInWithPortLock();
}
