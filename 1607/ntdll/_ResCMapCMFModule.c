/*
 * XREFs of _ResCMapCMFModule @ 0x18005A1B0
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18005A110 (ResCKeDirectoryOpenMapping.c)
 *     ResCKeHitsOpenMapping @ 0x1801001B0 (ResCKeHitsOpenMapping.c)
 *     ResCKeSegmentOpenMapping @ 0x18010021C (ResCKeSegmentOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     NtMapCMFModule @ 0x1800A84B0 (NtMapCMFModule.c)
 */

__int64 __fastcall ResCMapCMFModule(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  ULONG v6; // eax

  v5 = NtMapCMFModule(a1, a2, a5);
  if ( v5 < 0 )
  {
    v6 = RtlNtStatusToDosError(v5);
    RtlSetLastWin32Error(v6);
  }
  return 0LL;
}
