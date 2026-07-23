/*
 * XREFs of EtwpAccessCheckFromState @ 0x140406EDC
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x14000C090 (SeAccessCheckFromState.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140406CC8 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x140406F58 (EtwpFreeSecurityDescriptor.c)
 */

__int64 __fastcall EtwpAccessCheckFromState(unsigned int *a1, NTSTATUS a2, _TOKEN_ACCESS_INFORMATION *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor[3]; // [rsp+50h] [rbp-18h] BYREF
  NTSTATUS AccessStatus; // [rsp+78h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+20h] BYREF

  AccessStatus = a2;
  SecurityDescriptor[0] = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, SecurityDescriptor);
  SeAccessCheckFromState(
    SecurityDescriptor[0],
    a3,
    0LL,
    0x80u,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  EtwpFreeSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)AccessStatus;
}
