/*
 * XREFs of PsRestoreImpersonation @ 0x140435590
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14058CBA8 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1405B9014 (CmpStartCLFSLog.c)
 *     VerifierPsRestoreImpersonation @ 0x140742474 (VerifierPsRestoreImpersonation.c)
 * Callees:
 *     SeQueryTokenTrustLink @ 0x1400151AC (SeQueryTokenTrustLink.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspWriteTebImpersonationInfo @ 0x140479740 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  __int64 v2; // r9
  struct _KTHREAD *CurrentThread; // rbp
  void *v4; // r12
  __int64 Token; // rbx
  struct _KTHREAD *v7; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  struct _KTHREAD *v14; // rbx
  char v15; // di
  __int16 v16; // ax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  Token = (__int64)ImpersonationState->Token;
  v7 = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( SeQueryTokenTrustLink(Token) )
    {
      Token = SeQueryTokenTrustLink(v9);
      ObfReferenceObject((PVOID)Token);
      v7 = (struct _KTHREAD *)ImpersonationState->Token;
    }
    v10 = Token & 0xFFFFFFFFFFFFFFF8uLL | ImpersonationState->Level & 3 | (4LL * (ImpersonationState->EffectiveOnly != 0));
  }
  else
  {
    v10 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0LL, v2);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&Thread[1].WaitBlockList,
      v11,
      (ULONG_PTR)&Thread[1].WaitBlockList,
      v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) != 0 )
  {
    v14 = Thread[1].WaitBlock[1].Thread;
    v4 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
  }
  else
  {
    v14 = 0LL;
  }
  if ( ImpersonationState->Token )
  {
    *(_QWORD *)&Thread[1].SystemCallNumber = v10;
    Thread[1].WaitBlock[1].Thread = v7;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 8u);
    goto LABEL_15;
  }
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 3u) )
  {
LABEL_15:
    v15 = 0;
    goto LABEL_16;
  }
  v15 = 1;
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  v16 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    if ( v14 )
      ObfDereferenceObject(v14);
    if ( v15 )
      PspWriteTebImpersonationInfo(Thread, CurrentThread);
  }
}
