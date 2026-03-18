/*
 * XREFs of GreMarkUndeletableRgn @ 0x1C00BE4A8
 * Callers:
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreMarkUndeletableRgn(int a1)
{
  PsGetCurrentProcessId();
  return HmgMarkUndeletable(a1, 4);
}
