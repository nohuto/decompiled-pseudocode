/*
 * XREFs of SeUnlockSubjectContext @ 0x1404C52E0
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x1400CE734 (SepTrustLevelCheck.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     ObpCheckObjectReference @ 0x1404CF854 (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1404D0EC4 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404D3DC0 (ObCheckObjectAccess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054467C (ObpVerifyCreatorAccessCheck.c)
 *     PopUserIsAdmin @ 0x14055D1DC (PopUserIsAdmin.c)
 *     ObpCheckTraverseAccess @ 0x1406ABF00 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 *     VerifierSeUnlockSubjectContext @ 0x140742544 (VerifierSeUnlockSubjectContext.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void __stdcall SeUnlockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v3; // ax
  struct _KTHREAD *v4; // rcx
  __int16 v5; // ax

  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6));
  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v3;
  if ( !v3
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( SubjectContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->ClientToken + 6));
    v4 = KeGetCurrentThread();
    v5 = v4->KernelApcDisable + 1;
    v4->KernelApcDisable = v5;
    if ( !v5
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152
      && !v4->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
