/*
 * XREFs of ObpCheckObjectReference @ 0x1404057B0
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140404AA0 (ObReferenceObjectByName.c)
 * Callees:
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     SeObjectReferenceAuditAlarm @ 0x1404058E0 (SeObjectReferenceAuditAlarm.c)
 *     ObpGetObjectSecurity @ 0x140405BA0 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x14041F568 (ObReleaseObjectSecurity.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
 */

BOOLEAN __fastcall ObpCheckObjectReference(__int64 a1, __int64 a2, BOOLEAN a3, __int64 a4, PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // r14
  int v7; // r15d
  __int64 v8; // rdi
  int ObjectSecurity; // eax
  GENERIC_MAPPING *GenericMapping; // rcx
  PSECURITY_DESCRIPTOR v11; // rdi
  int v12; // ecx
  BOOLEAN v13; // bp
  ACCESS_MASK v14; // ecx
  BOOLEAN Privileges; // [rsp+28h] [rbp-60h]
  PPRIVILEGE_SET v17; // [rsp+50h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[6]; // [rsp+58h] [rbp-30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+8h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+A0h] [rbp+18h] BYREF

  MemoryAllocated = a3;
  GrantedAccess = 0;
  v17 = 0LL;
  AccessMode = a4;
  v7 = a1;
  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  ObjectSecurity = ObpGetObjectSecurity(a1, SecurityDescriptor, &MemoryAllocated, a4);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    GenericMapping = (GENERIC_MAPPING *)(v8 + 76);
    v11 = SecurityDescriptor[0];
    v13 = SeAccessCheck(
            SecurityDescriptor[0],
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            1u,
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            &v17,
            GenericMapping,
            AccessMode,
            &GrantedAccess,
            AccessStatus);
    if ( v13 )
    {
      v14 = GrantedAccess;
      *(_DWORD *)(a2 + 20) |= GrantedAccess;
      v12 = ~v14;
      *(_DWORD *)(a2 + 16) &= v12;
    }
    if ( v11 )
      SeObjectReferenceAuditAlarm(
        v12,
        v7,
        (int)v11,
        a2 + 32,
        *(_DWORD *)(a2 + 16) | *(_DWORD *)(a2 + 20),
        Privileges,
        v13,
        AccessMode);
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    ObReleaseObjectSecurity(v11, MemoryAllocated);
    return v13;
  }
}
