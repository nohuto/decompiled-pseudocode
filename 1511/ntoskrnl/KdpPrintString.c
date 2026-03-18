/*
 * XREFs of KdpPrintString @ 0x1406ADEAC
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x140142A68 (KdRefreshDebuggerNotPresent.c)
 *     KdpPrint @ 0x1406ACDA4 (KdpPrint.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KdpPollBreakInWithPortLock @ 0x1401C2A30 (KdpPollBreakInWithPortLock.c)
 *     KdpCopyMemoryChunks @ 0x1406AD60C (KdpCopyMemoryChunks.c)
 */

bool __fastcall KdpPrintString(char **a1)
{
  __int64 v2; // [rsp+30h] [rbp-40h] BYREF
  __int16 v3; // [rsp+38h] [rbp-38h] BYREF
  int *v4; // [rsp+40h] [rbp-30h]
  __int16 v5; // [rsp+48h] [rbp-28h] BYREF
  _BYTE *v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+58h] [rbp-18h] BYREF
  __int16 v8; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  int v10; // [rsp+60h] [rbp-10h]

  KdpCopyMemoryChunks(a1[1], KdpMessageBuffer, *(unsigned __int16 *)a1, 0, 4u, &v2);
  if ( (unsigned __int64)(unsigned int)v2 + 16 > (unsigned int)KdTransportMaxPacketSize )
    LODWORD(v2) = KdTransportMaxPacketSize - 16;
  v8 = KeProcessorLevel;
  v7 = 12848;
  Number = KeGetPcr()->Prcb.Number;
  v3 = 16;
  v4 = &v7;
  v10 = v2;
  v5 = v2;
  v6 = KdpMessageBuffer;
  KdSendPacket(3LL, &v3, &v5, &KdpContext);
  return KdpPollBreakInWithPortLock();
}
