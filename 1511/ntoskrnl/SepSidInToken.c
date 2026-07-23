/*
 * XREFs of SepSidInToken @ 0x140003818
 * Callers:
 *     SepMaximumAccessCheck @ 0x14008A7E0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14008C110 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14012BB10 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140135D0C (SepNormalAccessCheckEx.c)
 *     AuthzBasepMemberOf @ 0x14021B31C (AuthzBasepMemberOf.c)
 *     SeTokenIsAdmin @ 0x1403BE378 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1403BE3F0 (SepIsImpersonationAllowedDueToCapability.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14051AE6C (SepCheckForAllAppPackagesAceRemoval.c)
 *     SeExamineSacl @ 0x140652140 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140652A74 (SepExamineSaclEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  _SID_AND_ATTRIBUTES_HASH *v6; // rcx

  if ( a5 )
    v6 = (_SID_AND_ATTRIBUTES_HASH *)(a1 + 504);
  else
    v6 = (_SID_AND_ATTRIBUTES_HASH *)(a1 + 232);
  return SepSidInTokenSidHash(v6, a5, a6);
}
