/*
 * XREFs of ObpCheckObjectReference @ 0x1404CF854
 * Callers:
 *     ObReferenceObjectByName @ 0x1404CF06C (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x140482AA4 (ObReleaseObjectSecurity.c)
 *     SeUnlockSubjectContext @ 0x1404C52E0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1404C5390 (SeLockSubjectContext.c)
 *     ObpGetObjectSecurity @ 0x1404CFBCC (ObpGetObjectSecurity.c)
 *     SeObjectReferenceAuditAlarm @ 0x1404CFF94 (SeObjectReferenceAuditAlarm.c)
 */

BOOLEAN __fastcall ObpCheckObjectReference(__int64 a1, __int64 a2, BOOLEAN a3, __int64 a4, PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // bp
  int v7; // r14d
  __int64 v8; // rsi
  int ObjectSecurity; // eax
  int v10; // ecx
  BOOLEAN v11; // si
  ACCESS_MASK v12; // ecx
  BOOLEAN Privileges; // [rsp+28h] [rbp-50h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-28h] BYREF
  PPRIVILEGE_SET v16; // [rsp+58h] [rbp-20h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+80h] [rbp+8h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+90h] [rbp+18h] BYREF

  MemoryAllocated = a3;
  GrantedAccess = 0;
  v16 = 0LL;
  AccessMode = a4;
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
    v11 = SeAccessCheck(
            SecurityDescriptor,
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            1u,
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            &v16,
            (PGENERIC_MAPPING)(v8 + 76),
            AccessMode,
            &GrantedAccess,
            AccessStatus);
    if ( v11 )
    {
      v12 = GrantedAccess;
      *(_DWORD *)(a2 + 20) |= GrantedAccess;
      v10 = ~v12;
      *(_DWORD *)(a2 + 16) &= v10;
    }
    if ( SecurityDescriptor )
      SeObjectReferenceAuditAlarm(
        v10,
        v7,
        (int)SecurityDescriptor,
        a2 + 32,
        *(_DWORD *)(a2 + 16) | *(_DWORD *)(a2 + 20),
        Privileges,
        v11,
        AccessMode);
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return v11;
  }
}
