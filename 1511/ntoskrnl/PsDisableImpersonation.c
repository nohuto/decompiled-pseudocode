/*
 * XREFs of PsDisableImpersonation @ 0x1404777B0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140518D60 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140542C50 (CmpStartCLFSLog.c)
 *     VerifierPsDisableImpersonation @ 0x1406C0C04 (VerifierPsDisableImpersonation.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

BOOLEAN __stdcall PsDisableImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  char v2; // r15
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *p_WaitBlockList; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  struct _KTHREAD *v9; // rax
  __int64 v10; // rcx
  __int16 v11; // ax
  BOOLEAN result; // al
  void *v13; // rcx

  v2 = 0;
  if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
    v7 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_WaitBlockList, v7, (ULONG_PTR)p_WaitBlockList);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 3u) )
    {
      v2 = 1;
      ImpersonationState->Level = Thread[1].SystemCallNumber & 3;
      ImpersonationState->EffectiveOnly = (Thread[1].SystemCallNumber & 4) != 0;
      ImpersonationState->CopyOnOpen = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 3)) & 1;
      v9 = Thread[1].WaitBlock[1].Thread;
      if ( v9 )
      {
        ImpersonationState->Token = v9;
        v13 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        Thread[1].WaitBlock[1].Thread = 0LL;
        ObfDereferenceObject(v13);
      }
      else
      {
        ImpersonationState->Token = (PACCESS_TOKEN)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_WaitBlockList);
    KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
    v11 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v11;
    if ( !v11
      && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v10);
    }
    if ( v2 )
      return 1;
  }
  ImpersonationState->Level = SecurityAnonymous;
  result = 0;
  *(_WORD *)&ImpersonationState->CopyOnOpen = 0;
  ImpersonationState->Token = 0LL;
  return result;
}
