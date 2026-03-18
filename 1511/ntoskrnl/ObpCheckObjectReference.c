/*
 * XREFs of ObpCheckObjectReference @ 0x1404707E4
 * Callers:
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x140420AB8 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140420EA0 (ObpGetObjectSecurity.c)
 *     SeUnlockSubjectContext @ 0x140470920 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
 *     SeObjectReferenceAuditAlarm @ 0x1404709B4 (SeObjectReferenceAuditAlarm.c)
 */

BOOLEAN __fastcall ObpCheckObjectReference(__int64 a1, __int64 a2, BOOLEAN a3, char a4, PNTSTATUS AccessStatus)
{
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
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+8h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+A0h] [rbp+18h] BYREF

  MemoryAllocated = a3;
  GrantedAccess = 0;
  v17 = 0LL;
  v7 = a1;
  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, a4);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    GenericMapping = (GENERIC_MAPPING *)(v8 + 76);
    v11 = SecurityDescriptor;
    v13 = SeAccessCheck(
            SecurityDescriptor,
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            1u,
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            &v17,
            GenericMapping,
            a4,
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
        a4);
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    ObReleaseObjectSecurity(v11, MemoryAllocated);
    return v13;
  }
}
