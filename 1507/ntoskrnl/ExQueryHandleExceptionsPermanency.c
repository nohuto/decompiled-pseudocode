/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x140263298
 * Callers:
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     ObpCloseHandle @ 0x1404A4DA0 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, bool *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rax
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)(a1 + 56);
  v9 = KeAbPreAcquire(a1 + 56, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = *(_QWORD *)(a1 + 96);
  if ( v12 )
  {
    *a2 = 1;
    *a3 = (*(_BYTE *)(v12 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    *a3 = 1;
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  v13 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
