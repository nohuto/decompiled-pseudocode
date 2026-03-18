/*
 * XREFs of SepSidInToken @ 0x1400078CC
 * Callers:
 *     SepNormalAccessCheck @ 0x1400CBEF0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1400CCA50 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14015A940 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140162460 (SepNormalAccessCheckEx.c)
 *     AuthzBasepMemberOf @ 0x14026AE70 (AuthzBasepMemberOf.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x14040FC40 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsAdmin @ 0x14040FEA8 (SeTokenIsAdmin.c)
 *     SepExamineSaclEx @ 0x140584948 (SepExamineSaclEx.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14058D76C (SepCheckForAllAppPackagesAceRemoval.c)
 *     SeExamineSacl @ 0x1406D47F0 (SeExamineSacl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  if ( a5 )
    return SepSidInTokenSidHash(a1 + 504);
  else
    return SepSidInTokenSidHash(a1 + 232);
}
