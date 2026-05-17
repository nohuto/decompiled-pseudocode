/*
 * XREFs of _ResCFlushMappedView @ 0x1800F8F28
 * Callers:
 *     ResCHitsFree @ 0x1800F7EC8 (ResCHitsFree.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     ZwFlushVirtualMemory @ 0x1800A6C50 (ZwFlushVirtualMemory.c)
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
