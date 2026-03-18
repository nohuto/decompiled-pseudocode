/*
 * XREFs of ExUnregisterExtension @ 0x1406F8120
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExUnregisterExtension(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbp
  void (__fastcall *v10)(__int64, _QWORD); // rax
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(__int64, _QWORD); // rax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (unsigned __int64 *)(a1 + 72);
  v7 = KeAbPreAcquire(a1 + 72, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 48);
  if ( v10 )
    v10(2LL, *(_QWORD *)(a1 + 56));
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 1LL, 0LL);
  if ( v11 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)(a1 + 64), v11);
  v12 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 48);
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( v12 )
    v12(3LL, *(_QWORD *)(a1 + 56));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return ExpDereferenceHost(a1);
}
