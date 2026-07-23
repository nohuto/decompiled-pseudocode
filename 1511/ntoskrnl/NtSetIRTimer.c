/*
 * XREFs of NtSetIRTimer @ 0x1400F3D24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle, (__int64 *)DueTime, 0LL);
}
