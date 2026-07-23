/*
 * XREFs of _ResUnmapViewOfFile @ 0x1800FA430
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x180048988 (ResCKeDirectoryOpenMapping.c)
 *     ResCDirectoryFree @ 0x1800F7C24 (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1800F7EC8 (ResCHitsFree.c)
 *     ResCKeHitsOpenMapping @ 0x1800F7FBC (ResCKeHitsOpenMapping.c)
 *     ResCKeSegmentOpenMapping @ 0x1800F8028 (ResCKeSegmentOpenMapping.c)
 *     ResCSegmentFree @ 0x1800F8124 (ResCSegmentFree.c)
 *     _ResCCreateMappingExclusive @ 0x1800F8BE4 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x1800F90A4 (_ResCOpenMapping.c)
 *     ResCFreeCultureMap @ 0x1800FAF48 (ResCFreeCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E4010 (RtlFlushSecureMemoryCache.c)
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
