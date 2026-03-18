/*
 * XREFs of SepSidInToken @ 0x1400C45A4
 * Callers:
 *     SepMaximumAccessCheck @ 0x1400616A0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140062440 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140132FC4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140136148 (SepNormalAccessCheckEx.c)
 *     AuthzBasepMemberOf @ 0x140235684 (AuthzBasepMemberOf.c)
 *     SeTokenIsAdmin @ 0x140475CE4 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405037E4 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x140691420 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140691D50 (SepExamineSaclEx.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x140694CA8 (SepCheckForAllAppPackagesAceRemoval.c)
 * Callees:
 *     <none>
 */

bool SepSidInToken(__int64 a1, void *a2, void *a3, char a4, char a5, char a6, ...)
{
  __int64 v6; // rcx

  if ( a5 )
    v6 = a1 + 504;
  else
    v6 = a1 + 232;
  return SepSidInTokenSidHash(v6, a2, a3, a4, a5, a6);
}
