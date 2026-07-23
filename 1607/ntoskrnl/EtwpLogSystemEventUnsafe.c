/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x1400734CC
 * Callers:
 *     EtwpTraceThreadRundown @ 0x1400732C4 (EtwpTraceThreadRundown.c)
 *     NtTraceEvent @ 0x1400D3400 (NtTraceEvent.c)
 *     EtwpLogRegistryEvent @ 0x1406A25E8 (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x1406A2A5C (EtwpSetMark.c)
 * Callees:
 *     EtwpCloseLogger @ 0x1400737B0 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x1400737E8 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x140074B60 (EtwpReleaseTraceBuffer.c)
 *     EtwpCopyEventData @ 0x140074BA0 (EtwpCopyEventData.c)
 *     EtwpUpdateEventsLostCount @ 0x1400A86DC (EtwpUpdateEventsLostCount.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpSendTraceEvent @ 0x140227C60 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x140229210 (EtwpStackTraceDispatcher.c)
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
  __int64 v15; // rax
  __int64 v16; // r8
  void *v17; // r14
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v22[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-74h]
  _QWORD v25[3]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v26[80]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v27; // [rsp+C0h] [rbp+18h]

  v27 = a3;
  v7 = a3;
  LOBYTE(a3) = 1;
  result = EtwpOpenLogger(v7, EtwpHostSiloState, a3, v22);
  v11 = result;
  v25[1] = result;
  if ( result )
  {
    v12 = 0;
    v23 = 0;
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
      v23 = v12;
    }
    v15 = EtwpReserveTraceBuffer(v11, v12 + 32, (unsigned int)v26, (unsigned int)v25, a6);
    if ( v15 )
    {
      *(_DWORD *)v15 = (a6 & 0xC0000000) == 0x80000000
                     ? (unsigned __int8)a6 | 0xC0010000
                     : (unsigned __int8)a6 | 0xC0020000;
      *(_QWORD *)(v15 + 16) = v25[0];
      *(_WORD *)(v15 + 4) = v12 + 32;
      *(_WORD *)(v15 + 6) = a5;
      *(_DWORD *)(v15 + 8) = a2[398];
      *(_DWORD *)(v15 + 12) = a2[396];
      *(_DWORD *)(v15 + 24) = a2[163];
      *(_DWORD *)(v15 + 28) = a2[183];
      v17 = (void *)(v15 + 32);
      v25[2] = v15 + 32;
      if ( v15 != -32 )
      {
        if ( (unsigned int)EtwpCopyEventData(v17) )
        {
          memset(v17, 0, v12);
          EtwpUpdateEventsLostCount(v11, v19, v20, v21);
        }
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
          && (*(_DWORD *)(v11 + 12) & 0x80000) != 0 )
        {
          EtwpSendTraceEvent(v11, v26);
        }
        EtwpReleaseTraceBuffer(v26);
        v18 = *(_DWORD *)(v11 + 816);
        if ( (v18 & 0x80u) != 0 )
        {
          if ( _bittest(*(const signed __int32 **)(v11 + 832), a5 & 0x1FFF) )
            EtwpStackTraceDispatcher(*(_DWORD *)v11 | v18 & 0xFFFF0000, v25, a2, a6);
        }
      }
    }
    LOBYTE(v16) = v22[0];
    return EtwpCloseLogger(v27, EtwpHostSiloState, v16);
  }
  return result;
}
