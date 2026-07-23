/*
 * XREFs of NtCreateIRTimer @ 0x14050D160
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x14044EB44 (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, 0LL, 0LL, 2u, (ACCESS_MASK)Reserved);
}
