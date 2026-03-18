/*
 * XREFs of PsGetProcessExitStatus @ 0x14063EA68
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsGetProcessExitStatus(PEPROCESS Process)
{
  return HIDWORD(Process[2].Affinity.Bitmap[2]);
}
