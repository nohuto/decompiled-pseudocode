/*
 * XREFs of HvViewMapAddressForFileOffset @ 0x1406629CC
 * Callers:
 *     HvViewMapCopyToFileOffset @ 0x1401E0820 (HvViewMapCopyToFileOffset.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E0FAC (HvpMapHiveImageFromSystemCache.c)
 *     HvpAllocateBin @ 0x1404A022C (HvpAllocateBin.c)
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 *     CmpDoSystemCacheRead @ 0x14065B988 (CmpDoSystemCacheRead.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14065DC30 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall HvViewMapAddressForFileOffset(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r9
  unsigned __int64 v10; // rdi
  struct _KTHREAD *v11; // rdx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)(a1 + 8);
  v8 = KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = (v6 & 0x3FFFF)
      + (*(_QWORD *)(32 * ((v6 >> 18) & 0x3F) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * ((v6 >> 24) & 0x7F))) & 0xFFFFFFFFFFFFFFFEuLL);
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
  return v10;
}
