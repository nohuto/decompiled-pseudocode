/*
 * XREFs of RtlQueryProtectedPolicy @ 0x180088F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     bsearch @ 0x180098050 (bsearch.c)
 */

NTSTATUS __cdecl RtlQueryProtectedPolicy(PGUID PolicyGuid, PULONG_PTR PolicyValue)
{
  NTSTATUS v4; // ebx
  _QWORD *v6; // rax

  v4 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    v6 = bsearch(
           PolicyGuid,
           RtlpProtectedPolicies,
           (unsigned int)RtlpProtectedPoliciesActiveCount,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    if ( v6 )
    {
      v4 = 0;
      *PolicyValue = v6[2];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v4;
}
