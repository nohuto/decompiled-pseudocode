/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C001A06C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00AEC30 (NdisMSetMiniportAttributes.c)
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // cl

  v3 = 0;
  if ( dword_1C0088010 )
    return TlgKeywordOn(0LL, 0LL) != 0;
  return v3;
}
