/*
 * XREFs of SmcStoreSlotAbort @ 0x1406DC14C
 * Callers:
 *     SmcStoreCreate @ 0x1406DB7E4 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x1406DC350 (SmcStoreSlotReserve.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall SmcStoreSlotAbort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  struct _PRIVILEGE_SET *v11; // rsi
  struct _KTHREAD *v12; // rdx
  __int16 v13; // ax

  if ( !(_DWORD)a3 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (unsigned __int64 *)(a1 + 160);
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire(a1 + 160, 0LL, a3, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
  }
  v11 = *(struct _PRIVILEGE_SET **)(a2 + 8);
  *(_DWORD *)(a2 + 4) &= ~4u;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 160));
  KeAbPostRelease(a1 + 160);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  ExFreePoolEx(v11);
}
