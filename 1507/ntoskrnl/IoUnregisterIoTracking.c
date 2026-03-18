/*
 * XREFs of IoUnregisterIoTracking @ 0x140675A3C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     IopIrpExtensionControl @ 0x1401F28A4 (IopIrpExtensionControl.c)
 *     IoPerfReset @ 0x1401F7ED8 (IoPerfReset.c)
 */

void __fastcall IoUnregisterIoTracking(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r9
  signed __int8 v6; // cf
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax

  IoPerfReset(2);
  IopIrpExtensionControl(2, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&IopPerfIoTrackingLock, 0LL, 0LL, v3);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock, v4, (ULONG_PTR)&IopPerfIoTrackingLock, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = *a1;
  v9 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v9 != a1 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable + 1;
  v10->SpecialApcDisable = v11;
  if ( !v11 && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  ExFreePoolWithTag(a1, 0x72546F49u);
}
