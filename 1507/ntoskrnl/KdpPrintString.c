/*
 * XREFs of KdpPrintString @ 0x14072DEF8
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1401708E8 (KdRefreshDebuggerNotPresent.c)
 *     KdpPrint @ 0x14072CE60 (KdpPrint.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KdpPollBreakInWithPortLock @ 0x1401FE790 (KdpPollBreakInWithPortLock.c)
 *     KdpCopyMemoryChunks @ 0x14072D658 (KdpCopyMemoryChunks.c)
 */

bool __fastcall KdpPrintString(char **a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+30h] [rbp-40h] BYREF
  __int16 v4; // [rsp+38h] [rbp-38h] BYREF
  int *v5; // [rsp+40h] [rbp-30h]
  __int16 v6; // [rsp+48h] [rbp-28h] BYREF
  _BYTE *v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+58h] [rbp-18h] BYREF
  __int16 v9; // [rsp+5Ch] [rbp-14h]
  __int16 CurrentProcessorNumber; // [rsp+5Eh] [rbp-12h]
  int v11; // [rsp+60h] [rbp-10h]

  KdpCopyMemoryChunks(a1[1], KdpMessageBuffer, *(unsigned __int16 *)a1, 0, 4u, &v3);
  v1 = v3;
  if ( (unsigned __int64)v3 + 16 > (unsigned int)KdTransportMaxPacketSize )
    v1 = KdTransportMaxPacketSize - 16;
  v9 = KeProcessorLevel;
  v8 = 12848;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v11 = v1;
  v5 = &v8;
  v4 = 16;
  v6 = v1;
  v7 = KdpMessageBuffer;
  KdSendPacket(3LL, &v4, &v6, &KdpContext);
  return KdpPollBreakInWithPortLock();
}
