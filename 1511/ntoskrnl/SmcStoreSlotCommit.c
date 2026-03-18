/*
 * XREFs of SmcStoreSlotCommit @ 0x140659B88
 * Callers:
 *     SmcStoreCreate @ 0x140659274 (SmcStoreCreate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall SmcStoreSlotCommit(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 160);
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(a1 + 160, 0LL, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (ULONG_PTR)v5);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_DWORD *)(a2 + 4) &= ~4u;
  *(_DWORD *)a2 = a3;
  _InterlockedExchange64((volatile __int64 *)(a2 + 16), 0LL);
  *(_DWORD *)(a2 + 4) ^= (a4 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 3;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegion();
}
