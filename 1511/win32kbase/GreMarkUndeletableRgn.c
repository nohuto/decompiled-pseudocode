/*
 * XREFs of GreMarkUndeletableRgn @ 0x1C005D9E8
 * Callers:
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreMarkUndeletableRgn(__int64 a1)
{
  __int64 v2; // rdx

  PsGetCurrentProcessId();
  LOBYTE(v2) = 4;
  return HmgMarkUndeletable(a1, v2);
}
