/*
 * XREFs of EtwpSendDbgId @ 0x1406A5588
 * Callers:
 *     EtwpSendTraceEvent @ 0x140227C60 (EtwpSendTraceEvent.c)
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpGetMaxDebugIdBufferSize @ 0x140492FFC (EtwpGetMaxDebugIdBufferSize.c)
 *     EtwpAddDebugInfoEvents @ 0x14049393C (EtwpAddDebugInfoEvents.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140493FEC (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpSendBufferToDebugger @ 0x1406A5478 (EtwpSendBufferToDebugger.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  volatile signed __int64 *v4; // rdi
  _BYTE *v5; // rax
  _BYTE *v6; // rsi
  unsigned int MaxDebugIdBufferSize; // eax
  int v8; // ebp
  __int128 *v9; // rsi
  __int128 *PoolWithTag; // rax

  if ( (*(_DWORD *)(a1 + 820) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 820));
    v2 = *(_DWORD *)(a1 + 820);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 820), v2 & 0xFFFFF7FF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x800) != 0 )
    {
      v4 = (volatile signed __int64 *)(a1 + 688);
      v5 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
      v6 = v5;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v5, a1 + 688);
      if ( v6 )
        v6[26] |= 1u;
      MaxDebugIdBufferSize = EtwpGetMaxDebugIdBufferSize(a1);
      v8 = MaxDebugIdBufferSize;
      if ( MaxDebugIdBufferSize )
      {
        PoolWithTag = (__int128 *)ExAllocatePoolWithTag(NonPagedPoolNx, MaxDebugIdBufferSize, 0x62777445u);
        v9 = PoolWithTag;
        if ( PoolWithTag )
        {
          EtwpInitializeProviderInfoBuffer(a1, (__int64)PoolWithTag, v8);
          EtwpAddDebugInfoEvents(a1, (__int64)v9, v8, 0LL, 0);
        }
      }
      else
      {
        v9 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
      KeAbPostRelease(a1 + 688);
      if ( v9 )
      {
        EtwpSendBufferToDebugger(v9);
        ExFreePoolWithTag(v9, 0);
      }
    }
  }
}
