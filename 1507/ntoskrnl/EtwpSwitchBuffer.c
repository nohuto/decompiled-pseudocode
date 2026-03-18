/*
 * XREFs of EtwpSwitchBuffer @ 0x140063148
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140017190 (EtwpReserveTraceBuffer.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     EtwpDequeueFreeBuffer @ 0x140063388 (EtwpDequeueFreeBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14006364C (EtwpPrepareDirtyBuffer.c)
 *     EtwpEnqueueFreeBuffer @ 0x14006367C (EtwpEnqueueFreeBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1400637C4 (EtwpRequestFlushTimer.c)
 *     EtwpAllocateFreeBuffers @ 0x140075268 (EtwpAllocateFreeBuffers.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14012DD94 (EtwpEnqueueOverflowBuffer.c)
 */

__int64 __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  signed __int64 *v6; // r14
  __int64 v9; // rdx
  int v10; // r12d
  bool v11; // r15
  signed __int64 i; // rbx
  signed __int64 v14; // rax
  unsigned __int64 v15; // r14

  v6 = a3;
  v9 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  v10 = 1;
  if ( v9 )
  {
LABEL_8:
    v11 = (*(_DWORD *)(a1 + 12) & 0x400) != 0;
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      *(_WORD *)(v9 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFu);
    while ( 1 )
    {
      if ( !v11 )
        *(_QWORD *)(v9 + 32) = a2;
      _m_prefetchw(v6);
      for ( i = *v6; (a2 ^ (unsigned __int64)i) <= 0xF; i = v14 )
      {
        v14 = _InterlockedCompareExchange64(v6, v9 | 0xF, i);
        if ( i == v14 )
          break;
      }
      v15 = i & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
        break;
      if ( v15 )
      {
        if ( a2 )
          _InterlockedAdd((volatile signed __int32 *)(a2 + 12), 0xFFFFFFFF);
        _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFF1);
        if ( v11 )
          EtwpEnqueueOverflowBuffer(a1);
        else
          EtwpEnqueueFreeBuffer(a1);
        return 0LL;
      }
      if ( a2 )
        _InterlockedAdd((volatile signed __int32 *)(a2 + 12), 0xFFFFFFFF);
      v6 = a3;
      a2 = 0LL;
    }
    if ( v15 )
    {
      EtwpPrepareDirtyBuffer(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), -1 - (i & 0xF));
      if ( !v11 )
      {
        if ( !*(_DWORD *)(a1 + 228) )
          goto LABEL_39;
        if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
          v10 = KeNumberProcessors_0;
        if ( *(_DWORD *)(a1 + 248) - v10 - *(_DWORD *)(a1 + 244) >= *(_DWORD *)(a1 + 228) )
        {
LABEL_39:
          if ( (a5 & 0x600) != 0 || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() > 2u )
          {
            if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
              KiInsertQueueDpc(a1 + 584, 0, 0, 0, 0);
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
      LOBYTE(v9) = (a5 & 0x600) != 0;
      EtwpRequestFlushTimer(a1, v9);
    }
    return 0LL;
  }
  else
  {
    while ( (a5 & 0x200) == 0
         && (unsigned __int8)KeAreInterruptsEnabled()
         && KeGetCurrentIrql() <= 2u
         && (*(_DWORD *)(a1 + 12) & 0x40000) == 0
         && (unsigned int)EtwpAllocateFreeBuffers(a1, 1LL) == 1 )
    {
      v9 = EtwpDequeueFreeBuffer(a1);
      if ( v9 )
        goto LABEL_8;
    }
    if ( a2 )
      _InterlockedAdd((volatile signed __int32 *)(a2 + 12), 0xFFFFFFFF);
    return 3221225495LL;
  }
}
