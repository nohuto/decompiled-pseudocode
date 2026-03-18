/*
 * XREFs of PspCheckJobAccessState @ 0x1406C4538
 * Callers:
 *     PspValidateJobLimitsDuringAssignment @ 0x14041B608 (PspValidateJobLimitsDuringAssignment.c)
 *     PspValidateJobAffinityState @ 0x14054D8F8 (PspValidateJobAffinityState.c)
 *     PspSetAffinityLimitCallback @ 0x1406C4AF4 (PspSetAffinityLimitCallback.c)
 * Callees:
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     ObReleaseObjectSecurity @ 0x140482AA4 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1404CFBCC (ObpGetObjectSecurity.c)
 */

__int64 __fastcall PspCheckJobAccessState(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-18h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+78h] [rbp+10h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 768) & 1) != 0 )
    return v2;
  if ( (*(_DWORD *)a1 & 1) != 0 )
    return 0LL;
  result = ObpGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated, 0);
  AccessStatus = result;
  if ( (int)result >= 0 )
  {
    SeAccessCheck(
      SecurityDescriptor,
      (PSECURITY_SUBJECT_CONTEXT)(a1 + 8),
      0,
      0x200u,
      0,
      0LL,
      (PGENERIC_MAPPING)((char *)PsProcessType + 76),
      1,
      &GrantedAccess,
      &AccessStatus);
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return (unsigned int)AccessStatus;
  }
  return result;
}
