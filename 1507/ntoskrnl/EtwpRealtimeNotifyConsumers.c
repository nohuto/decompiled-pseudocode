/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x1404ACABC
 * Callers:
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404A2364 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpAddDebugInfoEvents @ 0x1404ABA60 (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxDebugIdBufferSize @ 0x1404ACC04 (EtwpGetMaxDebugIdBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1404ACC34 (EtwpInitializeProviderInfoBuffer.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned int MaxDebugIdBufferSize; // eax
  unsigned int v10; // ebp
  _DWORD *v11; // rdi
  unsigned int v12; // esi
  _DWORD *PoolWithTag; // rax
  __int64 i; // r14
  __int64 **v16; // rsi
  __int64 *j; // rax

  v4 = (unsigned __int64 *)(a1 + 704);
  v6 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (ULONG_PTR)v4, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  MaxDebugIdBufferSize = EtwpGetMaxDebugIdBufferSize(a1);
  v10 = MaxDebugIdBufferSize;
  if ( MaxDebugIdBufferSize )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, MaxDebugIdBufferSize, 0x62777445u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      EtwpInitializeProviderInfoBuffer(a1, PoolWithTag, v10);
      for ( i = *(_QWORD *)(a1 + 344); i != a1 + 344; i = *(_QWORD *)i )
      {
        EtwpAddDebugInfoEvents(a1, (__int64)v11, v10, 0LL, (*(_BYTE *)(i + 90) & 8) != 0 ? 4 : 1);
        *(_BYTE *)(i + 90) |= 8u;
        if ( v11[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer((_DWORD *)a1, i, (__int64)v11);
          v11[12] = 72;
        }
      }
      v16 = (__int64 **)(a1 + 128);
      for ( j = *v16; j != (__int64 *)v16; j = (__int64 *)*j )
        *((_BYTE *)j + 16) = 1;
      v12 = 0;
    }
    else
    {
      v12 = -1073741801;
    }
  }
  else
  {
    v11 = 0LL;
    v12 = -2147483622;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v12;
}
