/*
 * XREFs of PsDisableImpersonation @ 0x140435730
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14058CBA8 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1405B9014 (CmpStartCLFSLog.c)
 *     VerifierPsDisableImpersonation @ 0x140742444 (VerifierPsDisableImpersonation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

BOOLEAN __stdcall PsDisableImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  __int64 v2; // r9
  char v3; // r15
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *p_WaitBlockList; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbp
  struct _KTHREAD *v11; // rax
  __int16 v12; // ax
  BOOLEAN result; // al
  void *v14; // rcx

  v3 = 0;
  if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
    v8 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0LL, v2);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_WaitBlockList, v8, (ULONG_PTR)p_WaitBlockList, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 3u) )
    {
      v3 = 1;
      ImpersonationState->Level = Thread[1].SystemCallNumber & 3;
      ImpersonationState->EffectiveOnly = (Thread[1].SystemCallNumber & 4) != 0;
      ImpersonationState->CopyOnOpen = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 3)) & 1;
      v11 = Thread[1].WaitBlock[1].Thread;
      if ( v11 )
      {
        ImpersonationState->Token = v11;
        v14 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        Thread[1].WaitBlock[1].Thread = 0LL;
        ObfDereferenceObject(v14);
      }
      else
      {
        ImpersonationState->Token = (PACCESS_TOKEN)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_WaitBlockList);
    KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
    v12 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v3 )
      return 1;
  }
  ImpersonationState->Level = SecurityAnonymous;
  result = 0;
  *(_WORD *)&ImpersonationState->CopyOnOpen = 0;
  ImpersonationState->Token = 0LL;
  return result;
}
