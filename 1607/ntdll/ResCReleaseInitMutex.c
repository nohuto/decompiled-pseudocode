/*
 * XREFs of ResCReleaseInitMutex @ 0x18010325C
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x1800FF43C (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     ZwReleaseMutant @ 0x1800A6820 (ZwReleaseMutant.c)
 *     _ResCloseHandle @ 0x180103A20 (_ResCloseHandle.c)
 */

__int64 __fastcall ResCReleaseInitMutex(void *a1)
{
  int v2; // edi
  int v4; // eax
  LONG v5; // eax

  v2 = 1;
  if ( !a1 )
    return 0LL;
  v4 = ZwReleaseMutant(a1, 0LL);
  if ( v4 < 0 )
  {
    v5 = RtlNtStatusToDosError(v4);
    RtlSetLastWin32Error(v5);
    v2 = 0;
  }
  return v2 & (unsigned int)-((unsigned int)ResCloseHandle(a1) != 0);
}
