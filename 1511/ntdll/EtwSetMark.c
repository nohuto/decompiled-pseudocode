/*
 * XREFs of EtwSetMark @ 0x1800F3D10
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
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
