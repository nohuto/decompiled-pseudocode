/*
 * XREFs of HvViewMapPinFile @ 0x1401E08A0
 * Callers:
 *     HvpApplyLogEntry @ 0x140666234 (HvpApplyLogEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     HvpViewMapPinForFileOffset @ 0x1401E0B18 (HvpViewMapPinForFileOffset.c)
 */

__int64 __fastcall HvViewMapPinFile(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned int v10; // esi
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (unsigned __int64 *)(a1 + 2);
  v7 = KeAbPreAcquire((ULONG_PTR)(a1 + 2), 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = HvpViewMapPinForFileOffset(a1, 0LL, *a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}
