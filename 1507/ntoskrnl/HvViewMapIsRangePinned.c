/*
 * XREFs of HvViewMapIsRangePinned @ 0x140662F1C
 * Callers:
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14065DC30 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     HvpViewMapIsRangePinned @ 0x1401E0A74 (HvpViewMapIsRangePinned.c)
 */

char __fastcall HvViewMapIsRangePinned(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r9
  char IsRangePinned; // di
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)(a1 + 8);
  v8 = KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  IsRangePinned = HvpViewMapIsRangePinned(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return IsRangePinned;
}
