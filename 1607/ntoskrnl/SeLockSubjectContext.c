/*
 * XREFs of SeLockSubjectContext @ 0x14044DBB0
 * Callers:
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x14008DA00 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x1400AABD8 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     ObCheckCreateObjectAccess @ 0x14040412C (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140405810 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1404068F0 (ObpCheckObjectReference.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140477960 (ObpVerifyCreatorAccessCheck.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     PopUserIsAdmin @ 0x14051D2C4 (PopUserIsAdmin.c)
 *     CmpCheckKeyBodyAccess @ 0x140601F80 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x140666238 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1406B8680 (CMFCheckAccess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 */

void __stdcall SeLockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6), 1u);
  if ( SubjectContext->ClientToken )
  {
    v3 = KeGetCurrentThread();
    --v3->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->ClientToken + 6), 1u);
  }
}
