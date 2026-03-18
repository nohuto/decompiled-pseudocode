/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x1C0017BD4
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1C00021E0 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0002BD0 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 */

__int64 __fastcall VidSchiProcessDpcSystemRequest(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  struct _KEVENT *v15; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 13;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1872), &LockHandle);
  v10 = *(unsigned int *)(v3 + 1480);
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v10 + 1488), 0LL, v1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = v1;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 160) = v1;
  *(_DWORD *)(v3 + 1480) = ((_BYTE)v10 + 1) & 0xF;
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 900));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2848));
  if ( *(int *)(v3 + 2832) > 0 )
  {
    v12 = *(_QWORD *)(v5 + 352);
    _bittestandset64(&v12, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v5 + 352) = v12;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 764), 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v1 + 176) & 1) != 0 )
      *(_DWORD *)(v1 + 176) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0LL, (__int64 *)0x23FE);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 396) + 1624);
    v13 = *(unsigned int *)(v1 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v13 + 1624) )
      *(_DWORD *)(v3 + 1620) &= ~(1 << v13);
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 2860));
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 2856));
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 904));
    _m_prefetchw((const void *)(v3 + 112));
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v3 + 112),
              *(_QWORD *)(a1 + 104),
              *(_QWORD *)(v3 + 112)) != *(_QWORD *)(a1 + 104) )
      ;
  }
  VidSchiCheckPendingDeviceCommand((_QWORD *)v4, v6, v8);
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 896));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2844));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 1008));
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 760));
  VidSchiProfilePerformanceTick(9LL, v5, v3, v14, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v1 + 368));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v3 + 336));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1800));
  *(_QWORD *)(v1 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 312), 0, 0);
  *(_QWORD *)(v3 + 200) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 168), 0, 0);
  *(_QWORD *)(v5 + 1608) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1576), 0, 0);
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v3 + 352));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1816));
  *(_QWORD *)(v3 + 256) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 224), 0, 0);
  *(_QWORD *)(v5 + 1664) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1632), 0, 0);
  v15 = *(struct _KEVENT **)(a1 + 200);
  if ( v15 )
    KeSetEvent(v15, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    *(_QWORD *)(v3 + 312) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 280), 0, 0);
    if ( !*(_DWORD *)(v5 + 892) )
    {
      if ( *(_DWORD *)(v5 + 896) )
      {
        *(_QWORD *)(*(_QWORD *)(v4 + 32) + 1328LL) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(*(_QWORD *)(v4 + 32) + 1296LL), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
