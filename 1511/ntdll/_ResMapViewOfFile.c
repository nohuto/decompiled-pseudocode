/*
 * XREFs of _ResMapViewOfFile @ 0x1800FA208
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x1800F8BE4 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x1800F90A4 (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 */

__int64 ResMapViewOfFile()
{
  NTSTATUS v0; // eax
  ULONG v1; // eax

  v0 = ZwMapViewOfSection();
  if ( v0 < 0 )
  {
    v1 = RtlNtStatusToDosError(v0);
    RtlSetLastWin32Error(v1);
  }
  return 0LL;
}
