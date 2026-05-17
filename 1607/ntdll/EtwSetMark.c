/*
 * XREFs of EtwSetMark @ 0x1800FD4C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

ULONG EtwSetMark()
{
  NTSTATUS v0; // ecx
  ULONG result; // eax

  v0 = NtTraceEvent();
  result = 0;
  if ( v0 )
    return RtlNtStatusToDosError(v0);
  return result;
}
