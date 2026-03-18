/*
 * XREFs of ObCheckCreateObjectAccess @ 0x14046E3E0
 * Callers:
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 * Callees:
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     ObReleaseObjectSecurity @ 0x140420AB8 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140420EA0 (ObpGetObjectSecurity.c)
 *     SeUnlockSubjectContext @ 0x140470920 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1404A3E30 (SeAppendPrivileges.c)
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
  KPROCESSOR_MODE AccessMode; // si
  __int64 v10; // r15
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v12; // al
  struct _PRIVILEGE_SET *v13; // rbp
  char v14; // si
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-30h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-28h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+90h] [rbp+8h] BYREF

  AccessMode = a6;
  GrantedAccess = 0;
  Privileges = 0LL;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, a6);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext(&a3->SubjectSecurityContext);
    if ( SecurityDescriptor )
    {
      v12 = SeAccessCheck(
              SecurityDescriptor,
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
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return v14;
  }
}
