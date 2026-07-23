/*
 * XREFs of EtwpSendTraceEvent @ 0x140227C60
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1400734CC (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1400D3C30 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x1402250B8 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402254F0 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     EtwpGetNextEventOffsetType @ 0x14022A940 (EtwpGetNextEventOffsetType.c)
 *     EtwpSendDbgId @ 0x1406A5588 (EtwpSendDbgId.c)
 *     KdSendTraceData @ 0x1406F51EC (KdSendTraceData.c)
 */

unsigned __int64 __fastcall EtwpSendTraceEvent(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int128 *v5; // r9
  __int64 v6; // r10
  __int128 v7; // xmm0
  _OWORD *v8; // [rsp+20h] [rbp-19h] BYREF
  int v9; // [rsp+28h] [rbp-11h]
  __int64 v10; // [rsp+30h] [rbp-9h]
  unsigned int v11; // [rsp+38h] [rbp-1h]
  _OWORD v12[3]; // [rsp+40h] [rbp+7h] BYREF
  __int128 v13; // [rsp+70h] [rbp+37h]
  __int64 v14; // [rsp+80h] [rbp+47h]
  unsigned int v15; // [rsp+A0h] [rbp+67h] BYREF

  if ( (*(_DWORD *)(a1 + 820) & 0x800) != 0 && KeGetEffectiveIrql() < 2u )
    EtwpSendDbgId(a1);
  result = EtwpGetNextEventOffsetType(*(_QWORD *)a2, *(unsigned int *)(a2 + 16), &v15);
  if ( (_DWORD)result )
  {
    result = v15 + 72LL;
    if ( result <= (unsigned int)(KdTransportMaxPacketSize - 64) )
    {
      v7 = *v5;
      v9 = 72;
      v11 = v15;
      v12[0] = v7;
      v12[1] = v5[1];
      v12[2] = v5[2];
      v13 = v5[3];
      *(_QWORD *)&v7 = *((_QWORD *)v5 + 8);
      LODWORD(v12[0]) = v15 + 72;
      LODWORD(v13) = v15 + 72;
      v8 = v12;
      v10 = (__int64)v5 + v6;
      v14 = v7;
      return KdSendTraceData(&v8, 2LL);
    }
  }
  return result;
}
