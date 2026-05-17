/*
 * XREFs of RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18000F070
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall RtlSetLastWin32ErrorAndNtStatusFromNtStatus(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  return RtlSetLastWin32Error(v1);
}
