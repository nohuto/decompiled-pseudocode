/*
 * XREFs of VerifierKeWaitForMultipleObjectsNoReboot @ 0x1406C68CC
 * Callers:
 *     <none>
 * Callees:
 *     ViKeWaitForMultipleObjectsCommon @ 0x1406C7230 (ViKeWaitForMultipleObjectsCommon.c)
 */

__int64 __fastcall VerifierKeWaitForMultipleObjectsNoReboot(
        ULONG a1,
        PVOID *a2,
        WAIT_TYPE a3,
        KWAIT_REASON a4,
        KPROCESSOR_MODE a5,
        BOOLEAN a6,
        PLARGE_INTEGER a7,
        PKWAIT_BLOCK a8)
{
  return ViKeWaitForMultipleObjectsCommon(a1, a2, a3, a4, a5, a6, a7, a8);
}
