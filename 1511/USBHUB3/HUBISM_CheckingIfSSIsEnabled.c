/*
 * XREFs of HUBISM_CheckingIfSSIsEnabled @ 0x1C00303E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBISM_CheckingIfSSIsEnabled(__int64 a1)
{
  return ((*(unsigned __int8 *)(*(_QWORD *)(a1 - 56) + 40LL) ^ 0x80u) >> 7) | 0x1774;
}
