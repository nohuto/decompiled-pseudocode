/*
 * XREFs of SeLockSubjectContext @ 0x14044CA80
 * Callers:
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x14008D160 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x1400A9158 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     ObCheckCreateObjectAccess @ 0x140402FEC (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404046D0 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1404057B0 (ObpCheckObjectReference.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140476830 (ObpVerifyCreatorAccessCheck.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     PopUserIsAdmin @ 0x1405006B4 (PopUserIsAdmin.c)
 *     CmpCheckKeyBodyAccess @ 0x140602034 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x14066631C (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1406B87B8 (CMFCheckAccess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
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
