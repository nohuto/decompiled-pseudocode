/*
 * XREFs of ExDisableHandleTracing @ 0x1402630B0
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1406BFC88 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406EFF48 (ExDereferenceHandleDebugInfo.c)
 */

void __fastcall ExDisableHandleTracing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int16 v11; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (unsigned __int64 *)(a1 + 56);
  v7 = KeAbPreAcquire(a1 + 56, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v10 && (*(_DWORD *)(v10 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v11 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v10 )
    ExDereferenceHandleDebugInfo(a1, v10);
}
