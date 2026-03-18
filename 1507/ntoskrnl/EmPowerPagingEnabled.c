/*
 * XREFs of EmPowerPagingEnabled @ 0x140566A18
 * Callers:
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall EmPowerPagingEnabled(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v6, (ULONG_PTR)&EmpPagingLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( a1 )
  {
    dword_14034D3E8 |= 0x80000000;
  }
  else
  {
    dword_14034D3E8 &= ~0x80000000;
    if ( (dword_14034D3E8 & 0x7FFFFFFF) != 0 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v5 = 1;
      EmpPagingStatus = &Event;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  if ( v5 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v11 = KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0LL, v10);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
    v13 = v11;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v11, (ULONG_PTR)&EmpPagingLock, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    EmpPagingStatus = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
    KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  }
}
