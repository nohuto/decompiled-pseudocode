/*
 * XREFs of EtwSetMark @ 0x1800F3E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

ULONG __cdecl EtwSetMark(TRACEHANDLE TraceHandle, PETW_SET_MARK_INFORMATION MarkInfo, ULONG Size)
{
  NTSTATUS v3; // ecx
  ULONG result; // eax

  v3 = NtTraceEvent((HANDLE)TraceHandle, 0x600u, Size, MarkInfo);
  result = 0;
  if ( v3 )
    return RtlNtStatusToDosError(v3);
  return result;
}
