/*
 * XREFs of NtSetIRTimer @ 0x1400F3D24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NtSetIRTimer(void *a1, __int64 *a2)
{
  return ExpSetTimer2(a1, a2, 0LL);
}
