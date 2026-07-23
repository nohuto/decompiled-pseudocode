/*
 * XREFs of NtSetUuidSeed @ 0x1405B9554
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     RtlLengthSid @ 0x1400CE984 (RtlLengthSid.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     RtlpAddKnownAce @ 0x1404C94D0 (RtlpAddKnownAce.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x1405447D8 (RtlInitializeSid.c)
 */

NTSTATUS __stdcall NtSetUuidSeed(PUCHAR UuidSeed)
{
  PVOID PoolWithTag; // rax
  void *v3; // r15
  int v4; // eax
  ULONG v5; // r14d
  ULONG v6; // ebx
  ULONG v7; // r14d
  ACL *v8; // rax
  ACL *v9; // rbx
  int Acl; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r15
  __int16 v20; // ax
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-B4h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+64h] [rbp-A4h]
  __int16 v26; // [rsp+68h] [rbp-A0h]
  ULONG v27; // [rsp+6Ch] [rbp-9Ch]
  ULONG v28; // [rsp+70h] [rbp-98h]
  PVOID v29; // [rsp+78h] [rbp-90h]
  PVOID P; // [rsp+80h] [rbp-88h]
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp-80h] BYREF
  ULONG v32; // [rsp+8Ch] [rbp-7Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+90h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v35[6]; // [rsp+D8h] [rbp-30h]

  v35[0] = 80;
  v35[1] = 521322694;
  v35[2] = 906040134;
  v35[3] = -430256637;
  v35[4] = 1525148216;
  v35[5] = -843743134;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v29 = 0LL;
  v27 = 0;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v32 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v32, 0x64695555u);
  v3 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  v4 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 6u);
  AccessStatus = v4;
  if ( v4 < 0 )
    RtlRaiseStatus(v4);
  v5 = 0;
  v28 = 0;
  while ( v5 < 6 )
  {
    v6 = v35[v5];
    *RtlSubAuthoritySid(v3, v5++) = v6;
    v28 = v5;
  }
  v7 = RtlLengthSid(v3) + 20;
  v27 = v7;
  v8 = (ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x64695555u);
  v9 = v8;
  v29 = v8;
  if ( !v8 )
    RtlRaiseStatus(-1073741670);
  Acl = RtlCreateAcl(v8, v7, 2u);
  AccessStatus = Acl;
  if ( Acl < 0 )
    RtlRaiseStatus(Acl);
  v11 = RtlpAddKnownAce(v9, 2u, 0, 1, (unsigned __int8 *)v3, 0);
  AccessStatus = v11;
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
  v12 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  AccessStatus = v12;
  if ( v12 < 0 )
    RtlRaiseStatus(v12);
  v13 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
  AccessStatus = v13;
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
  if ( !SeAccessCheck(
          SecurityDescriptor,
          &SubjectSecurityContext,
          0,
          1u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpUuidSeedGenericMapping,
          1,
          &GrantedAccess,
          &AccessStatus) )
    RtlRaiseStatus(-1073741790);
  v25 = *(_DWORD *)UuidSeed;
  v26 = *((_WORD *)UuidSeed + 2);
  AccessStatus = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  if ( !AccessStatus )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0LL, v14);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v16, (ULONG_PTR)&ExpUuidLock, v17);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    *(int *)((char *)&dword_14077E284 + 2) = v25;
    HIWORD(dword_14077E288) = v26;
    ExpUuidCacheValid = (unsigned __int8)v25 >> 7 == 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    v20 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return AccessStatus;
}
