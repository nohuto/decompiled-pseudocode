/*
 * XREFs of EtwpReserveTraceBuffer @ 0x14009FC90
 * Callers:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x14009F660 (EtwpTraceMessageVa.c)
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 *     EtwpLogSystemEventUnsafe @ 0x14011FCDC (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x14012EE88 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14020D7A8 (EtwTraceRaw.c)
 *     EtwpReserveWithPebsIndex @ 0x14020EEA8 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14020EF38 (EtwpReserveWithPmcCounters.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x14009D414 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14009D480 (EtwpLockBufferList.c)
 *     EtwpUpdateEventsLostCount @ 0x1400F4610 (EtwpUpdateEventsLostCount.c)
 */

unsigned __int64 __fastcall EtwpReserveTraceBuffer(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int16 a5)
{
  unsigned int v7; // r13d
  int v8; // ecx
  int v9; // ebp
  _DWORD *EtwSupport; // r12
  unsigned __int64 *v11; // r14
  unsigned __int64 v12; // rbx
  signed __int64 v13; // rax
  int v14; // eax
  unsigned __int32 v15; // r15d
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // ecx
  unsigned __int64 result; // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  int i; // [rsp+30h] [rbp-48h]
  unsigned __int8 v22; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v23; // [rsp+98h] [rbp+20h]

  v23 = a4;
  if ( *(int *)(a1 + 16) >= 0 && (unsigned int)a2 <= *(_DWORD *)(a1 + 8) )
  {
    v7 = *(_DWORD *)(a1 + 4);
    v8 = *(_DWORD *)a1;
    v9 = (a2 + 7) & 0xFFFFFFF8;
    for ( i = v8; ; v8 = i )
    {
      EtwSupport = KeGetCurrentPrcb()->EtwSupport;
      if ( (*(_DWORD *)(a1 + 12) & 0x10000000) != 0 )
        v11 = (unsigned __int64 *)(a1 + 144);
      else
        v11 = (unsigned __int64 *)&EtwSupport[2 * v8 + 16];
      v22 = 0;
      _m_prefetchw(v11);
      v12 = *v11;
      if ( (*v11 & 0xF) != 0 )
      {
        do
        {
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v12 - 1, v12);
          if ( v12 == v13 )
            break;
          v12 = v13;
        }
        while ( (v13 & 0xF) != 0 );
      }
      if ( v12 )
      {
        v14 = v12 & 0xF;
        if ( (v12 & 0xF) != 0 )
        {
          v12 &= 0xFFFFFFFFFFFFFFF0uLL;
          if ( v14 == 1 )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFu);
            _m_prefetchw(v11);
            v19 = *v11;
            while ( (v19 & 0xF) == 0 )
            {
              if ( v12 != (v19 & 0xFFFFFFFFFFFFFFF0uLL) )
                break;
              v20 = v19;
              v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v19 + 15, v19);
              if ( v20 == v19 )
                goto LABEL_11;
            }
            _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFF1);
          }
        }
        else
        {
          EtwpLockBufferList(a1, &v22);
          v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v12 )
            _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
          EtwpUnlockBufferList(a1, &v22);
        }
LABEL_11:
        if ( v12 )
        {
          _m_prefetchw((const void *)(v12 + 8));
          v15 = *(_DWORD *)(v12 + 8);
          if ( v15 <= v7 )
          {
            while ( 1 )
            {
              *v23 = (*(__int64 (**)(void))(a1 + 40))();
              v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v15 + v9, v15);
              v17 = v16;
              if ( v15 == v16 )
                break;
              v15 = v16;
              if ( v16 > v7 )
                goto LABEL_17;
            }
            if ( v16 + v9 <= v7 )
            {
              ++*(_QWORD *)&EtwSupport[2 * i + 144];
              result = v12 + v16;
              *(_QWORD *)a3 = v12;
              *(_QWORD *)(a3 + 8) = v11;
              *(_DWORD *)(a3 + 16) = v17;
              return result;
            }
            *(_DWORD *)(v12 + 4) = v16;
          }
        }
      }
LABEL_17:
      if ( (int)EtwpSwitchBuffer(a1, v12, (signed __int64 *)v11, *EtwSupport, a5) < 0 )
        break;
    }
  }
  EtwpUpdateEventsLostCount(a1, a2, a3, a4);
  return 0LL;
}
