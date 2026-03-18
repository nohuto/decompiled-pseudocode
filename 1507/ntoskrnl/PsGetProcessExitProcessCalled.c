/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x14012F928
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_BYTE *)(a1 + 772) & 4) != 0;
}
