/*
 * XREFs of SepRmReferenceCapTable @ 0x140250A38
 * Callers:
 *     SepRmReferenceFindCap @ 0x140250B38 (SepRmReferenceFindCap.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall SepRmReferenceCapTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rbx
  struct _KTHREAD *v8; // rdx
  __int16 v9; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&SepRmCapTableLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&SepRmCapTableLock, v5, (ULONG_PTR)&SepRmCapTableLock, v6);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v7 = SepRmCapTable;
  if ( SepRmCapTable && _InterlockedIncrement64((volatile signed __int64 *)(SepRmCapTable + 40)) <= 1 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock);
  KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
