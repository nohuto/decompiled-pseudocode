/*
 * XREFs of NtCreateIRTimer @ 0x14050D160
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x14044EB44 (NtCreateTimer2.c)
 */

__int64 __fastcall NtCreateIRTimer(__int64 *a1, unsigned int a2)
{
  return NtCreateTimer2(a1, 0LL, 0LL, 2, a2);
}
