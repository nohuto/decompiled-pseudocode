/*
 * XREFs of NtSetUuidSeed @ 0x1405778D8
 * Callers:
 *     <none>
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404206C0 (RtlpAddKnownAce.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
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
  _BYTE *v15; // rax
  _BYTE *v16; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS v21; // ebx
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-B4h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+64h] [rbp-A4h]
  __int16 v27; // [rsp+68h] [rbp-A0h]
  int v28; // [rsp+6Ch] [rbp-9Ch]
  ULONG v29; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-90h]
  PVOID v31; // [rsp+80h] [rbp-88h]
  ULONG v32; // [rsp+88h] [rbp-80h]
  ACCESS_MASK GrantedAccess; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+90h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v36[6]; // [rsp+D8h] [rbp-30h]

  v36[0] = 80;
  v36[1] = 521322694;
  v36[2] = 906040134;
  v36[3] = -430256637;
  v36[4] = 1525148216;
  v36[5] = -843743134;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v31 = 0LL;
  v29 = 0;
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
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v28 = i;
    if ( (unsigned int)i >= 6 )
      break;
    v6 = v36[i];
    *RtlSubAuthoritySid(v3, i) = v6;
  }
  v7 = RtlLengthSid(v3) + 20;
  v29 = v7;
  v8 = (ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x64695555u);
  v9 = v8;
  v31 = v8;
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
  v26 = *(_DWORD *)UuidSeed;
  v27 = *((_WORD *)UuidSeed + 2);
  AccessStatus = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v15, (ULONG_PTR)&ExpUuidLock);
  if ( v16 )
    v16[26] |= 1u;
  *(int *)((char *)&dword_140747294 + 2) = v26;
  word_14074729A = v27;
  ExpUuidCacheValid = (unsigned __int8)v26 >> 7 == 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v18, v19, v20);
  v21 = AccessStatus;
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return v21;
}
