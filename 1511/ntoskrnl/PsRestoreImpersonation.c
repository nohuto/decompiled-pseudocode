/*
 * XREFs of PsRestoreImpersonation @ 0x140477920
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140518D60 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140542C50 (CmpStartCLFSLog.c)
 *     VerifierPsRestoreImpersonation @ 0x1406C0C34 (VerifierPsRestoreImpersonation.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     SeQueryTokenTrustLink @ 0x14009E1B8 (SeQueryTokenTrustLink.c)
 *     PspWriteTebImpersonationInfo @ 0x1404268E0 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // r12
  __int64 Token; // rbx
  struct _KTHREAD *v6; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  bool v12; // bl
  __int64 v13; // rcx
  __int16 v14; // ax
  struct _KTHREAD *Object; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  Token = (__int64)ImpersonationState->Token;
  v6 = 0LL;
  Object = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( SeQueryTokenTrustLink(Token) )
    {
      Token = SeQueryTokenTrustLink(v8);
      ObfReferenceObject((PVOID)Token);
      v6 = (struct _KTHREAD *)ImpersonationState->Token;
    }
    v9 = Token & 0xFFFFFFFFFFFFFFF8uLL | ImpersonationState->Level & 3 | (4LL * (ImpersonationState->EffectiveOnly != 0));
  }
  else
  {
    v9 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&Thread[1].WaitBlockList,
      v10,
      (ULONG_PTR)&Thread[1].WaitBlockList);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) != 0 )
  {
    v3 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
    Object = Thread[1].WaitBlock[1].Thread;
  }
  if ( ImpersonationState->Token )
  {
    *(_QWORD *)&Thread[1].SystemCallNumber = v9;
    Thread[1].WaitBlock[1].Thread = v6;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 8u);
    v12 = 0;
  }
  else
  {
    v12 = _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 3u) != 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  v14 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v14;
  if ( !v14
    && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v13);
  }
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( v12 )
      PspWriteTebImpersonationInfo((__int64)Thread, (__int64)CurrentThread);
  }
}
