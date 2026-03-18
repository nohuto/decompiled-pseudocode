/*
 * XREFs of EtwpSendDbgId @ 0x140664C10
 * Callers:
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     EtwpSendTraceEvent @ 0x140210028 (EtwpSendTraceEvent.c)
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpAddDebugInfoEvents @ 0x1404C77EC (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxDebugIdBufferSize @ 0x1404CA0D0 (EtwpGetMaxDebugIdBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1404CA100 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpSendBufferToDebugger @ 0x140664B00 (EtwpSendBufferToDebugger.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int MaxDebugIdBufferSize; // eax
  int v8; // ebp
  __int128 *v9; // rsi
  __int128 *PoolWithTag; // rax

  if ( (*(_DWORD *)(a1 + 836) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 836));
    v2 = *(_DWORD *)(a1 + 836);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 836), v2 & 0xFFFFF7FF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x800) != 0 )
    {
      v4 = (volatile signed __int64 *)(a1 + 704);
      v5 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
      v6 = v5;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v5, a1 + 704);
      if ( v6 )
        *(_BYTE *)(v6 + 26) |= 1u;
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
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
      KeAbPostRelease(a1 + 704);
      if ( v9 )
      {
        EtwpSendBufferToDebugger(v9);
        ExFreePoolWithTag(v9, 0);
      }
    }
  }
}
