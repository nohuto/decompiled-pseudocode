/*
 * XREFs of _ResCloseHandle @ 0x1800F9834
 * Callers:
 *     ResCDirectoryFree @ 0x1800F7FCC (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1800F83AC (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x1800F8608 (ResCSegmentFree.c)
 *     ResCReleaseInitMutex @ 0x1800F9070 (ResCReleaseInitMutex.c)
 *     ResCRequestInitMutex @ 0x1800F90C8 (ResCRequestInitMutex.c)
 *     _ResCCreateMappingExclusive @ 0x1800F92CC (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x1800F965C (_ResCLoadFixedSize.c)
 *     _ResCOpenMapping @ 0x1800F978C (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
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
