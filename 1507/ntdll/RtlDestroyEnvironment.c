/*
 * XREFs of RtlDestroyEnvironment @ 0x1800467E0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  NtdllpFreeStringRoutine(Environment);
  return 0;
}
