/*
 * XREFs of ExpRemoveHandleTable @ 0x14045E128
 * Callers:
 *     ExDestroyHandleTable @ 0x14045DFCC (ExDestroyHandleTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpRemoveHandleTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v3, (ULONG_PTR)&HandleTableListLock);
  if ( v5 )
    v5[26] |= 1u;
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
