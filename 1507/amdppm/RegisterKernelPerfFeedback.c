/*
 * XREFs of RegisterKernelPerfFeedback @ 0x1C0017750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterKernelPerfFeedback(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, (__int64 (__fastcall *)(char *, _QWORD))RegisterKernelPerfStatesCallback);
}
