/*
 * XREFs of KdpReadControlSpace @ 0x1406F33A8
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysReadControlSpace @ 0x1406F343C (KdpSysReadControlSpace.c)
 */

__int64 __fastcall KdpReadControlSpace(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r8
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // eax
  __int16 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v3 = *(unsigned int *)(a1 + 24);
  v11 = a1;
  v10 = 56;
  if ( v3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v3) = KdTransportMaxPacketSize - 56;
  v6 = *(unsigned __int16 *)(a1 + 6);
  v7 = *(_QWORD *)(a1 + 16);
  LODWORD(v12) = v3;
  *(_DWORD *)(a1 + 8) = KdpSysReadControlSpace(v6, v7, *(_QWORD *)(a2 + 8), v3, (__int64)&v12);
  v8 = v12;
  *(_WORD *)a2 = v12;
  *(_DWORD *)(a1 + 28) = v8;
  return KdSendPacket(2LL, &v10, a2, &KdpContext);
}
