/*
 * XREFs of NtSetUuidSeed @ 0x140543400
 * Callers:
 *     <none>
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     RtlpAddKnownAce @ 0x140435010 (RtlpAddKnownAce.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x14046C3B0 (RtlLengthRequiredSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x1404AA898 (RtlInitializeSid.c)
 */

NTSTATUS __stdcall NtSetUuidSeed(PUCHAR UuidSeed)
{
  PVOID PoolWithTag; // rax
  void *v3; // r15
  int v4; // eax
  __int64 i; // rsi
  ULONG v6; // ebx
  ULONG v7; // esi
  ACL *v8; // rax
  ACL *v9; // rbx
  int Acl; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v15; // rax
  __int64 v16; // rsi
  NTSTATUS v18; // ebx
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-B4h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+64h] [rbp-A4h]
  __int16 v24; // [rsp+68h] [rbp-A0h]
  ULONG v25; // [rsp+6Ch] [rbp-9Ch]
  int v26; // [rsp+70h] [rbp-98h]
  PVOID v27; // [rsp+78h] [rbp-90h]
  PVOID P; // [rsp+80h] [rbp-88h]
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp-80h] BYREF
  ULONG v30; // [rsp+8Ch] [rbp-7Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+90h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v33[6]; // [rsp+D8h] [rbp-30h]

  v33[0] = 80;
  v33[1] = 521322694;
  v33[2] = 906040134;
  v33[3] = -430256637;
  v33[4] = 1525148216;
  v33[5] = -843743134;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v27 = 0LL;
  v25 = 0;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v30 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v30, 0x64695555u);
  v3 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  v4 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 6u);
  AccessStatus = v4;
  if ( v4 < 0 )
    RtlRaiseStatus(v4);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v26 = i;
    if ( (unsigned int)i >= 6 )
      break;
    v6 = v33[i];
    *RtlSubAuthoritySid(v3, i) = v6;
  }
  v7 = RtlLengthSid(v3) + 20;
  v25 = v7;
  v8 = (ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x64695555u);
  v9 = v8;
  v27 = v8;
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
  v23 = *(_DWORD *)UuidSeed;
  v24 = *((_WORD *)UuidSeed + 2);
  AccessStatus = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v15, (ULONG_PTR)&ExpUuidLock);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  *(int *)((char *)&dword_1406FB2A4 + 2) = v23;
  HIWORD(dword_1406FB2A8) = v24;
  ExpUuidCacheValid = (unsigned __int8)v23 >> 7 == 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  v18 = AccessStatus;
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return v18;
}
