/*
 * XREFs of SmcStoreSlotCommit @ 0x1406DC248
 * Callers:
 *     SmcStoreCreate @ 0x1406DB7E4 (SmcStoreCreate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall SmcStoreSlotCommit(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  unsigned __int8 v6; // bp
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 160);
  v6 = a4;
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(a1 + 160, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (ULONG_PTR)v5, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  *(_DWORD *)(a2 + 4) &= ~4u;
  *(_DWORD *)a2 = a3;
  _InterlockedExchange64((volatile __int64 *)(a2 + 16), 0LL);
  *(_DWORD *)(a2 + 4) ^= (v6 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 3;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
