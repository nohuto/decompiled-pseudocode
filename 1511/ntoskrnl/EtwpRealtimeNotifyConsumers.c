/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x1404C9F88
 * Callers:
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
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
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404CAF98 (EtwpRealtimeInjectEtwBuffer.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int MaxDebugIdBufferSize; // eax
  unsigned int v6; // ebp
  _DWORD *v7; // rdi
  unsigned int v8; // esi
  _DWORD *PoolWithTag; // rax
  __int64 *i; // r14
  __int64 **v12; // rsi
  __int64 *j; // rax

  v1 = (unsigned __int64 *)(a1 + 704);
  v3 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  MaxDebugIdBufferSize = EtwpGetMaxDebugIdBufferSize(a1);
  v6 = MaxDebugIdBufferSize;
  if ( MaxDebugIdBufferSize )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, MaxDebugIdBufferSize, 0x62777445u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      EtwpInitializeProviderInfoBuffer(a1, PoolWithTag, v6);
      for ( i = *(__int64 **)(a1 + 344); i != (__int64 *)(a1 + 344); i = (__int64 *)*i )
      {
        EtwpAddDebugInfoEvents(a1, (__int64)v7, v6, 0LL, (*((_BYTE *)i + 90) & 8) != 0 ? 4 : 1);
        *((_BYTE *)i + 90) |= 8u;
        if ( v7[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer(a1, i, v7);
          v7[12] = 72;
        }
      }
      v12 = (__int64 **)(a1 + 128);
      for ( j = *v12; j != (__int64 *)v12; j = (__int64 *)*j )
        *((_BYTE *)j + 16) = 1;
      v8 = 0;
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v7 = 0LL;
    v8 = -2147483622;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v8;
}
