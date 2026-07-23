/*
 * XREFs of ObCheckCreateObjectAccess @ 0x140402FEC
 * Callers:
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 * Callees:
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     ObpGetObjectSecurity @ 0x140405BA0 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x14041F568 (ObReleaseObjectSecurity.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1404ACCCC (SeAppendPrivileges.c)
 */

char __fastcall ObCheckCreateObjectAccess(
        __int64 a1,
        ACCESS_MASK a2,
        struct _ACCESS_STATE *a3,
        __int64 a4,
        __int64 a5,
        KPROCESSOR_MODE a6,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // di
  __int64 v10; // r14
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v12; // al
  struct _PRIVILEGE_SET *v13; // rsi
  char v14; // di
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+60h] [rbp-28h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+90h] [rbp+8h] BYREF

  AccessMode = a6;
  GrantedAccess = 0;
  Privileges = 0LL;
  LOBYTE(a4) = a6;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  ObjectSecurity = ObpGetObjectSecurity(a1, SecurityDescriptor, &MemoryAllocated, a4);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext(&a3->SubjectSecurityContext);
    if ( SecurityDescriptor[0] )
    {
      v12 = SeAccessCheck(
              SecurityDescriptor[0],
              &a3->SubjectSecurityContext,
              1u,
              a2,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v10 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      v13 = Privileges;
      v14 = v12;
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        MiDeleteSubsection(v13);
      }
    }
    else
    {
      v14 = 1;
    }
    SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    ObReleaseObjectSecurity(SecurityDescriptor[0], MemoryAllocated);
    return v14;
  }
}
