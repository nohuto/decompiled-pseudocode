/*
 * XREFs of KdpReadVirtualMemory @ 0x1406F2AEC
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReadVirtualMemory(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int16 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v3 = *(unsigned int *)(a1 + 24);
  if ( v3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v3) = KdTransportMaxPacketSize - 56;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  if ( (unsigned int)v3 > v6 )
    LODWORD(v3) = v6;
  LODWORD(v13) = v3;
  *(_DWORD *)(a1 + 8) = KdpCopyMemoryChunks(v8, v7, v3, 0, 4, (__int64)&v13);
  v9 = v13;
  *(_WORD *)a2 = v13;
  *(_DWORD *)(a1 + 28) = v9;
  v11 = 56;
  v12 = a1;
  return KdSendPacket(2LL, &v11, a2, &KdpContext);
}
