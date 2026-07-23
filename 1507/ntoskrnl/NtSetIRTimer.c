/*
 * XREFs of NtSetIRTimer @ 0x140131384
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle, (PVOID *)DueTime, 0LL);
}
