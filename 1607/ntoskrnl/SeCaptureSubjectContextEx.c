/*
 * XREFs of SeCaptureSubjectContextEx @ 0x14041F830
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14010FFEC (ExCpuSetResourceManagerAccessCheck.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404007A0 (AlpcpCheckConnectionSecurity.c)
 *     SeCreateAccessState @ 0x1404063B0 (SeCreateAccessState.c)
 *     ObInsertObjectEx @ 0x14041EF00 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x14041F410 (PsOpenProcess.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140477960 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140478794 (ObpCaptureBoundaryDescriptor.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14048ECA4 (EtwpCheckProviderLoggingAccess.c)
 *     SeCreateAccessStateEx @ 0x1404D339C (SeCreateAccessStateEx.c)
 *     ExpCheckIRTimerAccess @ 0x1404EE310 (ExpCheckIRTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x140702DE8 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F760 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     PspUnlockProcessShared @ 0x1400C9C44 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C9C88 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400D1534 (ObFastReferenceObjectLocked.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // rsi
  _QWORD *v7; // rsi
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *p_WaitBlockList; // r15
  __int64 v10; // rsi
  void *v11; // r14
  struct _KTHREAD *v12; // rdi

  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Blink;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
      v10 = KeAbPreAcquire((ULONG_PTR)&Thread[1].WaitBlockList, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(p_WaitBlockList, v10, (ULONG_PTR)p_WaitBlockList);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v11 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v11);
        SubjectContext->ImpersonationLevel = Thread[1].SystemCallNumber & 3;
      }
      else
      {
        v11 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)p_WaitBlockList);
      KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v6 = v11;
    }
    else
    {
      v6 = 0LL;
    }
    SubjectContext->ClientToken = v6;
  }
  else
  {
    SubjectContext->ClientToken = 0LL;
  }
  v7 = (_QWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v7 )
  {
    v12 = KeGetCurrentThread();
    PspLockProcessShared((__int64)Process, (__int64)v12);
    v7 = (_QWORD *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
    PspUnlockProcessShared((__int64)Process, (__int64)v12);
  }
  SubjectContext->PrimaryToken = v7;
  if ( SeTokenLeakTracking )
  {
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}
