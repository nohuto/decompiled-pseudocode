/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x1400B3AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_BYTE *)(a1 + 772) & 4) != 0;
}
