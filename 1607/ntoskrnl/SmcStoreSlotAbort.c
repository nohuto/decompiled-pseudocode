/*
 * XREFs of SmcStoreSlotAbort @ 0x14069AEC0
 * Callers:
 *     SmcStoreCreate @ 0x14069A674 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x14069B04C (SmcStoreSlotReserve.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

void __fastcall SmcStoreSlotAbort(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  volatile signed __int64 *v9; // rdi
  struct _PRIVILEGE_SET *v10; // rsi

  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (unsigned __int64 *)(a1 + 160);
    --CurrentThread->KernelApcDisable;
    v7 = (_BYTE *)KeAbPreAcquire(a1 + 160, 0LL, 0);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
    if ( v8 )
      v8[26] |= 1u;
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
