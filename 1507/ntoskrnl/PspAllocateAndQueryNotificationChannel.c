/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x1404156FC
 * Callers:
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExConvertExclusiveToSharedLite @ 0x140103870 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x140180790 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x140180930 (ZwDeleteWnfStateName.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PspComputeReportWakeFilter @ 0x140411C34 (PspComputeReportWakeFilter.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     PspSendWakeNotification @ 0x140417AA0 (PspSendWakeNotification.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140467694 (RtlGetOwnerSecurityDescriptor.c)
 *     PsReferenceEffectiveToken @ 0x140481AE0 (PsReferenceEffectiveToken.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReleaseObjectSecurity @ 0x140482AA4 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1404CFBCC (ObpGetObjectSecurity.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  bool v3; // zf
  char v7; // r15
  _QWORD *v8; // r12
  char v9; // r14
  __int64 i; // rax
  PACL v11; // rsi
  int v12; // ecx
  PACL *p_Acl; // rax
  __int64 v14; // r8
  __int16 v15; // ax
  int ObjectSecurity; // esi
  PSECURITY_DESCRIPTOR v18; // r15
  void *v19; // r14
  PSID *v20; // r14
  ACL *PoolWithTag; // rax
  ACL *v22; // rsi
  int v23; // ecx
  unsigned int v24; // edi
  _QWORD *v25; // rsi
  char v26; // al
  ULONG AclLength[2]; // [rsp+40h] [rbp-59h]
  ULONG AclLengtha; // [rsp+40h] [rbp-59h]
  ULONG AclLengthb[2]; // [rsp+40h] [rbp-59h]
  BOOLEAN MemoryAllocated; // [rsp+48h] [rbp-51h] BYREF
  char v31; // [rsp+49h] [rbp-50h]
  char v32; // [rsp+4Ah] [rbp-4Fh] BYREF
  BOOLEAN OwnerDefaulted[5]; // [rsp+4Bh] [rbp-4Eh] BYREF
  PACL Acl; // [rsp+50h] [rbp-49h] BYREF
  int v35; // [rsp+58h] [rbp-41h] BYREF
  PSID Owner; // [rsp+60h] [rbp-39h] BYREF
  char v37; // [rsp+68h] [rbp-31h] BYREF
  PVOID TokenInformation; // [rsp+70h] [rbp-29h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v40[8]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v41[40]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v42; // [rsp+B0h] [rbp+17h] BYREF

  v3 = (*(_DWORD *)(a2 + 1296) & 0x800) == 0;
  v31 = 0;
  v42 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( v3 )
  {
    ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated, 0LL);
    if ( ObjectSecurity >= 0 )
    {
      v18 = SecurityDescriptor;
      if ( SecurityDescriptor )
      {
        ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, OwnerDefaulted);
        if ( ObjectSecurity >= 0 )
        {
          v19 = (void *)PsReferenceEffectiveToken(a1, (unsigned int)&v35, (unsigned int)&v32, (unsigned int)&v37, 0LL);
          ObjectSecurity = SeQueryInformationToken(v19, TokenUser, &TokenInformation);
          if ( v35 == 1 )
          {
            ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 856LL), (unsigned __int64)v19);
          }
          else if ( v19 )
          {
            ObfDereferenceObject(v19);
          }
          if ( ObjectSecurity >= 0 )
          {
            v20 = (PSID *)TokenInformation;
            AclLengtha = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL))
                       + 48;
            PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, AclLengtha, 0x66577350u);
            Acl = PoolWithTag;
            if ( PoolWithTag )
            {
              RtlCreateAcl(PoolWithTag, AclLengtha, 2u);
              v22 = Acl;
              RtlAddAccessAllowedAce(Acl, 2u, 0x80000000, Owner);
              RtlAddAccessAllowedAce(v22, 2u, 0x80000000, *v20);
              RtlCreateSecurityDescriptor(v41, 1u);
              RtlSetDaclSecurityDescriptor(v41, 1u, v22, 0);
              ObjectSecurity = ZwCreateWnfStateName((__int64)&v42, 3LL, 0LL);
              ExFreePoolWithTag(Acl, 0x66577350u);
              if ( ObjectSecurity >= 0 )
              {
                v9 = 0;
                if ( a1 )
                  --*(_WORD *)(a1 + 486);
                while ( 1 )
                {
                  *(_QWORD *)AclLengthb = *(_QWORD *)(a2 + 1072);
                  ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)AclLengthb + 56LL), 1u);
                  if ( *(_QWORD *)AclLengthb == *(_QWORD *)(a2 + 1072) )
                    break;
                  ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)AclLengthb + 56LL));
                }
                v11 = *(PACL *)AclLengthb;
                v3 = (*(_DWORD *)(a2 + 1296) & 0x800) == 0;
                Acl = *(PACL *)AclLengthb;
                if ( v3 )
                {
                  *(_QWORD *)(a2 + 888) = v42;
                  v8 = v40;
                  PspComputeReportWakeFilter((_DWORD *)a2, (__int64)v40, (_QWORD *)(a2 + 944), 0);
                  PspEnumJobsAndProcessesInJobHierarchy(
                    v23,
                    0,
                    (unsigned int)PspEnableWakeCounters,
                    (unsigned int)PspEnableProcessWakeCounters,
                    0LL,
                    2);
                  _interlockedbittestandset((volatile signed __int32 *)(a2 + 1296), 0xBu);
                  _InterlockedIncrement64(&PspJobTimeLimitsRequest);
                  v11 = Acl;
                  v7 = v31;
                }
                else
                {
                  v7 = 1;
                }
                goto LABEL_8;
              }
            }
            ExFreePoolWithTag(v20, 0);
          }
        }
      }
      else
      {
        ObjectSecurity = -1073741790;
      }
      ObReleaseObjectSecurity(v18, MemoryAllocated);
    }
    return (unsigned int)ObjectSecurity;
  }
  v9 = 1;
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  for ( i = *(_QWORD *)(a2 + 1072); ; i = *(_QWORD *)(a2 + 1072) )
  {
    *(_QWORD *)AclLength = i;
    ExAcquireResourceExclusiveLite((PERESOURCE)(i + 56), 1u);
    if ( *(_QWORD *)AclLength == *(_QWORD *)(a2 + 1072) )
      break;
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)AclLength + 56LL));
  }
  Acl = *(PACL *)AclLength;
  v11 = *(PACL *)AclLength;
  if ( a2 != *(_QWORD *)AclLength )
  {
    ExConvertExclusiveToSharedLite((PERESOURCE)(*(_QWORD *)AclLength + 56LL));
    ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
  }
