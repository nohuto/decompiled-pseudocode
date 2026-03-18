/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x1404033B0
 * Callers:
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpDoAccessCheckOnKCB @ 0x1405E21C8 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAppendPrivileges @ 0x1404A3E30 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        GUID *a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        PNTSTATUS AccessStatus)
{
  __int64 v6; // rcx
  __int64 v10; // r14
  unsigned __int64 *v11; // rbp
  __int64 v12; // rbx
  unsigned int v13; // ebx
  __int64 v14; // rax
  void *v15; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v17; // rbx
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v19; // bp
  ACCESS_MASK v20; // eax
  PERESOURCE *ClientToken; // rcx
  __int64 *v22; // rsi
  signed __int64 v23; // rax
  __int64 v24; // rtt
  struct _KTHREAD *v26; // rax
  __int64 *v27; // rdi
  signed __int64 v28; // rax
  signed __int64 v29; // rbx
  __int64 v30; // rtt
  ACCESS_MASK PreviouslyGrantedAccess; // [rsp+20h] [rbp-78h]
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  int v33; // [rsp+54h] [rbp-44h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-40h] BYREF
  int v35; // [rsp+A0h] [rbp+8h] BYREF

  v35 = -1;
  v6 = Object[1];
  v33 = -1;
  if ( (*(_DWORD *)(v6 + 4) & 0x20000) != 0 )
  {
    *AccessStatus = -1073741444;
    return 0;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v6 + 32) + 8LL))(
            *(_QWORD *)(v6 + 32),
            *(unsigned int *)(v6 + 40),
            &v35);
    if ( v10 )
    {
      v11 = (unsigned __int64 *)(*(_QWORD *)(Object[1] + 32LL) + 2952LL);
      v12 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v11, v12, (ULONG_PTR)v11);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      v13 = *(_DWORD *)(v10 + 44);
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(Object[1] + 32LL) + 16LL))(
        *(_QWORD *)(Object[1] + 32LL),
        &v35);
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(Object[1] + 32LL) + 8LL))(
              *(_QWORD *)(Object[1] + 32LL),
              v13,
              &v33);
      if ( v14 )
      {
        v15 = (void *)(v14 + 20);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)a3->SubjectSecurityContext.PrimaryToken + 6), 1u);
        if ( a3->SubjectSecurityContext.ClientToken )
        {
          v26 = KeGetCurrentThread();
          --v26->KernelApcDisable;
          ExAcquireResourceSharedLite(*((PERESOURCE *)a3->SubjectSecurityContext.ClientToken + 6), 1u);
        }
        v17 = 0LL;
        RemainingDesiredAccess = a3->RemainingDesiredAccess;
        GrantedAccess = 0;
        PreviouslyGrantedAccess = a3->PreviouslyGrantedAccess;
        Privileges = 0LL;
        v19 = SeAccessCheck(
                v15,
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
          MiDeleteSubsection(Privileges);
        }
        if ( v19 )
        {
          v20 = GrantedAccess;
          a3->PreviouslyGrantedAccess |= GrantedAccess;
          a3->RemainingDesiredAccess &= ~(v20 | 0x2000000);
        }
        *((_WORD *)Object + 24) |= 2u;
        if ( a2 )
        {
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)CmKeyObjectType + 1,
            Object,
            0LL,
            v15,
            a3,
            0,
            v19,
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
            v15,
            a3,
            0,
            v19,
            a4,
            0LL,
            &a3->GenerateOnClose);
        }
        *((_WORD *)Object + 24) &= ~2u;
        ExReleaseResourceLite(*((PERESOURCE *)a3->SubjectSecurityContext.PrimaryToken + 6));
        KeLeaveCriticalRegion();
        ClientToken = (PERESOURCE *)a3->SubjectSecurityContext.ClientToken;
        if ( ClientToken )
        {
          ExReleaseResourceLite(ClientToken[6]);
          KeLeaveCriticalRegion();
        }
        v22 = (__int64 *)(*(_QWORD *)(Object[1] + 32LL) + 2952LL);
        _m_prefetchw(v22);
        v23 = *v22;
        if ( (*v22 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v17 = v23 - 16;
        if ( (v23 & 2) != 0 || (v24 = *v22, v24 != _InterlockedCompareExchange64(v22, v17, v23)) )
          ExfReleasePushLock(v22);
        KeAbPostRelease((ULONG_PTR)v22);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(Object[1] + 32LL) + 16LL))(
          *(_QWORD *)(Object[1] + 32LL),
          &v33);
        return v19;
      }
      else
      {
        v27 = (__int64 *)(*(_QWORD *)(Object[1] + 32LL) + 2952LL);
        _m_prefetchw(v27);
        v28 = *v27;
        if ( (*v27 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v29 = 0LL;
        else
          v29 = v28 - 16;
        if ( (v28 & 2) != 0 || (v30 = *v27, v30 != _InterlockedCompareExchange64(v27, v29, v28)) )
          ExfReleasePushLock(v27);
        KeAbPostRelease((ULONG_PTR)v27);
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
