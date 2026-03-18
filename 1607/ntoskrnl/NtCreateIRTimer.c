/*
 * XREFs of NtCreateIRTimer @ 0x140548890
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x1404712EC (NtCreateTimer2.c)
 */

__int64 __fastcall NtCreateIRTimer(HANDLE *a1, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(a1, 0LL, 0LL, 2, DesiredAccess);
}
