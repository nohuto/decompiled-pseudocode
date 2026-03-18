/*
 * XREFs of HUBDSM_BugcheckingSystemOnBootDeviceEnumerationFailure @ 0x1C0016340
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure @ 0x1C00270C0 (HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure.c)
 */

void __fastcall __noreturn HUBDSM_BugcheckingSystemOnBootDeviceEnumerationFailure(__int64 a1)
{
  HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure(*(_QWORD *)(a1 + 960));
}
