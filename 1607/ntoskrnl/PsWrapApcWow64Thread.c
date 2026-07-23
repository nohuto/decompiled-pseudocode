/*
 * XREFs of PsWrapApcWow64Thread @ 0x14020F584
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
