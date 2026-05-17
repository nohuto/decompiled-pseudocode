/*
 * XREFs of _ResCMapCMFModule @ 0x180048A28
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x180048988 (ResCKeDirectoryOpenMapping.c)
 *     ResCKeHitsOpenMapping @ 0x1800F7FBC (ResCKeHitsOpenMapping.c)
 *     ResCKeSegmentOpenMapping @ 0x1800F8028 (ResCKeSegmentOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     NtMapCMFModule @ 0x1800A7110 (NtMapCMFModule.c)
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
