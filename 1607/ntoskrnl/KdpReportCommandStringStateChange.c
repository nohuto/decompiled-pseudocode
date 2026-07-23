/*
 * XREFs of KdpReportCommandStringStateChange @ 0x1406F3CE0
 * Callers:
 *     KdpCommandString @ 0x1406F3C28 (KdpCommandString.c)
 * Callees:
 *     KdpSetCommonState @ 0x1400841C8 (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 *     KdpSetContextState @ 0x1406F2C74 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportCommandStringStateChange(__int16 *a1, char **a2, __int64 a3)
{
  unsigned __int16 v6; // ax
  unsigned int v7; // r8d
  int v8; // r8d
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v13; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v14; // [rsp+40h] [rbp-C0h]
  __int16 v15; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v16; // [rsp+50h] [rbp-B0h]
  _BYTE v17[240]; // [rsp+60h] [rbp-A0h] BYREF

  do
  {
    KdpSetCommonState(12338, a3, (__int64)v17);
    KdpSetContextState((__int64)v17, a3);
    memset(&v17[32], 0, 0x40uLL);
    v6 = *a1;
    v7 = 127;
    v14 = &KdpMessageBuffer;
    if ( v6 <= 0x7Fu )
      v7 = v6;
    KdpCopyMemoryChunks(*((char **)a1 + 1), (__int64)&KdpMessageBuffer, v7, 0, 4, &v12);
    v8 = KdTransportMaxPacketSize;
    v13 = v12 + 1;
    v14[(unsigned __int16)(v12 + 1) - 1] = 0;
    v9 = v8 - v13 - 240;
    if ( *(unsigned __int16 *)a2 < v9 )
      v9 = *(unsigned __int16 *)a2;
    KdpCopyMemoryChunks(a2[1], (__int64)&v14[v13], v9, 0, 4, &v12);
    v13 += v12 + 1;
    v10 = v13 - 1;
    v14[v10] = 0;
    v15 = 240;
    v16 = v17;
    result = KdpSendWaitContinue(v10, (__int64)&v15, (__int64)&v13, a3);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
