/*
 * XREFs of SeCaptureSubjectContextEx @ 0x140470510
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14010579C (ExCpuSetResourceManagerAccessCheck.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     AlpcpCheckConnectionSecurity @ 0x14046ACE4 (AlpcpCheckConnectionSecurity.c)
 *     SeCreateAccessStateEx @ 0x14046E4F4 (SeCreateAccessStateEx.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404AA488 (ObpCaptureBoundaryDescriptor.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1404AA73C (ObpVerifyCreatorAccessCheck.c)
 *     ExpCheckIRTimerAccess @ 0x1404C02DC (ExpCheckIRTimerAccess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1404CDDBC (EtwpCheckProviderLoggingAccess.c)
 *     VfUtilIsLocalSystem @ 0x1406B75F0 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     PsReferenceImpersonationTokenEx @ 0x140433F70 (PsReferenceImpersonationTokenEx.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v5; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  bool v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+58h] [rbp+10h] BYREF

  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Blink;
  if ( Thread )
    SubjectContext->ClientToken = PsReferenceImpersonationTokenEx(
                                    (__int64)Thread,
                                    0,
                                    &v8,
                                    &v7,
                                    (int *)&SubjectContext->ImpersonationLevel,
                                    0LL);
  else
    SubjectContext->ClientToken = 0LL;
  v5 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v5 )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessShared((__int64)Process, (__int64)CurrentThread);
    v5 = (void *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
    PspUnlockProcessShared((__int64)Process, (__int64)CurrentThread);
  }
  SubjectContext->PrimaryToken = v5;
}
