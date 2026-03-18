/*
 * XREFs of SmcStoreSlotAbort @ 0x140659AC0
 * Callers:
 *     SmcStoreCreate @ 0x140659274 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x140659C4C (SmcStoreSlotReserve.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall SmcStoreSlotAbort(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  volatile signed __int64 *v9; // rdi
  struct _PRIVILEGE_SET *v10; // rsi

  if ( !(_DWORD)a3 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (unsigned __int64 *)(a1 + 160);
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire(a1 + 160, 0LL, a3);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
  }
  *(_DWORD *)(a2 + 4) &= ~4u;
  v9 = (volatile signed __int64 *)(a1 + 160);
  v10 = *(struct _PRIVILEGE_SET **)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  KeLeaveCriticalRegion();
  MiDeleteSubsection(v10);
}
