/*
 * XREFs of PfpScenCtxQueryScenarioInformation @ 0x1403EF9D0
 * Callers:
 *     PfpQueryScenarioInformation @ 0x140568774 (PfpQueryScenarioInformation.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall PfpScenCtxQueryScenarioInformation(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v7, BugCheckParameter2, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(BugCheckParameter2 + 48);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(BugCheckParameter2 + 52);
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == 3 )
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(BugCheckParameter2 + 56);
  KeResetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
