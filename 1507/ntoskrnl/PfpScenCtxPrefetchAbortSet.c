/*
 * XREFs of PfpScenCtxPrefetchAbortSet @ 0x1403EFF94
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfpScenCtxPrefetchAbortSet(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r14d
  unsigned int v9; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  struct _KTHREAD *v15; // rdx
  __int16 v16; // ax

  v5 = a4;
  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v12, BugCheckParameter2, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    if ( v5 )
    {
      *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
LABEL_5:
      v9 = 0;
      goto LABEL_6;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) != 8 )
    {
      *(_QWORD *)(BugCheckParameter2 + 40) = a3;
      goto LABEL_5;
    }
    v9 = -1073741431;
  }
  else
  {
    v9 = -1073741735;
  }
LABEL_6:
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v9;
}
