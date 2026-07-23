/*
 * XREFs of PsRestoreImpersonation @ 0x140412A70
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 *     CmpStartCLFSLog @ 0x1404BE47C (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406116F4 (CmpAddRemoveContainerToCLFSLog.c)
 * Callees:
 *     SeQueryTokenTrustLink @ 0x14000EE40 (SeQueryTokenTrustLink.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PspWriteTebImpersonationInfo @ 0x1404F2760 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KTHREAD *CurrentThread; // r12
  void *v3; // r15
  __int64 Token; // rdi
  struct _KTHREAD *v6; // r13
  char v8; // dl
  __int64 v9; // rcx
  char v10; // bl
  unsigned __int64 v11; // rbx
  _BYTE *v12; // rax
  _BYTE *v13; // rbp
  struct _KTHREAD *v14; // rbp
  signed __int8 v15; // bl
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  Token = (__int64)ImpersonationState->Token;
  v6 = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( SeQueryTokenTrustLink(Token) )
    {
      Token = SeQueryTokenTrustLink(v9);
      ObfReferenceObject((PVOID)Token);
      v6 = (struct _KTHREAD *)ImpersonationState->Token;
      v8 = 1;
    }
    if ( ImpersonationState->EffectiveOnly )
      v10 = v8;
    else
      v10 = 0;
    v11 = Token & 0xFFFFFFFFFFFFFFF8uLL | ImpersonationState->Level & 3 | (4LL * (v10 & 1));
  }
  else
  {
    v11 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&Thread[1].WaitBlockList,
      v12,
      (ULONG_PTR)&Thread[1].WaitBlockList);
  if ( v13 )
    v13[26] |= 1u;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v14 = Thread[1].WaitBlock[1].Thread;
    v3 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
  }
  else
  {
    v14 = 0LL;
  }
  if ( ImpersonationState->Token )
  {
    *(_QWORD *)&Thread[1].SystemCallNumber = v11;
    Thread[1].WaitBlock[1].Thread = v6;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
    v15 = 0;
  }
  else
  {
    v15 = _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    if ( v14 )
      ObfDereferenceObject(v14);
    if ( v15 )
      PspWriteTebImpersonationInfo(Thread, CurrentThread);
  }
}
