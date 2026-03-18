/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x14048A7F4
 * Callers:
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A5C20 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14015B480 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x14015B620 (ZwDeleteWnfStateName.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObpGetObjectSecurity @ 0x140406CE0 (ObpGetObjectSecurity.c)
 *     PsReferenceEffectiveToken @ 0x1404124C0 (PsReferenceEffectiveToken.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140413E70 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140413ED0 (RtlCreateSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x1404206A8 (ObReleaseObjectSecurity.c)
 *     RtlCreateAcl @ 0x140420AB8 (RtlCreateAcl.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140468674 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140468EB0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140469924 (PspUnlockJobConditionally.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140489DD8 (RtlGetOwnerSecurityDescriptor.c)
 *     PspComputeReportWakeFilter @ 0x140489E14 (PspComputeReportWakeFilter.c)
 *     PspDispatchWakeNotification @ 0x14048A150 (PspDispatchWakeNotification.c)
 *     PspLockRootJobExclusive @ 0x14048AB04 (PspLockRootJobExclusive.c)
 *     RtlAddAccessAllowedAce @ 0x14048D14C (RtlAddAccessAllowedAce.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  _DWORD *v3; // r12
  char v4; // r13
  bool v5; // zf
  char v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  int ObjectSecurity; // edi
  PSECURITY_DESCRIPTOR v15; // r12
  void *v16; // r14
  PSID *v17; // r14
  ACL *PoolWithTag; // rax
  ACL *v19; // rdi
  _QWORD *v20; // rcx
  BOOLEAN MemoryAllocated; // [rsp+40h] [rbp-59h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+41h] [rbp-58h] BYREF
  bool v23; // [rsp+42h] [rbp-57h] BYREF
  ULONG AclLength[2]; // [rsp+48h] [rbp-51h] BYREF
  int v25; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v26; // [rsp+58h] [rbp-41h] BYREF
  PSID Owner; // [rsp+60h] [rbp-39h] BYREF
  PACL Acl; // [rsp+68h] [rbp-31h]
  int v29; // [rsp+70h] [rbp-29h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-21h] BYREF
  PVOID TokenInformation; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v32[40]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+17h] BYREF

  v3 = 0LL;
  v4 = 0;
  v26 = 0LL;
  v5 = (*(_DWORD *)(a2 + 1304) & 0x800) == 0;
  v33 = 0LL;
  if ( !v5 )
  {
    v9 = 1;
    PspLockRootJobExclusive(a2, a1, AclLength);
    v10 = *(_QWORD *)AclLength;
    if ( a2 != *(_QWORD *)AclLength )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(*(_QWORD *)AclLength + 56LL));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
    goto LABEL_4;
  }
  ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated, 0);
  if ( ObjectSecurity < 0 )
    return (unsigned int)ObjectSecurity;
  v15 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    ObjectSecurity = -1073741790;
LABEL_25:
    ObReleaseObjectSecurity(v15, MemoryAllocated);
    return (unsigned int)ObjectSecurity;
  }
  ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v16 = PsReferenceEffectiveToken(a1, &v25, &v23, &v29, 0LL);
  ObjectSecurity = SeQueryInformationToken(v16, TokenUser, &TokenInformation);
  if ( v25 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 856LL), (unsigned __int64)v16);
  }
  else if ( v16 )
  {
    ObfDereferenceObject(v16);
  }
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v17 = (PSID *)TokenInformation;
  AclLength[0] = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, AclLength[0], 0x66577350u);
  Acl = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_24;
  RtlCreateAcl(PoolWithTag, AclLength[0], 2u);
  v19 = Acl;
  RtlAddAccessAllowedAce(Acl, 2u, 0x80000000, Owner);
  RtlAddAccessAllowedAce(v19, 2u, 0x80000000, *v17);
  RtlCreateSecurityDescriptor(v32, 1u);
  RtlSetDaclSecurityDescriptor(v32, 1u, v19, 0);
  ObjectSecurity = ZwCreateWnfStateName((__int64)&v33, 3LL, 4LL);
  ExFreePoolWithTag(Acl, 0x66577350u);
  if ( ObjectSecurity < 0 )
  {
LABEL_24:
    ExFreePoolWithTag(v17, 0);
    goto LABEL_25;
  }
  v9 = 0;
  PspLockRootJobExclusive(a2, a1, AclLength);
  if ( (*(_DWORD *)(a2 + 1304) & 0x800) != 0 )
  {
    v10 = *(_QWORD *)AclLength;
    v4 = 1;
    v3 = v26;
  }
  else
  {
    *(_QWORD *)(a2 + 880) = v33;
    v3 = &v26;
    PspComputeReportWakeFilter((_DWORD *)a2, (__int64)&v26, (_QWORD *)(a2 + 936), 0);
    PspEnumJobsAndProcessesInJobHierarchy(v20, 0, (int)PspEnableWakeCounters, (int)PspEnableProcessWakeCounters, 0LL, 2);
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 1304), 0xBu);
    _InterlockedIncrement64(&PspJobTimeLimitsRequest);
    v10 = *(_QWORD *)AclLength;
  }
LABEL_4:
  *a3 = *(_OWORD *)(a2 + 880);
  a3[1] = *(_OWORD *)(a2 + 896);
  a3[2] = *(_OWORD *)(a2 + 912);
  if ( v9 )
    PspUnlockJobConditionally(a2, AclLength);
  PspUnlockJob(v10, a1);
  if ( v4 )
  {
    ZwDeleteWnfStateName((__int64)&v33, v11, v12);
  }
  else if ( !v9 )
  {
    PspDispatchWakeNotification((PVOID)a2, v3, (__int64)a3);
  }
  return 0LL;
}
