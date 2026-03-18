/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x1404C17F0
 * Callers:
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406583CC (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAppendPrivileges @ 0x14052D500 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        GUID *a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        PNTSTATUS AccessStatus)
{
  __int64 v6; // rcx
  __int64 v10; // r9
  __int64 v11; // r14
  unsigned __int64 *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v20; // rbx
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v22; // bp
  ACCESS_MASK v23; // eax
  __int64 v24; // rdx
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  PERESOURCE *ClientToken; // rcx
  __int64 *v28; // rsi
  signed __int64 v29; // rax
  __int64 v30; // rtt
  struct _KTHREAD *v32; // rax
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  __int64 *v35; // rdi
  signed __int64 v36; // rax
  signed __int64 v37; // rbx
  __int64 v38; // rtt
  ACCESS_MASK PreviouslyGrantedAccess; // [rsp+20h] [rbp-78h]
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  int v41; // [rsp+54h] [rbp-44h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-40h] BYREF
  int v43; // [rsp+A0h] [rbp+8h] BYREF

  v43 = -1;
  v6 = Object[1];
  v41 = -1;
  if ( (*(_DWORD *)(v6 + 4) & 0x20000) != 0 )
  {
    *AccessStatus = -1073741444;
    return 0;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v6 + 32) + 8LL))(
            *(_QWORD *)(v6 + 32),
            *(unsigned int *)(v6 + 40),
            &v43);
    if ( v11 )
    {
      v12 = (unsigned __int64 *)(*(_QWORD *)(Object[1] + 32LL) + 2952LL);
      v13 = KeAbPreAcquire((ULONG_PTR)v12, 0LL, 0LL, v10);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v12, v13, (ULONG_PTR)v12, v14);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v15 = *(_DWORD *)(v11 + 44);
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(Object[1] + 32LL) + 16LL))(
        *(_QWORD *)(Object[1] + 32LL),
        &v43);
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(Object[1] + 32LL) + 8LL))(
              *(_QWORD *)(Object[1] + 32LL),
              v15,
              &v41);
      if ( v16 )
      {
        v18 = (void *)(v16 + 20);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)a3->SubjectSecurityContext.PrimaryToken + 6), 1u);
        if ( a3->SubjectSecurityContext.ClientToken )
        {
          v32 = KeGetCurrentThread();
          --v32->KernelApcDisable;
          ExAcquireResourceSharedLite(*((PERESOURCE *)a3->SubjectSecurityContext.ClientToken + 6), 1u);
        }
        v20 = 0LL;
        RemainingDesiredAccess = a3->RemainingDesiredAccess;
        GrantedAccess = 0;
        PreviouslyGrantedAccess = a3->PreviouslyGrantedAccess;
        Privileges = 0LL;
        v22 = SeAccessCheck(
                v18,
                &a3->SubjectSecurityContext,
                1u,
                RemainingDesiredAccess,
                PreviouslyGrantedAccess,
                &Privileges,
                (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                a4,
                &GrantedAccess,
                AccessStatus);
        if ( Privileges )
        {
          SeAppendPrivileges(a3, Privileges);
          ExFreePoolEx(Privileges);
        }
        if ( v22 )
        {
          v23 = GrantedAccess;
          a3->PreviouslyGrantedAccess |= GrantedAccess;
          a3->RemainingDesiredAccess &= ~(v23 | 0x2000000);
        }
        *((_WORD *)Object + 24) |= 2u;
        if ( a2 )
        {
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)CmKeyObjectType + 1,
            Object,
            0LL,
            v18,
            a3,
            0,
            v22,
            a4,
            a2 + 5,
            &a3->GenerateOnClose);
        }
        else if ( a4 )
        {
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)CmKeyObjectType + 1,
            Object,
            0LL,
            v18,
            a3,
            0,
            v22,
            a4,
            0LL,
            &a3->GenerateOnClose);
        }
        *((_WORD *)Object + 24) &= ~2u;
        ExReleaseResourceLite(*((PERESOURCE *)a3->SubjectSecurityContext.PrimaryToken + 6));
        v25 = KeGetCurrentThread();
        v26 = v25->KernelApcDisable + 1;
        v25->KernelApcDisable = v26;
        if ( !v26
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
          && !v25->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ClientToken = (PERESOURCE *)a3->SubjectSecurityContext.ClientToken;
        if ( ClientToken )
        {
          ExReleaseResourceLite(ClientToken[6]);
          v33 = KeGetCurrentThread();
          v34 = v33->KernelApcDisable + 1;
          v33->KernelApcDisable = v34;
          if ( !v34
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
            && !v33->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        v28 = (__int64 *)(*(_QWORD *)(Object[1] + 32LL) + 2952LL);
        _m_prefetchw(v28);
        v29 = *v28;
        if ( (*v28 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v20 = v29 - 16;
        if ( (v29 & 2) != 0 || (v30 = *v28, v30 != _InterlockedCompareExchange64(v28, v20, v29)) )
          ExfReleasePushLock(v28, v24);
        KeAbPostRelease((ULONG_PTR)v28);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(Object[1] + 32LL) + 16LL))(
          *(_QWORD *)(Object[1] + 32LL),
          &v41);
        return v22;
      }
      else
      {
        v35 = (__int64 *)(*(_QWORD *)(Object[1] + 32LL) + 2952LL);
        _m_prefetchw(v35);
        v36 = *v35;
        if ( (*v35 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v37 = 0LL;
        else
          v37 = v36 - 16;
        if ( (v36 & 2) != 0 || (v38 = *v35, v38 != _InterlockedCompareExchange64(v35, v37, v36)) )
          ExfReleasePushLock(v35, v17);
        KeAbPostRelease((ULONG_PTR)v35);
        *AccessStatus = -1073741670;
        return 0;
      }
    }
    else
    {
      *AccessStatus = -1073741670;
      return 0;
    }
  }
}
