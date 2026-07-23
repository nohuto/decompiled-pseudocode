/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x140602034
 * Callers:
 *     CmpVEPerformOpenAccessCheck @ 0x1404BEE8C (CmpVEPerformOpenAccessCheck.c)
 *     CmpDoAccessCheckOnKCB @ 0x140600B7C (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpGetSecurityDescriptorForKcbStackEx @ 0x1401B5000 (CmpGetSecurityDescriptorForKcbStackEx.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1404ACCCC (SeAppendPrivileges.c)
 *     SeOpenObjectAuditAlarm @ 0x1404BBECC (SeOpenObjectAuditAlarm.c)
 */

BOOLEAN __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        NTSTATUS *a5)
{
  NTSTATUS v9; // esi
  BOOLEAN v10; // r14
  void *SecurityDescriptorForKcbStack; // r13
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v13; // al
  struct _PRIVILEGE_SET *v14; // rsi
  ACCESS_MASK v15; // eax
  UNICODE_STRING *v16; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *v17; // rcx
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-11h] BYREF
  NTSTATUS AccessStatus; // [rsp+5Ch] [rbp-Dh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-9h] BYREF
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-1h]
  _WORD v23[20]; // [rsp+70h] [rbp+7h] BYREF

  memset(v23, 0, 0x20uLL);
  v23[1] = -1;
  if ( CmpIsKeyDeletedForKeyBody((__int64)Object, a2) )
  {
    v9 = -1073741444;
LABEL_3:
    v10 = 0;
    goto LABEL_13;
  }
  AccessStatus = CmpStartKcbStackForTopLayerKcb((__int64)v23, Object[1]);
  v9 = AccessStatus;
  if ( AccessStatus < 0 )
    goto LABEL_3;
  SecurityDescriptorForKcbStack = (void *)CmpGetSecurityDescriptorForKcbStackEx();
  SubjectContext = &a3->SubjectSecurityContext;
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  RemainingDesiredAccess = a3->RemainingDesiredAccess;
  GrantedAccess = 0;
  Privileges = 0LL;
  v13 = SeAccessCheck(
          SecurityDescriptorForKcbStack,
          &a3->SubjectSecurityContext,
          1u,
          RemainingDesiredAccess,
          a3->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
          a4,
          &GrantedAccess,
          &AccessStatus);
  v14 = Privileges;
  v10 = v13;
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    MiDeleteSubsection(v14);
  }
  if ( v10 )
  {
    v15 = GrantedAccess;
    a3->PreviouslyGrantedAccess |= GrantedAccess;
    a3->RemainingDesiredAccess &= ~(v15 | 0x2000000);
  }
  *((_WORD *)Object + 24) |= 2u;
  v16 = (UNICODE_STRING *)(CmKeyObjectType + 2);
  if ( a2 )
    SeOpenObjectAuditAlarmWithTransaction(
      v16,
      Object,
      0LL,
      SecurityDescriptorForKcbStack,
      a3,
      0,
      v10,
      a4,
      (GUID *)(a2 + 88),
      &a3->GenerateOnClose);
  else
    SeOpenObjectAuditAlarm(v16, Object, 0LL, SecurityDescriptorForKcbStack, a3, 0, v10, a4, &a3->GenerateOnClose);
  v17 = SubjectContext;
  *((_WORD *)Object + 24) &= ~2u;
  SeUnlockSubjectContext(v17);
  v9 = AccessStatus;
LABEL_13:
  CmpCleanupKcbStack((__int64)v23);
  *a5 = v9;
  return v10;
}
