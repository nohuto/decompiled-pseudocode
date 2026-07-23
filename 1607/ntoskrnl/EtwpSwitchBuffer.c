/*
 * XREFs of EtwpSwitchBuffer @ 0x1400EB250
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     EtwpQueryUsedProcessorCount @ 0x140086EF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpAllocateFreeBuffers @ 0x140086F48 (EtwpAllocateFreeBuffers.c)
 *     EtwpRequestFlushTimer @ 0x1400873CC (EtwpRequestFlushTimer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1400B2424 (EtwpEnqueueOverflowBuffer.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400EB050 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x1400EB470 (EtwpDequeueFreeBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400EB628 (EtwpPrepareDirtyBuffer.c)
 */

__int64 __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  __int64 v9; // rdx
  bool v10; // r15
  signed __int64 i; // rbx
  signed __int64 v13; // rax
  unsigned __int64 v14; // rsi

  v9 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( v9 )
  {
LABEL_7:
    v10 = (*(_DWORD *)(a1 + 12) & 0x400) != 0;
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      *(_WORD *)(v9 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFu);
    while ( 1 )
    {
      if ( !v10 )
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
        break;
      if ( v14 )
      {
        if ( a2 )
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
        _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFF1);
        if ( v10 )
          EtwpEnqueueOverflowBuffer(a1, v9);
        else
          EtwpEnqueueAvailableBuffer(a1, (unsigned int *)v9, 0);
        return 0LL;
      }
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      a2 = 0LL;
    }
    if ( v14 )
    {
      EtwpPrepareDirtyBuffer(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), -1 - (i & 0xF));
      if ( !v10
        && (!*(_DWORD *)(a1 + 212)
         || (signed int)(*(_DWORD *)(a1 + 232) - EtwpQueryUsedProcessorCount(a1) - *(_DWORD *)(a1 + 228)) >= *(_DWORD *)(a1 + 212)) )
      {
        if ( (a5 & 0x600) != 0 || KeGetEffectiveIrql() > 2u )
        {
          if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 820), 8u) )
            KiInsertQueueDpc(a1 + 568, 0LL, 0LL, 0LL, 0);
        }
        else
        {
          KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
        }
      }
    }
    else if ( *(_DWORD *)(a1 + 208) )
    {
      EtwpRequestFlushTimer(a1, (a5 & 0x600) != 0);
    }
    return 0LL;
  }
  else
  {
    while ( (a5 & 0x200) == 0
         && KeGetEffectiveIrql() <= 2u
         && (*(_DWORD *)(a1 + 12) & 0x40000) == 0
         && (unsigned int)EtwpAllocateFreeBuffers(a1, 1u) == 1 )
    {
      v9 = EtwpDequeueFreeBuffer(a1);
      if ( v9 )
        goto LABEL_7;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    return 3221225495LL;
  }
}
