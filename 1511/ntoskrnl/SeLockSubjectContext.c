/*
 * XREFs of SeLockSubjectContext @ 0x140470960
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x14008DE30 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x1400EA430 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     ObCheckCreateObjectAccess @ 0x14046E3E0 (ObCheckCreateObjectAccess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     ObCheckObjectAccess @ 0x140470650 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1404707E4 (ObpCheckObjectReference.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1404AA73C (ObpVerifyCreatorAccessCheck.c)
 *     PopUserIsAdmin @ 0x1404C6840 (PopUserIsAdmin.c)
 *     ObpCheckTraverseAccess @ 0x14062E1F0 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x140675D24 (CMFCheckAccess.c)
 *     VerifierSeLockSubjectContext @ 0x1406C0CE4 (VerifierSeLockSubjectContext.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
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
