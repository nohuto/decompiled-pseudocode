/*
 * XREFs of _ResCMapCMFModule @ 0x18000EED8
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18000EE38 (ResCKeDirectoryOpenMapping.c)
 *     ResCKeHitsOpenMapping @ 0x1800F84A0 (ResCKeHitsOpenMapping.c)
 *     ResCKeSegmentOpenMapping @ 0x1800F850C (ResCKeSegmentOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     NtMapCMFModule @ 0x180094900 (NtMapCMFModule.c)
 */

PVOID __fastcall ResCMapCMFModule(ULONG a1, ULONG a2, ULONG *a3, ULONG *a4, PULONG CacheIndexOut)
{
  int v5; // eax
  LONG v6; // eax
  PVOID v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  v5 = NtMapCMFModule(a1, a2, CacheIndexOut, a4, a3, &v8);
  if ( v5 >= 0 )
    return v8;
  v6 = RtlNtStatusToDosError(v5);
  RtlSetLastWin32Error(v6);
  return 0LL;
}
