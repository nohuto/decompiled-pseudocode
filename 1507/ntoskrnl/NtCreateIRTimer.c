/*
 * XREFs of NtCreateIRTimer @ 0x14058454C
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x140470F5C (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, 0LL, 0LL, 2u, (ACCESS_MASK)Reserved);
}
