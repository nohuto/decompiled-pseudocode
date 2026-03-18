/*
 * XREFs of ExCreateHandleTable @ 0x140460B44
 * Callers:
 *     ExDupHandleTable @ 0x1403E2B60 (ExDupHandleTable.c)
 *     ObInitProcess @ 0x1403E3544 (ObInitProcess.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x140460B20 (RtlpInitializeHandleTableForAtomTable.c)
 *     AlpcpInitSystem @ 0x140547BD8 (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14061FE50 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpAllocateHandleTable @ 0x1403E308C (ExpAllocateHandleTable.c)
 */

_QWORD *__fastcall ExCreateHandleTable(struct _KPROCESS *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *result; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rax
  signed __int8 v7; // cf
  __int64 v8; // rsi
  __int64 **v9; // rcx
  _QWORD *v10; // rax

  CurrentThread = KeGetCurrentThread();
  result = ExpAllocateHandleTable(a1, 1);
  v5 = result;
  if ( result )
  {
    if ( a2 )
    {
      --CurrentThread->KernelApcDisable;
      v6 = KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0LL);
      v7 = _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL);
      v8 = v6;
      if ( v7 )
        ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v6, (ULONG_PTR)&HandleTableListLock);
      if ( v8 )
        *(_BYTE *)(v8 + 26) |= 1u;
      v9 = (__int64 **)qword_1406FB2B8;
      v5[4] = qword_1406FB2B8;
      v5[3] = &HandleTableListHead;
      if ( *v9 != &HandleTableListHead )
        __fastfail(3u);
      *v9 = v5 + 3;
      qword_1406FB2B8 = (__int64)(v5 + 3);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      v10 = result + 3;
      v10[1] = v10;
      *v10 = v10;
    }
    return v5;
  }
  return result;
}
