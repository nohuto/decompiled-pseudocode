/*
 * XREFs of IopCreateSecurityCheck @ 0x1400A9158
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 * Callees:
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
 *     SeAppendPrivileges @ 0x1404ACCCC (SeAppendPrivileges.c)
 *     SeOpenObjectAuditAlarm @ 0x1404BBECC (SeOpenObjectAuditAlarm.c)
 */

BOOLEAN __fastcall IopCreateSecurityCheck(
        __int64 a1,
        void *a2,
        struct _ACCESS_STATE *a3,
        int a4,
        NTSTATUS AccessStatus,
        PPRIVILEGE_SET Privileges,
        PACCESS_MASK GrantedAccess,
        PUNICODE_STRING AbsoluteObjectName,
        PUNICODE_STRING ObjectTypeName,
        __int64 a10,
        char a11)
{
  int v11; // ebx
  int v16; // eax
  __int64 v17; // rsi
  PACCESS_MASK v18; // r14
  BOOLEAN v19; // al
  PPRIVILEGE_SET v20; // r13
  BOOLEAN v21; // bp
  __int64 v22; // rcx
  __int16 v23; // ax

  v11 = 0;
  if ( AccessStatus != 1 )
  {
    v16 = *(_DWORD *)(a1 + 52);
    if ( (v16 & 0x40001) != 0 || IopRequireDeviceAccessCheck && (v16 & 0x100000) != 0 )
      v11 = 2;
  }
  v17 = a10;
  --*(_WORD *)(a10 + 484);
  ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  v18 = GrantedAccess;
  v19 = SeAccessCheck(
          *(PSECURITY_DESCRIPTOR *)(a1 + 272),
          &a3->SubjectSecurityContext,
          1u,
          a4 | v11,
          0,
          &Privileges,
          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
          1,
          GrantedAccess,
          &AccessStatus);
  v20 = Privileges;
  v21 = v19;
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    ExFreePoolWithTag(v20, 0);
  }
  if ( v11 && (v11 & a4) == 0 )
    *v18 &= ~v11;
  if ( a11 && v21 )
  {
    a3->PreviouslyGrantedAccess |= *v18;
    a3->RemainingDesiredAccess &= ~(*v18 | 0x2000000);
  }
  if ( a2 )
    SeOpenObjectAuditAlarm(
      ObjectTypeName,
      a2,
      AbsoluteObjectName,
      *(PSECURITY_DESCRIPTOR *)(a1 + 272),
      a3,
      0,
      v21,
      1,
      &a3->GenerateOnClose);
  SeUnlockSubjectContext(&a3->SubjectSecurityContext);
  ExReleaseResourceLite(&IopSecurityResource);
  v23 = *(_WORD *)(v17 + 484) + 1;
  *(_WORD *)(v17 + 484) = v23;
  if ( !v23 && *(_QWORD *)(v17 + 152) != v17 + 152 && !*(_WORD *)(v17 + 486) )
  {
    if ( KeGetCurrentIrql() )
    {
      LOBYTE(v22) = 1;
      KeGetCurrentThread()->ApcState.KernelApcPending = 1;
      HalRequestSoftwareInterrupt(v22);
    }
    else
    {
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(0LL);
    }
  }
  return v21;
}
