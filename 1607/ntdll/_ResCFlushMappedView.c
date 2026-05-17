/*
 * XREFs of _ResCFlushMappedView @ 0x1801038BC
 * Callers:
 *     ResCHitsFree @ 0x1801000BC (ResCHitsFree.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     ZwFlushVirtualMemory @ 0x1800A7FF0 (ZwFlushVirtualMemory.c)
 */

__int64 ResCFlushMappedView()
{
  NTSTATUS v0; // eax
  ULONG v1; // eax

  v0 = ZwFlushVirtualMemory();
  if ( v0 >= 0 )
    return 1LL;
  v1 = RtlNtStatusToDosError(v0);
  RtlSetLastWin32Error(v1);
  return 0LL;
}
