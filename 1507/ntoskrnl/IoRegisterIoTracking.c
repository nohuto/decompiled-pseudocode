/*
 * XREFs of IoRegisterIoTracking @ 0x1406758D8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     IopIrpExtensionControl @ 0x1401F28A4 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x1401F7E60 (IoPerfInit.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoRegisterIoTracking(__int64 a1, __int64 **a2)
{
  __int64 *PoolWithTag; // rax
  __int64 v5; // r9
  __int64 *v6; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rsi
  __int64 **v13; // rax
  struct _KTHREAD *v14; // r8
  __int16 v15; // ax

  *a2 = 0LL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72546F49u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[2] = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&IopPerfIoTrackingLock, 0LL, 0LL, v5);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock, v9, (ULONG_PTR)&IopPerfIoTrackingLock, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = (__int64 **)qword_14034B888;
  *v6 = (__int64)&IopPerfIoTrackingListHead;
  v6[1] = (__int64)v13;
  if ( *v13 != &IopPerfIoTrackingListHead )
    __fastfail(3u);
  *v13 = v6;
  qword_14034B888 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  v14 = KeGetCurrentThread();
  v15 = v14->SpecialApcDisable + 1;
  v14->SpecialApcDisable = v15;
  if ( !v15 && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  IopIrpExtensionControl(2, 1);
  IoPerfInit(2);
  result = 0LL;
  *a2 = v6;
  return result;
}
