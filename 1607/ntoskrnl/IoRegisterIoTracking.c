/*
 * XREFs of IoRegisterIoTracking @ 0x140624F30
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     IopIrpExtensionControl @ 0x1401C519C (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x1401CA614 (IoPerfInit.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoRegisterIoTracking(__int64 a1, _QWORD *a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v8; // rax
  signed __int8 v9; // cf
  _BYTE *v10; // rsi
  _QWORD *v11; // rax

  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72546F49u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[2] = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&IopPerfIoTrackingLock, 0LL, 0);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock, v8, (ULONG_PTR)&IopPerfIoTrackingLock);
  if ( v10 )
    v10[26] |= 1u;
  v11 = (_QWORD *)qword_140320948;
  if ( *(__int64 **)qword_140320948 != &IopPerfIoTrackingListHead )
    __fastfail(3u);
  *v5 = &IopPerfIoTrackingListHead;
  v5[1] = v11;
  *v11 = v5;
  qword_140320948 = (__int64)v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  IopIrpExtensionControl(2, 1);
  IoPerfInit(2);
  result = 0LL;
  *a2 = v5;
  return result;
}
