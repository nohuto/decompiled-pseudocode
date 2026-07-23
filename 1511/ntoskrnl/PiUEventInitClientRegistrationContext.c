/*
 * XREFs of PiUEventInitClientRegistrationContext @ 0x1403BFF58
 * Callers:
 *     PiUEventHandleRegistration @ 0x1403BFB78 (PiUEventHandleRegistration.c)
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     KeInitializeGuardedMutex @ 0x140093730 (KeInitializeGuardedMutex.c)
 *     ZwCreateWnfStateName @ 0x140151DE0 (ZwCreateWnfStateName.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1403C0234 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140435010 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 */

_WNF_STATE_NAME *PiUEventInitClientRegistrationContext()
{
  ACL *v0; // rbx
  _WNF_STATE_NAME *PoolWithTag; // rax
  _WNF_STATE_NAME *v2; // rdi
  struct _FAST_MUTEX *v3; // rax
  PSID v4; // rsi
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // esi
  ACL *v9; // rax
  void *v11; // rcx
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-48h] BYREF

  v0 = 0LL;
  PoolWithTag = (_WNF_STATE_NAME *)ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x59706E50u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x90uLL);
    v3 = (struct _FAST_MUTEX *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x59706E50u);
    v2[2] = (_WNF_STATE_NAME)v3;
    if ( !v3 )
      goto LABEL_16;
    KeInitializeGuardedMutex(v3);
    v2[15] = (_WNF_STATE_NAME)&v2[14];
    v2[14] = (_WNF_STATE_NAME)&v2[14];
    v2[13] = (_WNF_STATE_NAME)&v2[12];
    v2[12] = (_WNF_STATE_NAME)&v2[12];
    v2[16].Data[1] = 4;
    LOBYTE(v2[17].Data[1]) = 1;
    if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) < 0
      || (v4 = SeLocalSystemSid, RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 1u) < 0)
      || (v5 = RtlLengthSid(*(PSID *)&SeLowMandatorySid),
          v6 = RtlLengthSid(SeAllAppPackagesSid) + v5,
          v7 = RtlLengthSid(SeWorldSid) + v6,
          v8 = v7 + RtlLengthSid(v4) + 40,
          v9 = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x59706E50u),
          (v0 = v9) == 0LL)
      || RtlCreateAcl(v9, v8, 2u) < 0
      || (int)RtlpAddKnownAce((int)v0, 2, 2, 0x10000000, SeLocalSystemSid, 0) < 0
      || (int)RtlpAddKnownAce((int)v0, 2, 2, 1, SeWorldSid, 0) < 0
      || (int)RtlpAddKnownAce((int)v0, 2, 2, 1, SeAllAppPackagesSid, 0) < 0
      || (int)RtlpAddKnownAce((int)v0, 2, 2, 1, *(void **)&SeLowMandatorySid, 0) < 0
      || RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v0, 0) < 0
      || ZwCreateWnfStateName(v2 + 11, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 4u, SecurityDescriptor) < 0 )
    {
LABEL_16:
      v11 = (void *)v2[2];
      if ( v11 )
        ExFreePoolWithTag(v11, 0x59706E50u);
      ExFreePoolWithTag(v2, 0x59706E50u);
      v2 = 0LL;
    }
    if ( v0 )
      ExFreePoolWithTag(v0, 0x59706E50u);
  }
  return v2;
}
