/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C001860C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C009A930 (NdisMSetMiniportAttributes.c)
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00186D4 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // cl

  v3 = 0;
  if ( dword_1C0082040 )
    return TlgKeywordOn(0LL, 0LL) != 0;
  return v3;
}
