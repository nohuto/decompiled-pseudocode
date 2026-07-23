/*
 * XREFs of PsDisableImpersonation @ 0x140412920
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 *     CmpStartCLFSLog @ 0x1404BE47C (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406116F4 (CmpAddRemoveContainerToCLFSLog.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

BOOLEAN __stdcall PsDisableImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  char v2; // bp
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *p_WaitBlockList; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  BOOLEAN result; // al
  void *v14; // rcx

  v2 = 0;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
    v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_WaitBlockList, v7, (ULONG_PTR)p_WaitBlockList);
    if ( v8 )
      v8[26] |= 1u;
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u) )
    {
      v2 = 1;
      ImpersonationState->Level = Thread[1].SystemCallNumber & 3;
      ImpersonationState->EffectiveOnly = (Thread[1].SystemCallNumber & 4) != 0;
      ImpersonationState->CopyOnOpen = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 2)) & 1;
      v9 = Thread[1].WaitBlock[1].Thread;
      if ( v9 )
      {
        ImpersonationState->Token = v9;
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
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
    if ( v2 )
      return 1;
  }
  ImpersonationState->Level = SecurityAnonymous;
  result = 0;
  *(_WORD *)&ImpersonationState->CopyOnOpen = 0;
  ImpersonationState->Token = 0LL;
  return result;
}
