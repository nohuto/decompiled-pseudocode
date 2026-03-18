/*
 * XREFs of PfpScenCtxServiceThreadSet @ 0x1403FB0BC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsGetThreadId @ 0x1401191F0 (PsGetThreadId.c)
 */

void __fastcall PfpScenCtxServiceThreadSet(unsigned __int64 *BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  HANDLE ThreadId; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  struct _KTHREAD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbp
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadId = PsGetThreadId(CurrentThread);
    v7 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    v8 = (unsigned __int64)ThreadId;
  }
  else
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v10, (ULONG_PTR)BugCheckParameter2, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  BugCheckParameter2[9] = v8;
  BugCheckParameter2[10] = v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
