/*
 * XREFs of _ResCloseHandle @ 0x1800F914C
 * Callers:
 *     ResCDirectoryFree @ 0x1800F7C24 (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1800F7EC8 (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x1800F8124 (ResCSegmentFree.c)
 *     ResCReleaseInitMutex @ 0x1800F8988 (ResCReleaseInitMutex.c)
 *     ResCRequestInitMutex @ 0x1800F89E0 (ResCRequestInitMutex.c)
 *     _ResCCreateMappingExclusive @ 0x1800F8BE4 (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x1800F8F74 (_ResCLoadFixedSize.c)
 *     _ResCOpenMapping @ 0x1800F90A4 (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
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
