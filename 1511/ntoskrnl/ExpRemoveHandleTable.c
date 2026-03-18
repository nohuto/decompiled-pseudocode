/*
 * XREFs of ExpRemoveHandleTable @ 0x1404AE40C
 * Callers:
 *     ExDestroyHandleTable @ 0x1404AE2B0 (ExDestroyHandleTable.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpRemoveHandleTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v3, (ULONG_PTR)&HandleTableListLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = (_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD **)(a1 + 32);
  if ( *(_QWORD *)(v7 + 8) != a1 + 24 || (_QWORD *)*v8 != v6 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *v6 = v6;
  return result;
}
