/*
 * XREFs of EtwpSendTraceEvent @ 0x140210028
 * Callers:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x14009F660 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x14011FCDC (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x14012EE88 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14020D7A8 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 *     EtwpGetNextEventOffsetType @ 0x14020FF18 (EtwpGetNextEventOffsetType.c)
 *     EtwpSendDbgId @ 0x140664C10 (EtwpSendDbgId.c)
 *     KdSendTraceData @ 0x1406AAE38 (KdSendTraceData.c)
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

  if ( (*(_DWORD *)(a1 + 836) & 0x800) != 0 && KeGetEffectiveIrql() < 2u )
    EtwpSendDbgId(a1);
  result = EtwpGetNextEventOffsetType(*(unsigned int **)a2, *(_DWORD *)(a2 + 16), &v15);
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
