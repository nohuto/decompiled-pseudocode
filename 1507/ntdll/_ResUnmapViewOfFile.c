/*
 * XREFs of _ResUnmapViewOfFile @ 0x1800FAB18
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18000EE38 (ResCKeDirectoryOpenMapping.c)
 *     ResCDirectoryFree @ 0x1800F7FCC (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1800F83AC (ResCHitsFree.c)
 *     ResCKeHitsOpenMapping @ 0x1800F84A0 (ResCKeHitsOpenMapping.c)
 *     ResCKeSegmentOpenMapping @ 0x1800F850C (ResCKeSegmentOpenMapping.c)
 *     ResCSegmentFree @ 0x1800F8608 (ResCSegmentFree.c)
 *     _ResCCreateMappingExclusive @ 0x1800F92CC (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x1800F978C (_ResCOpenMapping.c)
 *     ResCFreeCultureMap @ 0x1800FBA68 (ResCFreeCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     RtlFlushSecureMemoryCache @ 0x1800DE8C0 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall ResUnmapViewOfFile(PVOID BaseAddress)
{
  NTSTATUS v2; // eax
  int v3; // ebx
  LONG v4; // eax

  v2 = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  v3 = v2;
  if ( v2 >= 0 )
    return 1LL;
  if ( v2 == -1073741755 )
  {
    if ( RtlFlushSecureMemoryCache(BaseAddress, 0LL) )
    {
      v3 = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      if ( v3 >= 0 )
        return 1LL;
    }
  }
  v4 = RtlNtStatusToDosError(v3);
  RtlSetLastWin32Error(v4);
  return 0LL;
}
