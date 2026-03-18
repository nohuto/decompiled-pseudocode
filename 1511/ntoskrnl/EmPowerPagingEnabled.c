/*
 * XREFs of EmPowerPagingEnabled @ 0x1404F7D3C
 * Callers:
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

void __fastcall EmPowerPagingEnabled(char a1)
{
  char v2; // di
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v3, (ULONG_PTR)&EmpPagingLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( a1 )
  {
    dword_1402FCF88 |= 0x80000000;
  }
  else
  {
    dword_1402FCF88 &= ~0x80000000;
    if ( (dword_1402FCF88 & 0x7FFFFFFF) != 0 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v2 = 1;
      EmpPagingStatus = &Event;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  if ( v2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
    v7 = v6;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v6, (ULONG_PTR)&EmpPagingLock);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    EmpPagingStatus = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
    KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  }
}
