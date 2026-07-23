/*
 * XREFs of EtwpReserveTraceBuffer @ 0x1400D4790
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1400734CC (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1400D3C30 (EtwpTraceMessageVa.c)
 *     EtwTraceContextSwap @ 0x1400D4300 (EtwTraceContextSwap.c)
 *     EtwTraceEvent @ 0x1402250B8 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402254F0 (EtwTraceRaw.c)
 *     EtwpReserveWithPebsIndex @ 0x140226BB4 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x140226C44 (EtwpReserveWithPmcCounters.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpUpdateEventsLostCount @ 0x1400A86DC (EtwpUpdateEventsLostCount.c)
 *     EtwpLockBufferList @ 0x1400E9530 (EtwpLockBufferList.c)
 *     EtwpUnlockBufferList @ 0x1400EB1E0 (EtwpUnlockBufferList.c)
 *     EtwpSwitchBuffer @ 0x1400EB250 (EtwpSwitchBuffer.c)
 */

unsigned __int64 __fastcall EtwpReserveTraceBuffer(unsigned int *a1, unsigned int a2, __int64 a3, _QWORD *a4, int a5)
{
  unsigned __int32 v7; // ecx
  __int64 v8; // r13
  unsigned int v9; // ebp
  _DWORD *EtwSupport; // r12
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // rbx
  signed __int64 v13; // rax
  int v14; // eax
  unsigned __int32 v15; // r15d
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // ecx
  unsigned __int64 result; // rax
  int v19; // ebx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v23; // r9
  signed __int64 v24; // r8
  signed __int64 v25; // rcx
  unsigned int i; // [rsp+30h] [rbp-48h]
  char v27; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v28; // [rsp+98h] [rbp+20h]

  v28 = a4;
  if ( (a1[4] & 0x80000000) == 0 && a2 <= a1[2] )
  {
    v7 = a1[1];
    v8 = *a1;
    v9 = (a2 + 7) & 0xFFFFFFF8;
    for ( i = v7; ; v7 = i )
    {
      EtwSupport = KeGetCurrentPrcb()->EtwSupport;
      if ( (a1[3] & 0x10000000) != 0 )
        v11 = (unsigned __int64 *)(a1 + 32);
      else
        v11 = (unsigned __int64 *)&EtwSupport[2 * v8 + 16];
      v27 = 0;
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
        v7 = i;
      }
      if ( !v12 )
        goto LABEL_19;
      v14 = v12 & 0xF;
      if ( (v12 & 0xF) == 0 )
        break;
      v12 &= 0xFFFFFFFFFFFFFFF0uLL;
      if ( v14 == 1 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFu);
        _m_prefetchw(v11);
        v20 = *v11;
        while ( (v20 & 0xF) == 0 )
        {
          if ( v12 != (v20 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v21 = v20;
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v20 + 15, v20);
          if ( v21 == v20 )
            goto LABEL_27;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFF1);
        goto LABEL_27;
      }
LABEL_12:
      if ( v12 )
      {
        _m_prefetchw((const void *)(v12 + 8));
        v15 = *(_DWORD *)(v12 + 8);
        if ( v15 <= v7 )
        {
          while ( 1 )
          {
            *v28 = (*((__int64 (**)(void))a1 + 5))();
            v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v15 + v9, v15);
            v17 = v16;
            if ( v15 == v16 )
              break;
            v15 = v16;
            if ( v16 > i )
              goto LABEL_19;
          }
          if ( v16 + v9 <= i )
          {
            ++*(_QWORD *)&EtwSupport[2 * v8 + 144];
            result = v12 + v16;
            *(_QWORD *)a3 = v12;
            *(_QWORD *)(a3 + 8) = v11;
            *(_DWORD *)(a3 + 16) = v17;
            return result;
          }
          *(_DWORD *)(v12 + 4) = v16;
        }
      }
LABEL_19:
      v19 = EtwpSwitchBuffer((_DWORD)a1, v12, (_DWORD)v11, *EtwSupport, a5);
      if ( (a1[3] & 0x4000000) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v23 = PerformanceCounter.QuadPart
            - _InterlockedExchange64((volatile __int64 *)a1 + 133, PerformanceCounter.QuadPart);
        do
        {
          v24 = *((_QWORD *)a1 + 134);
          if ( v24 )
            v25 = (v24 + v23 + 2 * v24) / 4;
          else
            v25 = v23;
        }
        while ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 134, v25, v24) );
      }
      if ( v19 < 0 )
        goto LABEL_22;
    }
    EtwpLockBufferList(a1, &v27);
    v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
    EtwpUnlockBufferList(a1, &v27);
LABEL_27:
    v7 = i;
    goto LABEL_12;
  }
LABEL_22:
  EtwpUpdateEventsLostCount((__int64)a1);
  return 0LL;
}
