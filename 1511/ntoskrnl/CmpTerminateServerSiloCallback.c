/*
 * XREFs of CmpTerminateServerSiloCallback @ 0x1405E0D28
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1403F9D0C (CmpDelayDerefKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

void __fastcall CmpTerminateServerSiloCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rax
  ULONG_PTR v9; // rbx

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = (unsigned __int64 *)(a2 + 24);
    v5 = KeAbPreAcquire(a2 + 24, 0LL, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    *(_BYTE *)(a2 + 16) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v7 = *(_QWORD **)a2;
      if ( *(_QWORD *)a2 == a2 )
        break;
      v8 = *v7;
      if ( v7[1] != a2 || *(_QWORD **)(v8 + 8) != v7 )
        __fastfail(3u);
      *(_QWORD *)a2 = v8;
      *(_QWORD *)(v8 + 8) = a2;
      if ( *((_DWORD *)v7 + 4) )
      {
        do
        {
          v9 = v7[3];
          CmpLockRegistry();
          CmpLockKcbExclusive(v9);
          *(_WORD *)(v9 + 4) &= 0xFF5Fu;
          CmpUnlockKcb((char *)v9);
          CmpDelayDerefKeyControlBlock(v9);
          CmpUnlockRegistry();
        }
        while ( (*((_DWORD *)v7 + 4))-- != 1 );
      }
      ExFreePoolWithTag(v7, 0x33364D43u);
    }
  }
}
