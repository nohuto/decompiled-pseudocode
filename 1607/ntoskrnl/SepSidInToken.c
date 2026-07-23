/*
 * XREFs of SepSidInToken @ 0x1400C2444
 * Callers:
 *     SepMaximumAccessCheck @ 0x140061220 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140061FC0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140133534 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401366B8 (SepNormalAccessCheckEx.c)
 *     AuthzBasepMemberOf @ 0x1402354B0 (AuthzBasepMemberOf.c)
 *     SeTokenIsAdmin @ 0x140474BB4 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1404E6774 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140691E34 (SepExamineSaclEx.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x140694D8C (SepCheckForAllAppPackagesAceRemoval.c)
 * Callees:
 *     <none>
 */

bool SepSidInToken(__int64 a1, void *a2, void *a3, char a4, char a5, char a6, ...)
{
  _SID_AND_ATTRIBUTES_HASH *v6; // rcx

  if ( a5 )
    v6 = (_SID_AND_ATTRIBUTES_HASH *)(a1 + 504);
  else
    v6 = (_SID_AND_ATTRIBUTES_HASH *)(a1 + 232);
  return SepSidInTokenSidHash(v6, a2, a3, a4, a5, a6);
}
