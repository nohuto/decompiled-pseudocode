/*
 * XREFs of IopCreateSecurityCheck @ 0x1400EA430
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeUnlockSubjectContext @ 0x140470920 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1404A3E30 (SeAppendPrivileges.c)
 *     SeOpenObjectAuditAlarm @ 0x1404B2E1C (SeOpenObjectAuditAlarm.c)
 */

BOOLEAN __fastcall IopCreateSecurityCheck(
        __int64 a1,
        void *a2,
        struct _ACCESS_STATE *a3,
        ACCESS_MASK a4,
        PPRIVILEGE_SET Privileges,
        PACCESS_MASK GrantedAccess,
        PUNICODE_STRING AbsoluteObjectName,
        PUNICODE_STRING ObjectTypeName,
        __int64 AccessStatus,
        char a10)
{
  __int64 v10; // r15
  PACCESS_MASK v15; // r14
  BOOLEAN v16; // bl

  v10 = AccessStatus;
  --*(_WORD *)(AccessStatus + 484);
  ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  v15 = GrantedAccess;
  v16 = SeAccessCheck(
          *(PSECURITY_DESCRIPTOR *)(a1 + 272),
          &a3->SubjectSecurityContext,
          1u,
          a4,
          0,
          &Privileges,
          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
          1,
          GrantedAccess,
          (PNTSTATUS)&AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    ExFreePoolWithTag(Privileges, 0);
  }
  if ( a10 && v16 )
  {
    a3->PreviouslyGrantedAccess |= *v15;
    a3->RemainingDesiredAccess &= ~(*v15 | 0x2000000);
  }
  if ( a2 )
    SeOpenObjectAuditAlarm(
      ObjectTypeName,
      a2,
      AbsoluteObjectName,
      *(PSECURITY_DESCRIPTOR *)(a1 + 272),
      a3,
      0,
      v16,
      1,
      &a3->GenerateOnClose);
  SeUnlockSubjectContext(&a3->SubjectSecurityContext);
  ExReleaseResourceLite(&IopSecurityResource);
  KiLeaveCriticalRegionUnsafe(v10);
  return v16;
}
