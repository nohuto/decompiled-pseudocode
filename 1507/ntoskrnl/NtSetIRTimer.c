/*
 * XREFs of NtSetIRTimer @ 0x140131384
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NtSetIRTimer(void *a1, PVOID *a2)
{
  return ExpSetTimer2(a1, a2, 0LL);
}
