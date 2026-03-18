/*
 * XREFs of SeCaptureSubjectContextEx @ 0x1404CA2C0
 * Callers:
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140133DD4 (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14046FBA0 (ObpCaptureBoundaryDescriptor.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     ExIsRestrictedCaller @ 0x1404CA200 (ExIsRestrictedCaller.c)
 *     SeCreateAccessState @ 0x1404CDC7C (SeCreateAccessState.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1404D525C (EtwpCheckProviderLoggingAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x14050BAF0 (AlpcpCheckConnectionSecurity.c)
 *     SeCreateAccessStateEx @ 0x14053E638 (SeCreateAccessStateEx.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054467C (ObpVerifyCreatorAccessCheck.c)
 *     ExpCheckIRTimerAccess @ 0x140557A34 (ExpCheckIRTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x1407378E4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  __int64 v3; // r9
  void *v7; // rbp
  unsigned __int64 *v8; // rdi
  void *v9; // rax
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *p_WaitBlockList; // r12
  __int64 v13; // rbp
  __int64 v14; // r9
  __int16 v15; // ax
  struct _KTHREAD *v16; // rbp
  unsigned __int64 *v17; // rsi
  __int64 v18; // r9
  __int64 v19; // r15
  void *v20; // rdi
  __int16 v21; // ax

  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Blink;
  if ( Thread )
  {
    if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
      v13 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0LL, v3);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(p_WaitBlockList, v13, (ULONG_PTR)p_WaitBlockList, v14);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) != 0 )
      {
        v7 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v7);
        SubjectContext->ImpersonationLevel = Thread[1].SystemCallNumber & 3;
      }
      else
      {
        v7 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)p_WaitBlockList);
      KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
      v15 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v15;
      if ( !v15
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v7 = 0LL;
    }
    SubjectContext->ClientToken = v7;
  }
  else
  {
    SubjectContext->ClientToken = 0LL;
  }
  v8 = &Process[1].Affinity.Bitmap[5];
  v9 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( v9 )
  {
    SubjectContext->PrimaryToken = v9;
  }
  else
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = (unsigned __int64 *)&Process[1];
    v19 = KeAbPreAcquire((ULONG_PTR)v17, 0LL, 0LL, v10);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v17, v19, (ULONG_PTR)v17, v18);
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    v20 = (void *)ObFastReferenceObjectLocked(v8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v17);
    KeAbPostRelease((ULONG_PTR)v17);
    v21 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    SubjectContext->PrimaryToken = v20;
  }
}
