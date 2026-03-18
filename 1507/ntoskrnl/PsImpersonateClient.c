/*
 * XREFs of PsImpersonateClient @ 0x1404792B0
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     CmpCmdHiveOpen @ 0x14044A564 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     AlpcpImpersonateMessage @ 0x140479ED0 (AlpcpImpersonateMessage.c)
 *     SeImpersonateClientEx @ 0x14053C5D0 (SeImpersonateClientEx.c)
 *     PsRevertThreadToSelf @ 0x14055CF88 (PsRevertThreadToSelf.c)
 *     PsAssignImpersonationToken @ 0x1405A1618 (PsAssignImpersonationToken.c)
 *     VerifierPsImpersonateClient @ 0x140742454 (VerifierPsImpersonateClient.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SeSetTokenTrustLink @ 0x14012BCCC (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x14012FF10 (SeQueryTokenTrustSid.c)
 *     PspWriteTebImpersonationInfo @ 0x140479740 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 *     SeCopyClientToken @ 0x1404D25E4 (SeCopyClientToken.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall PsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  _KPROCESS *Process; // rbx
  char v6; // bp
  unsigned __int64 v9; // rsi
  void *v11; // rsi
  struct _KTHREAD *v12; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 *p_WaitBlockList; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r15
  __int16 v18; // ax
  struct _KTHREAD *v19; // rdx
  signed __int64 *v20; // r13
  __int64 v21; // r9
  void *v22; // r15
  __int64 v23; // r8
  __int64 v24; // r9
  bool v25; // zf
  char v26; // bp
  struct _KTHREAD *v27; // r15
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rsi
  __int16 v32; // ax
  unsigned int v34; // ebx
  NTSTATUS v35; // ebx
  unsigned __int64 *v36; // rbx
  __int64 v37; // r9
  __int64 v38; // r15
  __int16 v39; // ax
  struct _KTHREAD *v40; // [rsp+30h] [rbp-58h]
  _DWORD *v41; // [rsp+38h] [rbp-50h] BYREF
  char v42; // [rsp+98h] [rbp+10h]
  struct _KTHREAD *v43; // [rsp+98h] [rbp+10h]

  Process = Thread->Process;
  v6 = 0;
  v41 = 0LL;
  v40 = 0LL;
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
    v15 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0LL, EffectiveOnly);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_WaitBlockList, v15, (ULONG_PTR)p_WaitBlockList, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
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
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
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
  v22 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v22 )
  {
    v43 = KeGetCurrentThread();
    --v43->KernelApcDisable;
    v36 = (unsigned __int64 *)&Process[1];
    v38 = KeAbPreAcquire((ULONG_PTR)v36, 0LL, 0LL, v21);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v36, v38, (ULONG_PTR)v36, v37);
    if ( v38 )
      *(_BYTE *)(v38 + 26) |= 1u;
    v22 = (void *)ObFastReferenceObjectLocked(v20);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v36);
    KeAbPostRelease((ULONG_PTR)v36);
    v39 = v43->KernelApcDisable + 1;
    v43->KernelApcDisable = v39;
    if ( !v39
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
      && !v43->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v22 )
    {
      v26 = ImpersonationLevel;
      goto LABEL_17;
    }
  }
  v42 = ImpersonationLevel;
  if ( (int)SeTokenCanImpersonate(v22, (PACCESS_TOKEN)v9) >= 0 )
  {
LABEL_16:
    ObFastDereferenceObject(v20, (unsigned __int64)v22);
    v25 = v6 == 0;
    v26 = v42;
    if ( !v25 )
    {
LABEL_18:
      v27 = KeGetCurrentThread();
      v28 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v26 & 3 | (4LL * (EffectiveOnly & 1));
      --v27->KernelApcDisable;
      v29 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0LL, v24);
      v31 = v29;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&Thread[1].WaitBlockList,
          v29,
          (ULONG_PTR)&Thread[1].WaitBlockList,
          v30);
      if ( v31 )
        *(_BYTE *)(v31 + 26) |= 1u;
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
      Thread[1].WaitBlock[1].Thread = v40;
      *(_QWORD *)&Thread[1].SystemCallNumber = v28;
      if ( CopyOnOpen )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 3, 0xFFFFFEFF);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      v32 = v27->KernelApcDisable + 1;
      v27->KernelApcDisable = v32;
      if ( !v32
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
        && !v27->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v19 = v27;
      goto LABEL_30;
    }
LABEL_17:
    ObfReferenceObject((PVOID)v9);
    goto LABEL_18;
  }
  v34 = 1;
  v42 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
  {
    v34 = *(_DWORD *)(v9 + 196);
    v42 = v34;
  }
  v35 = SeCopyClientToken(v9, v34, v23, 0LL, 0LL, &v41);
  if ( v35 >= 0 )
  {
    v9 = (unsigned __int64)v41;
    v6 = 1;
    goto LABEL_16;
  }
  ObFastDereferenceObject(v20, (unsigned __int64)v22);
  return v35;
}
