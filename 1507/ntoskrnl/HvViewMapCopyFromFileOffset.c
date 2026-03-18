/*
 * XREFs of HvViewMapCopyFromFileOffset @ 0x1401E06F4
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401E0FAC (HvpMapHiveImageFromSystemCache.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     HvpViewMapAddressForFileOffset @ 0x1405C7288 (HvpViewMapAddressForFileOffset.c)
 *     HvpViewMapContiguousBytesAfterFileOffset @ 0x1405C72C0 (HvpViewMapContiguousBytesAfterFileOffset.c)
 */

void __fastcall HvViewMapCopyFromFileOffset(__int64 a1, char *a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // r14d
  unsigned __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // esi
  const void *v13; // r10
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = a4;
  --CurrentThread->KernelApcDisable;
  v9 = (unsigned __int64 *)(a1 + 8);
  v10 = KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  for ( ; v5; v5 -= v12 )
  {
    HvpViewMapAddressForFileOffset(a1, a3);
    v12 = HvpViewMapContiguousBytesAfterFileOffset(a1, a3);
    if ( v12 > v5 )
      v12 = v5;
    memmove(a2, v13, v12);
    a3 += v12;
    a2 += v12;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
