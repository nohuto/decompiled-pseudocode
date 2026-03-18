/*
 * XREFs of ObCheckObjectAccess @ 0x140405810
 * Callers:
 *     ObpGrantAccess @ 0x140405778 (ObpGrantAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x140062B10 (SeAccessCheck.c)
 *     MiDeleteSubsection @ 0x140087410 (MiDeleteSubsection.c)
 *     ObpGetObjectSecurity @ 0x140406CE0 (ObpGetObjectSecurity.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404070A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObReleaseObjectSecurity @ 0x1404206A8 (ObReleaseObjectSecurity.c)
 *     SeLockSubjectContext @ 0x14044DBB0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044DC10 (SeUnlockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1404C0F9C (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall ObCheckObjectAccess(
        char *Object,
        PACCESS_STATE AccessState,
        __int64 a3,
        __int64 a4,
        PNTSTATUS AccessStatus)
{
  char v5; // di
  unsigned __int64 v7; // r10
  KPROCESSOR_MODE AccessMode; // r14
  __int64 v10; // rsi
  int ObjectSecurity; // edx
  BOOLEAN v12; // si
  BOOLEAN result; // al
  ACCESS_MASK v14; // eax
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-10h] BYREF
  UNICODE_STRING *v18; // [rsp+68h] [rbp-8h]
  BOOLEAN MemoryAllocated; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  v7 = (unsigned __int8)*(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  GrantedAccess = 0;
  Privileges = 0LL;
  AccessMode = a4;
  SecurityDescriptor = 0LL;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  v18 = (UNICODE_STRING *)v10;
  ObjectSecurity = ObpGetObjectSecurity(Object, &SecurityDescriptor, &MemoryAllocated, a4);
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
          AccessMode,
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
  if ( AccessMode )
    SeOpenObjectAuditAlarmWithTransaction(
      v18 + 1,
      Object,
      0LL,
      SecurityDescriptor,
      AccessState,
      0,
      v12,
      AccessMode,
      0LL,
      &AccessState->GenerateOnClose);
  SeUnlockSubjectContext(&AccessState->SubjectSecurityContext);
  ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
  return v12;
}
