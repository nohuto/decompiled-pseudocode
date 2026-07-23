/*
 * XREFs of NtCreateIRTimer @ 0x140548DD0
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x1404701BC (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, 0LL, 0LL, 2u, (ACCESS_MASK)Reserved);
}
