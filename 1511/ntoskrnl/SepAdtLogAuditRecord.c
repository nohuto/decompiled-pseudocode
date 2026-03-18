/*
 * XREFs of SepAdtLogAuditRecord @ 0x14013C4E0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x14001B500 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404789C0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140478A74 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeAuditBootConfiguration @ 0x14053CB28 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x14053D024 (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x14054A524 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14064E43C (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14064E610 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14064E7A8 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x14064ED10 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14064EE84 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14064F034 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14064F278 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14064F5A4 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14064F7B4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14064FA00 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14064FAEC (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14064FCDC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14064FF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1406507B8 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140650A04 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140650CA8 (SepAdtStagingEvent.c)
 *     SepAdtTokenRightAdjusted @ 0x1406511B4 (SepAdtTokenRightAdjusted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     SepRmDispatchDataToLsa @ 0x1400D513C (SepRmDispatchDataToLsa.c)
 *     SepQueueWorkItem @ 0x1400D52DC (SepQueueWorkItem.c)
 *     SepAdtMarshallAuditRecord @ 0x14013C63C (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x140201890 (SepAuditFailedRaisedIrql.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepAdtLogAuditFailureEvent @ 0x14064FAEC (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // ebp
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rax
  void *ServerSiloForSilo; // rax
  void *v9; // rdi
  PVOID *v10; // r14
  int v11; // ebp
  unsigned int v12; // ecx
  void *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  _BYTE v17[8]; // [rsp+20h] [rbp-58h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v18; // [rsp+28h] [rbp-50h] BYREF

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
    if ( CurrentIrql == 2 )
    {
      v9 = 0LL;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v7 = PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
      ServerSiloForSilo = (void *)PspGetServerSiloForSilo(v7);
      v9 = ServerSiloForSilo;
      if ( ServerSiloForSilo )
        ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
    }
    v10 = (PVOID *)(v5 + 24);
    *(_QWORD *)(v5 + 56) = v9;
    v11 = SepAdtMarshallAuditRecord(Src);
    if ( v11 < 0 )
    {
      v16 = *(void **)(v5 + 56);
      if ( v16 )
        ObfDereferenceObject(v16);
      ExFreePoolWithTag((PVOID)v5, 0);
      SepAdtLastAuditFailStatus = v11;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      if ( Src[1] == 521 )
        goto LABEL_14;
      v15 = (unsigned int)v11;
      goto LABEL_33;
    }
    if ( SepRmAuditingEnabled || (*((_DWORD *)*v10 + 5) & 2) == 0 )
    {
      v12 = *((_DWORD *)*v10 + 3);
      *(_DWORD *)(v5 + 36) = v12;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v12 <= 0x1D0 )
        {
          KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)&v18);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess(&v18, 0LL);
        }
        goto LABEL_14;
      }
      v17[0] = 0;
      if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v17) )
        goto LABEL_14;
      v14 = *(void **)(v5 + 56);
      if ( v14 )
        ObfDereferenceObject(v14);
      ExFreePoolWithTag(*v10, 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v17[0] )
        goto LABEL_14;
      v15 = 3221225473LL;
LABEL_33:
      SepAuditFailedRaisedIrql(v15);
LABEL_14:
      if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    v13 = *(void **)(v5 + 56);
    if ( v13 )
      ObfDereferenceObject(v13);
    ExFreePoolWithTag(*v10, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
