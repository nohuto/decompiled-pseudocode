/*
 * XREFs of _ResUnmapViewOfFile @ 0x180104D1C
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18005A100 (ResCKeDirectoryOpenMapping.c)
 *     ResCDirectoryFree @ 0x1800FFD50 (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1800FFFF4 (ResCHitsFree.c)
 *     ResCKeHitsOpenMapping @ 0x1801000E8 (ResCKeHitsOpenMapping.c)
 *     ResCKeSegmentOpenMapping @ 0x180100154 (ResCKeSegmentOpenMapping.c)
 *     ResCSegmentFree @ 0x180100250 (ResCSegmentFree.c)
 *     _ResCCreateMappingExclusive @ 0x1801034B8 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x180103978 (_ResCOpenMapping.c)
 *     ResCFreeCultureMap @ 0x180105828 (ResCFreeCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     RtlFlushSecureMemoryCache @ 0x1800ED250 (RtlFlushSecureMemoryCache.c)
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
