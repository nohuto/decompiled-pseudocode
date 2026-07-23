/*
 * XREFs of RtlDestroyEnvironment @ 0x18004D890
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  NtdllpFreeStringRoutine(Environment);
  return 0;
}
