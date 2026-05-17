/*
 * XREFs of EtwSetMark @ 0x1800F3E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
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
