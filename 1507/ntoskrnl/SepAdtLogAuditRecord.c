/*
 * XREFs of SepAdtLogAuditRecord @ 0x140164DBC
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140111680 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140432E10 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtUserRightAdjusted @ 0x14046E0F4 (SepAdtUserRightAdjusted.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditBootConfiguration @ 0x1405A1EC8 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x1405C1B90 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1406D1A54 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1406D1BEC (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1406D1DA4 (SeAuditPlugAndPlay.c)
 *     SeAuditProcessExit @ 0x1406D1F2C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1406D20A0 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1406D2250 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1406D2494 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406D27C0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406D29D0 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x1406D2C1C (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x1406D2D08 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406D2EF8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1406D3128 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406D3374 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406D3618 (SepAdtStagingEvent.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     SepQueueWorkItem @ 0x140117380 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x140117760 (SepRmDispatchDataToLsa.c)
 *     SepAdtMarshallAuditRecord @ 0x140164F00 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x140250868 (SepAuditFailedRaisedIrql.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepAdtLogAuditFailureEvent @ 0x1406D2D08 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // esi
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rbx
  __int64 CurrentServerSilo; // rax
  PVOID *v7; // r14
  int v8; // ebp
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
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
    if ( CurrentIrql == 2 )
      CurrentServerSilo = 0LL;
    else
      CurrentServerSilo = PsGetCurrentServerSilo();
    v7 = (PVOID *)(v5 + 24);
    *(_QWORD *)(v5 + 56) = CurrentServerSilo;
    v8 = SepAdtMarshallAuditRecord(Src);
    if ( v8 < 0 )
    {
      v15 = *(void **)(v5 + 56);
      if ( v15 )
        ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      ExFreePoolWithTag((PVOID)v5, 0);
      SepAdtLastAuditFailStatus = v8;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      if ( Src[1] == 521 )
        goto LABEL_11;
      v14 = (unsigned int)v8;
    }
    else
    {
      if ( !SepRmAuditingEnabled && (*((_DWORD *)*v7 + 5) & 2) != 0 )
      {
        ExFreePoolWithTag(*v7, 0);
        ExFreePoolWithTag((PVOID)v5, 0);
        return;
      }
      v9 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v9;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v9 <= 0x1D0 )
        {
          KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)v17);
          SepRmDispatchDataToLsa(v5, v10, v11, v12);
          KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
        }
        goto LABEL_11;
      }
      v16[0] = 0;
      if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v16) )
        goto LABEL_11;
      v13 = *(void **)(v5 + 56);
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x746C6644u);
      ExFreePoolWithTag(*v7, 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v16[0] )
        goto LABEL_11;
      v14 = 3221225473LL;
    }
    SepAuditFailedRaisedIrql(v14);
LABEL_11:
    if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
      SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
    return;
  }
  if ( Src[1] != 521 )
    SepAuditFailedRaisedIrql(3221225626LL);
}
