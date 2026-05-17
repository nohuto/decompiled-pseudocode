/*
 * XREFs of _ResMapViewOfFile @ 0x180104BB4
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x180103578 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x180103A38 (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
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
