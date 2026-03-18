/*
 * XREFs of PsImpersonateClient @ 0x1404264E0
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     AlpcpImpersonateMessage @ 0x140425640 (AlpcpImpersonateMessage.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     CmpCmdHiveOpen @ 0x14044C29C (CmpCmdHiveOpen.c)
 *     SeImpersonateClientEx @ 0x1404C71E8 (SeImpersonateClientEx.c)
 *     PsRevertThreadToSelf @ 0x1404C722C (PsRevertThreadToSelf.c)
 *     PsAssignImpersonationToken @ 0x14052EC98 (PsAssignImpersonationToken.c)
 *     VerifierPsImpersonateClient @ 0x1406C0C14 (VerifierPsImpersonateClient.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     SeSetTokenTrustLink @ 0x1400EC064 (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x1400F1240 (SeQueryTokenTrustSid.c)
 *     PspWriteTebImpersonationInfo @ 0x1404268E0 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x140426A30 (SeTokenCanImpersonate.c)
 *     SeCopyClientToken @ 0x140479434 (SeCopyClientToken.c)
 */

NTSTATUS __stdcall PsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  _KPROCESS *Process; // rbp
  char v6; // r14
  unsigned __int64 v9; // rsi
  void *v11; // rsi
  struct _KTHREAD *v12; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 *p_WaitBlockList; // r14
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int16 v18; // ax
  struct _KTHREAD *v19; // rdx
  signed __int64 *v20; // rbx
  void *v21; // r13
  unsigned int v22; // ebp
  __int64 v23; // r8
  struct _KTHREAD *v24; // r14
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int16 v29; // ax
  NTSTATUS v31; // esi
  struct _KTHREAD *v32; // rbx
  struct _KTHREAD *v33; // [rsp+30h] [rbp-48h]
  _DWORD *v34; // [rsp+38h] [rbp-40h] BYREF

  Process = Thread->Process;
  v6 = 0;
  v34 = 0LL;
  v33 = 0LL;
  v9 = (unsigned __int64)Token;
  if ( !Token )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) == 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
    v15 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_WaitBlockList, v15, (ULONG_PTR)p_WaitBlockList);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) != 0 )
    {
      v12 = Thread[1].WaitBlock[1].Thread;
      v11 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
      Thread[1].WaitBlock[1].Thread = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 0xFFFFFFF7);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_WaitBlockList);
    KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
    v18 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v18;
    if ( !v18
      && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v17);
    }
    v19 = CurrentThread;
LABEL_30:
    PspWriteTebImpersonationInfo(Thread, v19);
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v12 )
      ObfDereferenceObject(v12);
    return 0;
  }
  v20 = (signed __int64 *)&Process[1].Affinity.Bitmap[5];
  v21 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v21 )
  {
    v32 = KeGetCurrentThread();
    PspLockProcessShared((__int64)Process, (__int64)v32);
    v21 = (void *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
    PspUnlockProcessShared((__int64)Process, (__int64)v32);
    if ( !v21 )
    {
      LOBYTE(v22) = ImpersonationLevel;
      goto LABEL_17;
    }
    v20 = (signed __int64 *)&Process[1].Affinity.Bitmap[5];
  }
  LOBYTE(v22) = ImpersonationLevel;
  if ( (int)SeTokenCanImpersonate(v21, (PACCESS_TOKEN)v9) >= 0 )
  {
LABEL_16:
    ObFastDereferenceObject(v20, (unsigned __int64)v21);
    if ( v6 )
    {
LABEL_18:
      v24 = KeGetCurrentThread();
      v25 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v22 & 3 | (4LL * (EffectiveOnly & 1));
      --v24->KernelApcDisable;
      v26 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0LL);
      v27 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&Thread[1].WaitBlockList,
          v26,
          (ULONG_PTR)&Thread[1].WaitBlockList);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) != 0 )
      {
        v12 = Thread[1].WaitBlock[1].Thread;
        v11 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        Thread[1].WaitBlock[1].Thread = 0LL;
      }
      else
      {
        v11 = 0LL;
        v12 = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 8u);
      }
      Thread[1].WaitBlock[1].Thread = v33;
      *(_QWORD *)&Thread[1].SystemCallNumber = v25;
      if ( CopyOnOpen )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 0xFFFFFEFF);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      v29 = v24->KernelApcDisable + 1;
      v24->KernelApcDisable = v29;
      if ( !v29
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
        && !v24->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v28);
      }
      v19 = v24;
      goto LABEL_30;
    }
LABEL_17:
    ObfReferenceObject((PVOID)v9);
    goto LABEL_18;
  }
  v22 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
    v22 = *(_DWORD *)(v9 + 196);
  v31 = SeCopyClientToken(v9, v22, v23, 0LL, 0LL, &v34);
  if ( v31 >= 0 )
  {
    v9 = (unsigned __int64)v34;
    v6 = 1;
    goto LABEL_16;
  }
  ObFastDereferenceObject(v20, (unsigned __int64)v21);
  return v31;
}
