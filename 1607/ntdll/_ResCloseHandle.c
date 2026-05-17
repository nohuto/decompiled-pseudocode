/*
 * XREFs of _ResCloseHandle @ 0x180103AE0
 * Callers:
 *     ResCDirectoryFree @ 0x1800FFE18 (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1801000BC (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x180100318 (ResCSegmentFree.c)
 *     ResCReleaseInitMutex @ 0x18010331C (ResCReleaseInitMutex.c)
 *     ResCRequestInitMutex @ 0x180103374 (ResCRequestInitMutex.c)
 *     _ResCCreateMappingExclusive @ 0x180103578 (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x180103908 (_ResCLoadFixedSize.c)
 *     _ResCOpenMapping @ 0x180103A38 (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

__int64 __fastcall ResCloseHandle(void *a1)
{
  int v1; // eax
  ULONG v3; // eax

  if ( (_DWORD)a1 != -12 && (_DWORD)a1 != -11 && (_DWORD)a1 != -10 && ((unsigned int)a1 & 0x10000003) != 3LL )
  {
    v1 = NtClose(a1);
    if ( v1 >= 0 )
      return 1LL;
    v3 = RtlNtStatusToDosError(v1);
    RtlSetLastWin32Error(v3);
  }
  return 0LL;
}
