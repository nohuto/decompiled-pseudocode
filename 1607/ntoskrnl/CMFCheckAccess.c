/*
 * XREFs of CMFCheckAccess @ 0x1406B87B8
 * Callers:
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 * Callees:
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlMapGenericMask @ 0x1403FF7D0 (RtlMapGenericMask.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     SePrivilegeCheck @ 0x140414350 (SePrivilegeCheck.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1404ACCCC (SeAppendPrivileges.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B89D4 (CMFCreateSecurityDescriptor.c)
 */

__int64 __fastcall CMFCheckAccess(__int64 a1, ACCESS_MASK a2, KPROCESSOR_MODE a3)
{
  unsigned int v4; // ebx
  GENERIC_MAPPING *GenericMapping; // rdi
  ACCESS_MASK v6; // esi
  BOOLEAN v7; // r14
  BOOLEAN v8; // al
  struct _PRIVILEGE_SET *v9; // rbx
  ACCESS_MASK v10; // edi
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-B0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-ACh] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  ACCESS_MASK AccessMask; // [rsp+60h] [rbp-A0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-98h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+70h] [rbp-90h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v19[28]; // [rsp+130h] [rbp+30h] BYREF

  AccessMask = a2;
  if ( a1 )
  {
    GenericMapping = (GENERIC_MAPPING *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)]
                                       + 76);
    RtlMapGenericMask(&AccessMask, GenericMapping);
    if ( !CMFSecurityDescriptor )
    {
      P = 0LL;
      v4 = CMFCreateSecurityDescriptor(&P, GenericMapping);
      if ( (v4 & 0xC0000000) == 0xC0000000 )
        return v4;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSecurityDescriptor, (signed __int64)P, 0LL) )
        ExFreePoolWithTag(P, 0);
    }
    v6 = AccessMask;
    v4 = SeCreateAccessState(&AccessState, v19, AccessMask, GenericMapping);
    if ( (v4 & 0xC0000000) != 0xC0000000 )
    {
      SeLockSubjectContext(&AccessState.SubjectSecurityContext);
      RequiredPrivileges.Control = 0;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      P = (PVOID)18;
      RequiredPrivileges.Privilege[0].Luid = (LUID)18LL;
      RequiredPrivileges.PrivilegeCount = 1;
      v4 = 0;
      v7 = SePrivilegeCheck(&RequiredPrivileges, &AccessState.SubjectSecurityContext, a3);
      GrantedAccess = 0;
      AccessStatus = 0;
      if ( v7 )
      {
        v10 = v6;
      }
      else
      {
        Privileges = 0LL;
        v8 = SeAccessCheck(
               CMFSecurityDescriptor,
               &AccessState.SubjectSecurityContext,
               1u,
               v6,
               0,
               &Privileges,
               GenericMapping,
               a3,
               &GrantedAccess,
               &AccessStatus);
        v9 = Privileges;
        v7 = v8;
        if ( Privileges )
        {
          SeAppendPrivileges(&AccessState, Privileges);
          MiDeleteSubsection(v9);
        }
        v4 = AccessStatus;
        v10 = GrantedAccess;
      }
      SeUnlockSubjectContext(&AccessState.SubjectSecurityContext);
      if ( (v4 & 0xC0000000) != 0xC0000000 )
      {
        if ( !v7 || (~v10 & v6) != 0 )
          v4 = -1073741790;
        else
          v4 = 0;
      }
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&AccessState);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
