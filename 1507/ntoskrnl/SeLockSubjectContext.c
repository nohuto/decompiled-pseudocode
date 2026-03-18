/*
 * XREFs of SeLockSubjectContext @ 0x1404C5390
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x1400CE734 (SepTrustLevelCheck.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     ObpCheckObjectReference @ 0x1404CF854 (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1404D0EC4 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404D3DC0 (ObCheckObjectAccess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054467C (ObpVerifyCreatorAccessCheck.c)
 *     PopUserIsAdmin @ 0x14055D1DC (PopUserIsAdmin.c)
 *     ObpCheckTraverseAccess @ 0x1406ABF00 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 *     VerifierSeLockSubjectContext @ 0x140742524 (VerifierSeLockSubjectContext.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
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
