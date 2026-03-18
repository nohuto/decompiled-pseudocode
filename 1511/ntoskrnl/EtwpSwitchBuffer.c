/*
 * XREFs of EtwpSwitchBuffer @ 0x14009D01C
 * Callers:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     EtwpRequestFlushTimer @ 0x140090BA4 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14009C2E4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x14009CFC8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueFreeBuffer @ 0x14009D240 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueFreeBuffer @ 0x14009D39C (EtwpEnqueueFreeBuffer.c)
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1400F2E7C (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1400F485C (EtwpAllocateFreeBuffers.c)
 */

__int64 __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // r15
  signed __int64 i; // rbx
  signed __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx

  v9 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( v9 )
  {
LABEL_2:
    v11 = (*(_DWORD *)(a1 + 12) & 0x400) != 0;
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      *(_WORD *)(v9 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFu);
    while ( 1 )
    {
      if ( !v11 )
        *(_QWORD *)(v9 + 32) = a2;
      _m_prefetchw(a3);
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v13 )
      {
        v13 = _InterlockedCompareExchange64(a3, v9 | 0xF, i);
        if ( i == v13 )
          break;
      }
      v14 = i & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
      {
        if ( v14 )
        {
          EtwpPrepareDirtyBuffer(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
          _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), -1 - (i & 0xF));
          if ( !v11 )
          {
            if ( !*(_DWORD *)(a1 + 228)
              || (v16 = *(_DWORD *)(a1 + 248) - (unsigned int)EtwpQueryUsedProcessorCount(a1) - *(_DWORD *)(a1 + 244),
                  (int)v16 >= *(_DWORD *)(a1 + 228)) )
            {
              if ( (a5 & 0x600) != 0 || (unsigned __int8)KeGetEffectiveIrql(v16, v15) > 2u )
              {
                if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
                  KiInsertQueueDpc(a1 + 584, 0LL, 0LL, 0LL, 0);
              }
              else
              {
                KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
              }
            }
          }
        }
        else if ( *(_DWORD *)(a1 + 224) )
        {
          EtwpRequestFlushTimer(a1, (a5 & 0x600) != 0);
        }
        return 0LL;
      }
      if ( v14 )
        break;
      if ( a2 )
        _InterlockedAdd((volatile signed __int32 *)(a2 + 12), 0xFFFFFFFF);
      a2 = 0LL;
    }
    if ( a2 )
      _InterlockedAdd((volatile signed __int32 *)(a2 + 12), 0xFFFFFFFF);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFF1);
    if ( v11 )
      EtwpEnqueueOverflowBuffer(a1);
    else
      EtwpEnqueueFreeBuffer(a1);
    return 0LL;
  }
  else
  {
    while ( (a5 & 0x200) == 0
         && (unsigned __int8)KeGetEffectiveIrql(v10, 0LL) <= 2u
         && (unsigned int)EtwpAllocateFreeBuffers(a1, 1LL) == 1 )
    {
      v9 = EtwpDequeueFreeBuffer(a1);
      if ( v9 )
        goto LABEL_2;
    }
    if ( a2 )
      _InterlockedAdd((volatile signed __int32 *)(a2 + 12), 0xFFFFFFFF);
    return 3221225495LL;
  }
}