LABEL_8:
  *a3 = *(_OWORD *)(a2 + 888);
  a3[1] = *(_OWORD *)(a2 + 904);
  a3[2] = *(_OWORD *)(a2 + 920);
  if ( v9 )
  {
    v12 = 0;
    p_Acl = &Acl;
    while ( (PACL)a2 != *p_Acl )
    {
      ++v12;
      ++p_Acl;
      if ( v12 )
      {
        ExReleaseResourceLite((PERESOURCE)(a2 + 56));
        break;
      }
    }
  }
  ExReleaseResourceLite((PERESOURCE)&v11[7]);
  if ( a1 )
  {
    v15 = *(_WORD *)(a1 + 486) + 1;
    *(_WORD *)(a1 + 486) = v15;
    if ( !v15 && *(_QWORD *)(a1 + 152) != a1 + 152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v7 )
  {
    ZwDeleteWnfStateName((__int64)&v42, 0LL, v14);
  }
  else if ( !v9 && *v8 )
  {
    v24 = 0;
    v25 = (_QWORD *)a3 + 1;
    do
    {
      v26 = 0;
      if ( *v25 )
        v26 = 3;
      if ( (unsigned __int8)PspSendWakeNotification((PVOID)a2, v26) )
        break;
      ++v24;
      ++v25;
    }
    while ( v24 < 5 );
  }
  return 0LL;
}
