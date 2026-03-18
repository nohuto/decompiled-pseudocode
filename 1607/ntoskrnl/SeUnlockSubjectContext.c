/*
 * XREFs of SeUnlockSubjectContext @ 0x14044DC10
 * Callers:
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x14008DA00 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x1400AABD8 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     ObCheckCreateObjectAccess @ 0x14040412C (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140405810 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1404068F0 (ObpCheckObjectReference.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140477960 (ObpVerifyCreatorAccessCheck.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     PopUserIsAdmin @ 0x14051D2C4 (PopUserIsAdmin.c)
 *     CmpCheckKeyBodyAccess @ 0x140601F80 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x140666238 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1406B8680 (CMFCheckAccess.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 */

void __stdcall SeUnlockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6));
  KeLeaveCriticalRegion();
  if ( SubjectContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->ClientToken + 6));
    KeLeaveCriticalRegion();
  }
}
