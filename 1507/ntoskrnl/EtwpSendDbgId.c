/*
 * XREFs of EtwpSendDbgId @ 0x1406E7CE8
 * Callers:
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     EtwpSendTraceEvent @ 0x14025F398 (EtwpSendTraceEvent.c)
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpAddDebugInfoEvents @ 0x1404ABA60 (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxDebugIdBufferSize @ 0x1404ACC04 (EtwpGetMaxDebugIdBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1404ACC34 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpSendBufferToDebugger @ 0x1406E7BD8 (EtwpSendBufferToDebugger.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  volatile signed __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned int MaxDebugIdBufferSize; // eax
  int v12; // ebp
  __int128 *v13; // rsi
  __int128 *PoolWithTag; // rax

  if ( (*(_DWORD *)(a1 + 836) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 836));
    v5 = *(_DWORD *)(a1 + 836);
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 836), v5 & 0xFFFFF7FF, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 0x800) != 0 )
    {
      v7 = (volatile signed __int64 *)(a1 + 704);
      v8 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, a4);
      v10 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v8, a1 + 704, v9);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      MaxDebugIdBufferSize = EtwpGetMaxDebugIdBufferSize(a1);
      v12 = MaxDebugIdBufferSize;
      if ( MaxDebugIdBufferSize )
      {
        PoolWithTag = (__int128 *)ExAllocatePoolWithTag(NonPagedPoolNx, MaxDebugIdBufferSize, 0x62777445u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          EtwpInitializeProviderInfoBuffer(a1, (__int64)PoolWithTag, v12);
          EtwpAddDebugInfoEvents(a1, (__int64)v13, v12, 0LL, 0);
        }
      }
      else
      {
        v13 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
      KeAbPostRelease(a1 + 704);
      if ( v13 )
      {
        EtwpSendBufferToDebugger(v13);
        ExFreePoolWithTag(v13, 0);
      }
    }
  }
}
