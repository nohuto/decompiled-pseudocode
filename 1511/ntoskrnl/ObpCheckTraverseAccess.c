/*
 * XREFs of ObpCheckTraverseAccess @ 0x14062E1F0
 * Callers:
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 * Callees:
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     SeFastTraverseCheck @ 0x1402003E8 (SeFastTraverseCheck.c)
 *     ObReleaseObjectSecurity @ 0x140420AB8 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140420EA0 (ObpGetObjectSecurity.c)
 *     SeUnlockSubjectContext @ 0x140470920 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1404A3E30 (SeAppendPrivileges.c)
 */

char __fastcall ObpCheckTraverseAccess(
        __int64 a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        BOOLEAN a4,
        KPROCESSOR_MODE a5,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // bl
  __int64 v8; // rsi
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v11; // al
  struct _PRIVILEGE_SET *v12; // rsi
  char v13; // bl
  PPRIVILEGE_SET Privileges; // [rsp+50h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+98h] [rbp+20h] BYREF

  MemoryAllocated = a4;
  AccessMode = a5;
  GrantedAccess = 0;
  Privileges = 0LL;
  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, a5);
  if ( ObjectSecurity >= 0 )
  {
    if ( SeFastTraverseCheck((__int64)SecurityDescriptor, (__int64)a3, 2) )
    {
      v13 = 1;
    }
    else
    {
      SeLockSubjectContext(&a3->SubjectSecurityContext);
      v11 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              2u,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v8 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      v12 = Privileges;
      v13 = v11;
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        MiDeleteSubsection(v12);
      }
      SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    }
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return v13;
  }
  else
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
}
