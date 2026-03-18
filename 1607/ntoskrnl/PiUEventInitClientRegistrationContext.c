/*
 * XREFs of PiUEventInitClientRegistrationContext @ 0x14048CE88
 * Callers:
 *     PiUEventHandleRegistration @ 0x14048D21C (PiUEventHandleRegistration.c)
 * Callees:
 *     RtlLengthSid @ 0x14000C2AC (RtlLengthSid.c)
 *     KeInitializeGuardedMutex @ 0x14007D100 (KeInitializeGuardedMutex.c)
 *     ZwCreateWnfStateName @ 0x14015B480 (ZwCreateWnfStateName.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140413E70 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140413ED0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140420AB8 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140421800 (RtlpAddKnownAce.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048D1C4 (RtlSetOwnerSecurityDescriptor.c)
 */

_QWORD *PiUEventInitClientRegistrationContext()
{
  ACL *v0; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v2; // rdi
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
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x59706E50u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x90uLL);
    v3 = (struct _FAST_MUTEX *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x59706E50u);
    v2[2] = v3;
    if ( !v3 )
      goto LABEL_16;
    KeInitializeGuardedMutex(v3);
    v2[15] = v2 + 14;
    v2[14] = v2 + 14;
    v2[13] = v2 + 12;
    v2[12] = v2 + 12;
    *((_DWORD *)v2 + 33) = 4;
    *((_BYTE *)v2 + 140) = 1;
    if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) < 0
      || (v4 = SeLocalSystemSid, RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 1u) < 0)
      || (v5 = RtlLengthSid(*(PSID *)&SeLowMandatorySid),
          v6 = RtlLengthSid(SeAllAppPackagesSid) + v5,
          v7 = RtlLengthSid(SeWorldSid) + v6,
          v8 = v7 + RtlLengthSid(v4) + 40,
          v9 = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x59706E50u),
          (v0 = v9) == 0LL)
      || RtlCreateAcl(v9, v8, 2u) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeWorldSid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeAllAppPackagesSid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, *(unsigned __int8 **)&SeLowMandatorySid, 0) < 0
      || RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v0, 0) < 0
      || (int)ZwCreateWnfStateName((__int64)(v2 + 11), 3LL, 4LL) < 0 )
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
