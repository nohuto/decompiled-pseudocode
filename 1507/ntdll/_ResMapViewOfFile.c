/*
 * XREFs of _ResMapViewOfFile @ 0x1800FA8F0
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x1800F92CC (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x1800F978C (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
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
