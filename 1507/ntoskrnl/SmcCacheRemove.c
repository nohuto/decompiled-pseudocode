/*
 * XREFs of SmcCacheRemove @ 0x1406DB278
 * Callers:
 *     SmcCacheDelete @ 0x1406DAF34 (SmcCacheDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall SmcCacheRemove(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rsi
  unsigned int v6; // r15d
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  struct _KTHREAD *v12; // rdx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = (__int64 *)(a1 + 32LL * (a2 & 0xF));
  v6 = a2 >> 4;
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)(v5 + 2), 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5 + 4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5 + 2, v8, (ULONG_PTR)(v5 + 2), v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( v6 == (v5[3] & 0xFFF) && *v5 )
  {
    v11 = _InterlockedCompareExchange64(v5 + 1, 1LL, 0LL);
    if ( v11 >= 2 )
      ExfWaitForRundownProtectionRelease(v5 + 1, v11);
    v7 = *v5;
    *v5 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v5 + 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5 + 2);
  KeAbPostRelease((ULONG_PTR)(v5 + 2));
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
