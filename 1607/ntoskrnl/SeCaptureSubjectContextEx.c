/*
 * XREFs of SeCaptureSubjectContextEx @ 0x14041E6F0
 * Callers:
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140110550 (ExCpuSetResourceManagerAccessCheck.c)
 *     AlpcpCheckConnectionSecurity @ 0x1403FF660 (AlpcpCheckConnectionSecurity.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x14041E2D0 (PsOpenProcess.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140476830 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140477664 (ObpCaptureBoundaryDescriptor.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14048F734 (EtwpCheckProviderLoggingAccess.c)
 *     SeCreateAccessStateEx @ 0x1404B6E3C (SeCreateAccessStateEx.c)
 *     ExpCheckIRTimerAccess @ 0x1404D03D8 (ExpCheckIRTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x140702E18 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
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
