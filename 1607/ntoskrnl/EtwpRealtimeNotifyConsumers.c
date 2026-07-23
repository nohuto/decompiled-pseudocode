/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x140492EF4
 * Callers:
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404921F0 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpGetMaxDebugIdBufferSize @ 0x140492FFC (EtwpGetMaxDebugIdBufferSize.c)
 *     EtwpAddDebugInfoEvents @ 0x14049393C (EtwpAddDebugInfoEvents.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140493FEC (EtwpInitializeProviderInfoBuffer.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  _BYTE *v3; // rax
  _BYTE *v4; // rdi
  unsigned int MaxDebugIdBufferSize; // eax
  unsigned int v6; // ebp
  _DWORD *v7; // rdi
  unsigned int v8; // esi
  _DWORD *PoolWithTag; // rax
  __int64 i; // r14
  __int64 **v12; // rsi
  __int64 *j; // rax

  v1 = (unsigned __int64 *)(a1 + 688);
  v3 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    v4[26] |= 1u;
  MaxDebugIdBufferSize = EtwpGetMaxDebugIdBufferSize(a1);
  v6 = MaxDebugIdBufferSize;
  if ( MaxDebugIdBufferSize )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, MaxDebugIdBufferSize, 0x62777445u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      EtwpInitializeProviderInfoBuffer(a1, PoolWithTag, v6);
      for ( i = *(_QWORD *)(a1 + 328); i != a1 + 328; i = *(_QWORD *)i )
      {
        EtwpAddDebugInfoEvents(a1, (_DWORD)v7, v6, 0, (*(_BYTE *)(i + 90) & 8) != 0 ? 4 : 1);
        *(_BYTE *)(i + 90) |= 8u;
        if ( v7[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer((_DWORD *)a1, i, (__int64)v7);
          v7[12] = 72;
        }
      }
      v12 = (__int64 **)(a1 + 112);
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
