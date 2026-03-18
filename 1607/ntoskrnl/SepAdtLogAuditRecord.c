/*
 * XREFs of SepAdtLogAuditRecord @ 0x140145330
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1400761AC (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140414B58 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140414C0C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x140460450 (SepAdtTokenRightAdjusted.c)
 *     SeAuditBootConfiguration @ 0x14056E8D0 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x14056EDCC (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x140580038 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D508 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14068DAD4 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14068DC98 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14068DE30 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x14068E394 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14068E50C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14068E6B4 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14068E8E8 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068EBFC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EDF8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14068F02C (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14068F118 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14068F304 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F52C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14068FDC0 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14069000C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140690298 (SepAdtStagingEvent.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PsGetEffectiveServerSilo @ 0x140076688 (PsGetEffectiveServerSilo.c)
 *     PspGetJobSilo @ 0x140076728 (PspGetJobSilo.c)
 *     SepQueueWorkItem @ 0x1400AFFCC (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x1400B1C00 (SepRmDispatchDataToLsa.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     SepAdtMarshallAuditRecord @ 0x1401454A8 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x14021B3DC (SepAuditFailedRaisedIrql.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SepAdtLogAuditFailureEvent @ 0x14068F118 (SepAdtLogAuditFailureEvent.c)
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
