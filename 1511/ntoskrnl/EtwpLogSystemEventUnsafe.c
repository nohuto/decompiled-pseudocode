/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x14011FCDC
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     EtwpTraceThreadRundown @ 0x14011FAD4 (EtwpTraceThreadRundown.c)
 *     EtwpLogRegistryEvent @ 0x14066170C (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x140661FD0 (EtwpSetMark.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14009FBD4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x14009FE24 (EtwpReleaseTraceBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x1400F4610 (EtwpUpdateEventsLostCount.c)
 *     EtwpCopyEventData @ 0x14011FE9C (EtwpCopyEventData.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpSendTraceEvent @ 0x140210028 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x140210E18 (EtwpStackTraceDispatcher.c)
 */

__int64 __fastcall EtwpLogSystemEventUnsafe(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        __int16 a5,
        unsigned int a6)
{
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned int v12; // edi
  _DWORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  void *v16; // r14
  int v17; // ecx
  char v18[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-74h]
  _QWORD v21[3]; // [rsp+40h] [rbp-68h] BYREF
  signed __int64 v22[10]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v23; // [rsp+C0h] [rbp+18h]

  v23 = a3;
  v7 = a3;
  LOBYTE(a3) = 1;
  result = EtwpOpenLogger(v7, EtwpSiloState, a3, v18);
  v11 = result;
  v21[1] = result;
  if ( result )
  {
    v12 = 0;
    v19 = 0;
    if ( a4 )
    {
      v13 = (_DWORD *)(a1 + 8);
      v14 = a4;
      do
      {
        v12 += *v13;
        v13 += 4;
        --v14;
      }
      while ( v14 );
      v19 = v12;
    }
    v15 = EtwpReserveTraceBuffer(v11, v12 + 32, (__int64)v22, v21, a6);
    if ( v15 )
    {
      *(_DWORD *)v15 = (a6 & 0xC0000000) == 0x80000000
                     ? (unsigned __int8)a6 | 0xC0010000
                     : (unsigned __int8)a6 | 0xC0020000;
      *(_QWORD *)(v15 + 16) = v21[0];
      *(_WORD *)(v15 + 4) = v12 + 32;
      *(_WORD *)(v15 + 6) = a5;
      *(_DWORD *)(v15 + 8) = a2[396];
      *(_DWORD *)(v15 + 12) = a2[394];
      *(_DWORD *)(v15 + 24) = a2[163];
      *(_DWORD *)(v15 + 28) = a2[183];
      v16 = (void *)(v15 + 32);
      v21[2] = v15 + 32;
      if ( v15 != -32LL )
      {
        if ( (unsigned int)EtwpCopyEventData(v16) )
        {
          memset(v16, 0, v12);
          EtwpUpdateEventsLostCount(v11);
        }
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
          && (*(_DWORD *)(v11 + 12) & 0x80000) != 0 )
        {
          EtwpSendTraceEvent(v11, v22);
        }
        EtwpReleaseTraceBuffer(v22);
        v17 = *(_DWORD *)(v11 + 832);
        if ( (v17 & 0x80u) != 0 )
        {
          if ( _bittest(*(const signed __int32 **)(v11 + 848), a5 & 0x1FFF) )
            EtwpStackTraceDispatcher(*(_DWORD *)v11 | v17 & 0xFFFF0000, v21, a2, a6);
        }
      }
    }
    return EtwpCloseLogger(v23, EtwpSiloState, v18[0]);
  }
  return result;
}
