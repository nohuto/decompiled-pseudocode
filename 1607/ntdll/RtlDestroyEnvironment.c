/*
 * XREFs of RtlDestroyEnvironment @ 0x18005EEF0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  NtdllpFreeStringRoutine(Environment);
  return 0;
}
