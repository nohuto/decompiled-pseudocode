/*
 * XREFs of SeUnlockSubjectContext @ 0x140470920
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x14008DE30 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x1400EA430 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     ObCheckCreateObjectAccess @ 0x14046E3E0 (ObCheckCreateObjectAccess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     ObCheckObjectAccess @ 0x140470650 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1404707E4 (ObpCheckObjectReference.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1404AA73C (ObpVerifyCreatorAccessCheck.c)
 *     PopUserIsAdmin @ 0x1404C6840 (PopUserIsAdmin.c)
 *     ObpCheckTraverseAccess @ 0x14062E1F0 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x140675D24 (CMFCheckAccess.c)
 *     VerifierSeUnlockSubjectContext @ 0x1406C0D04 (VerifierSeUnlockSubjectContext.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
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
