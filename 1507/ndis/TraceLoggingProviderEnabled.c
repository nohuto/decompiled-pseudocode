/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C0017644
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00A00B0 (NdisMSetMiniportAttributes.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // cl

  v3 = 0;
  if ( dword_1C0084040 )
    return TlgKeywordOn(0LL, 0LL) != 0;
  return v3;
}
