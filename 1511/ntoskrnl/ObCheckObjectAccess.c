/*
 * XREFs of ObCheckObjectAccess @ 0x140470650
 * Callers:
 *     ObpGrantAccess @ 0x1404705B8 (ObpGrantAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     ObReleaseObjectSecurity @ 0x140420AB8 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140420EA0 (ObpGetObjectSecurity.c)
 *     SeUnlockSubjectContext @ 0x140470920 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAppendPrivileges @ 0x1404A3E30 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall ObCheckObjectAccess(
        char *Object,
        PACCESS_STATE AccessState,
        __int64 a3,
        char a4,
        PNTSTATUS AccessStatus)
{
  char v5; // di
  unsigned __int64 v7; // r10
  __int64 v10; // rbp
  int ObjectSecurity; // edx
  BOOLEAN v12; // bp
  BOOLEAN result; // al
  ACCESS_MASK v14; // eax
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-30h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-28h] BYREF
  UNICODE_STRING *v18; // [rsp+68h] [rbp-20h]
  BOOLEAN MemoryAllocated; // [rsp+90h] [rbp+8h] BYREF

  v5 = 0;
  v7 = (unsigned __int8)*(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  GrantedAccess = 0;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  v18 = (UNICODE_STRING *)v10;
  ObjectSecurity = ObpGetObjectSecurity((__int64)Object, &SecurityDescriptor, &MemoryAllocated, a4);
  if ( ObjectSecurity < 0 )
    goto LABEL_11;
  if ( !SecurityDescriptor )
  {
    AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
    AccessState->RemainingDesiredAccess = 0;
    v5 = 1;
LABEL_11:
    result = v5;
    *AccessStatus = ObjectSecurity;
    return result;
  }
  SeLockSubjectContext(&AccessState->SubjectSecurityContext);
  v12 = SeAccessCheck(
          SecurityDescriptor,
          &AccessState->SubjectSecurityContext,
          1u,
          AccessState->RemainingDesiredAccess,
          AccessState->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)(v10 + 76),
          a4,
          &GrantedAccess,
          AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(AccessState, Privileges);
    MiDeleteSubsection(Privileges);
  }
  if ( v12 )
  {
    v14 = GrantedAccess;
    AccessState->PreviouslyGrantedAccess |= GrantedAccess;
    AccessState->RemainingDesiredAccess &= ~(v14 | 0x2000000);
  }
  if ( a4 )
    SeOpenObjectAuditAlarmWithTransaction(
      v18 + 1,
      Object,
      0LL,
      SecurityDescriptor,
      AccessState,
      0,
      v12,
      a4,
      0LL,
      &AccessState->GenerateOnClose);
  SeUnlockSubjectContext(&AccessState->SubjectSecurityContext);
  ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
  return v12;
}
