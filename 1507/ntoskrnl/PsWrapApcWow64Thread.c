/*
 * XREFs of PsWrapApcWow64Thread @ 0x140244468
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsWrapApcWow64Thread(PVOID *ApcContext, PVOID *ApcRoutine)
{
  if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    *ApcRoutine = (PVOID)(-4LL * (_QWORD)*ApcRoutine);
  return 0;
}
