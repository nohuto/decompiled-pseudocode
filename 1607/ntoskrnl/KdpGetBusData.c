/*
 * XREFs of KdpGetBusData @ 0x1406F5434
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysReadBusData @ 0x1406F5B20 (KdpSysReadBusData.c)
 */

__int64 __fastcall KdpGetBusData(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int16 v10; // ax
  __int16 v12; // [rsp+40h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+48h] [rbp-10h]
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v3 = (unsigned int)a1[8];
  v13 = a1;
  v12 = 56;
  if ( v3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v3) = KdTransportMaxPacketSize - 56;
  v6 = (unsigned int)a1[7];
  v7 = (unsigned int)a1[5];
  v8 = (unsigned int)a1[4];
  v9 = *(_QWORD *)(a2 + 8);
  LODWORD(v14) = v3;
  a1[2] = KdpSysReadBusData(v8, v7, (unsigned int)a1[6], v6, v9, v3, &v14);
  v10 = v14;
  a1[8] = v14;
  *(_WORD *)a2 = v10;
  return KdSendPacket(2LL, &v12, a2, &KdpContext);
}
