/*
 * XREFs of HvViewMapUnpinForFileOffset @ 0x1406632CC
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130874 (HvSynchronizeAndDropTemporaryBins.c)
 *     CmpDoSystemCacheWrite @ 0x14065BA18 (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14065DC30 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401E0D0C (HvpViewMapUnpinForFileOffset.c)
 */

void __fastcall HvViewMapUnpinForFileOffset(__int64 a1, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)(a1 + 8);
  v9 = KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  HvpViewMapUnpinForFileOffset(a1, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
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
