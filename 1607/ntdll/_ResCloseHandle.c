/*
 * XREFs of _ResCloseHandle @ 0x180103A20
 * Callers:
 *     ResCDirectoryFree @ 0x1800FFD50 (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1800FFFF4 (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x180100250 (ResCSegmentFree.c)
 *     ResCReleaseInitMutex @ 0x18010325C (ResCReleaseInitMutex.c)
 *     ResCRequestInitMutex @ 0x1801032B4 (ResCRequestInitMutex.c)
 *     _ResCCreateMappingExclusive @ 0x1801034B8 (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x180103848 (_ResCLoadFixedSize.c)
 *     _ResCOpenMapping @ 0x180103978 (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

__int64 __fastcall ResCloseHandle(void *a1)
{
  int v1; // eax
  LONG v3; // eax

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
