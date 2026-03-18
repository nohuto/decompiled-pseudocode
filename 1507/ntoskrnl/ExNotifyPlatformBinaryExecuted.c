/*
 * XREFs of ExNotifyPlatformBinaryExecuted @ 0x1405C0FE8
 * Callers:
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ExNotifyPlatformBinaryExecuted(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rsi
  PVOID v9; // rsi
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&ExpPlatformBinaryLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&ExpPlatformBinaryLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&ExpPlatformBinaryLock, v5, (ULONG_PTR)&ExpPlatformBinaryLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = ExpPlatformBinaryTableInformation;
  ExpPlatformBinaryTableInformation = (PVOID)-1LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  v10 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x54425057u);
}
