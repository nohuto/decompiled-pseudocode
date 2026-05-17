/*
 * XREFs of _ResUnmapViewOfFile @ 0x180104DDC
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18005A110 (ResCKeDirectoryOpenMapping.c)
 *     ResCDirectoryFree @ 0x1800FFE18 (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1801000BC (ResCHitsFree.c)
 *     ResCKeHitsOpenMapping @ 0x1801001B0 (ResCKeHitsOpenMapping.c)
 *     ResCKeSegmentOpenMapping @ 0x18010021C (ResCKeSegmentOpenMapping.c)
 *     ResCSegmentFree @ 0x180100318 (ResCSegmentFree.c)
 *     _ResCCreateMappingExclusive @ 0x180103578 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x180103A38 (_ResCOpenMapping.c)
 *     ResCFreeCultureMap @ 0x1801058E8 (ResCFreeCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     RtlFlushSecureMemoryCache @ 0x1800ED190 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall ResUnmapViewOfFile(__int64 a1)
{
  int v2; // eax
  NTSTATUS v3; // ebx
  ULONG v4; // eax

  v2 = NtUnmapViewOfSection();
  v3 = v2;
  if ( v2 >= 0 )
    return 1LL;
  if ( v2 == -1073741755 )
  {
    if ( RtlFlushSecureMemoryCache(a1, 0LL) )
    {
      v3 = NtUnmapViewOfSection();
      if ( v3 >= 0 )
        return 1LL;
    }
  }
  v4 = RtlNtStatusToDosError(v3);
  RtlSetLastWin32Error(v4);
  return 0LL;
}
