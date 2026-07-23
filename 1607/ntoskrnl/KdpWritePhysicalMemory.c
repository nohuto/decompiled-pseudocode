/*
 * XREFs of KdpWritePhysicalMemory @ 0x1406F5D74
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpWritePhysicalMemory(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rcx
  int v4; // r9d
  __int16 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h]

  v7 = a1;
  v6 = 56;
  v3 = (_DWORD *)(a1 + 28);
  v4 = 7;
  switch ( *v3 )
  {
    case 1:
      v4 = 15;
      break;
    case 2:
      v4 = 23;
      break;
    case 3:
      v4 = 39;
      break;
  }
  *(_DWORD *)(a1 + 8) = KdpCopyMemoryChunks(*(char **)(a1 + 16), *(_QWORD *)(a2 + 8), *(_DWORD *)(a1 + 24), 0, v4, v3);
  return KdSendPacket(2LL, &v6, 0LL, &KdpContext);
}
