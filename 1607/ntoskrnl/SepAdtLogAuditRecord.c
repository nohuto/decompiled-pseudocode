/*
 * XREFs of SepAdtLogAuditRecord @ 0x1401458A0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x14007622C (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140413A18 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140413ACC (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14045F320 (SepAdtTokenRightAdjusted.c)
 *     SeAuditBootConfiguration @ 0x14056EE10 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x14056F30C (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x1405804E4 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D5EC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14068DBB8 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14068DD7C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14068DF14 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x14068E478 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14068E5F0 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14068E798 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14068E9CC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068ECE0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EEDC (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14068F110 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14068F1FC (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14068F3E8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14068FEA4 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406900F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14069037C (SepAdtStagingEvent.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetEffectiveServerSilo @ 0x140076708 (PsGetEffectiveServerSilo.c)
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     SepQueueWorkItem @ 0x1400AE184 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x1400AFB40 (SepRmDispatchDataToLsa.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     SepAdtMarshallAuditRecord @ 0x140145A18 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x14021B208 (SepAuditFailedRaisedIrql.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SepAdtLogAuditFailureEvent @ 0x14068F1FC (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // edi
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 JobSilo; // rax
  void *EffectiveServerSilo; // rax
  PVOID *v9; // r14
  int v10; // ebp
  unsigned int v11; // ecx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[48]; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = PagedPool;
  if ( CurrentIrql == 2 )
    v3 = NonPagedPoolNx;
  PoolWithTag = ExAllocatePoolWithTag(v3, 0x40uLL, 0x69416553u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[5] = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 0;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *((_DWORD *)PoolWithTag + 8) = 1;
    CurrentThread = KeGetCurrentThread();
    if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
      JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
    else
      JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
    EffectiveServerSilo = (void *)PsGetEffectiveServerSilo(JobSilo);
    *(_QWORD *)(v5 + 56) = EffectiveServerSilo;
    if ( EffectiveServerSilo )
      ObfReferenceObjectWithTag(EffectiveServerSilo, 0x69416553u);
    v9 = (PVOID *)(v5 + 24);
    v10 = SepAdtMarshallAuditRecord(Src);
    if ( v10 < 0 )
    {
      v15 = *(void **)(v5 + 56);
      if ( v15 )
        ObfDereferenceObjectWithTag(v15, 0x69416553u);
      ExFreePoolWithTag((PVOID)v5, 0);
      SepAdtLastAuditFailStatus = v10;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      if ( Src[1] == 521 )
        goto LABEL_15;
      v14 = (unsigned int)v10;
      goto LABEL_34;
    }
    if ( SepRmAuditingEnabled || (*((_DWORD *)*v9 + 5) & 2) == 0 )
    {
      v11 = *((_DWORD *)*v9 + 3);
      *(_DWORD *)(v5 + 36) = v11;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v11 <= 0x1D0 )
        {
          KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)v17);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
        }
        goto LABEL_15;
      }
      v16[0] = 0;
      if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v16) )
        goto LABEL_15;
      v13 = *(void **)(v5 + 56);
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x69416553u);
      ExFreePoolWithTag(*v9, 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v16[0] )
        goto LABEL_15;
      v14 = 3221225473LL;
LABEL_34:
      SepAuditFailedRaisedIrql(v14);
LABEL_15:
      if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    v12 = *(void **)(v5 + 56);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x69416553u);
    ExFreePoolWithTag(*v9, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
