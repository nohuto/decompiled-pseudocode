/*
 * XREFs of PsReferenceImpersonationToken @ 0x1405217F0
 * Callers:
 *     CmpCmdHiveOpen @ 0x14044A564 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     ObpReferenceDeviceMap @ 0x140510B90 (ObpReferenceDeviceMap.c)
 *     CmpBuildAdminInformation @ 0x140657B40 (CmpBuildAdminInformation.c)
 *     VerifierPsReferenceImpersonationToken @ 0x14074245C (VerifierPsReferenceImpersonationToken.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 *p_WaitBlockList; // r12
  __int64 v11; // rbx
  __int64 v12; // r9
  void *v13; // rbp
  __int16 v14; // ax

  if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
  v11 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0LL, (__int64)ImpersonationLevel);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitBlockList, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(p_WaitBlockList, v11, (ULONG_PTR)p_WaitBlockList, v12);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) != 0 )
  {
    v13 = Thread[1].WaitBlock[1].Thread;
    if ( v13 )
    {
      *CopyOnOpen = 0;
    }
    else
    {
      v13 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
      *CopyOnOpen = (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x100) != 0;
    }
    ObfReferenceObject(v13);
    *ImpersonationLevel = Thread[1].SystemCallNumber & 3;
    *EffectiveOnly = (Thread[1].SystemCallNumber & 4) != 0;
  }
  else
  {
    v13 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitBlockList, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)p_WaitBlockList);
  KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
  v14 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v13;
}
