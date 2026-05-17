/*
 * XREFs of _TlgKeywordOn @ 0x1800D1CA4
 * Callers:
 *     LdrpResReportResourceAccessInternal @ 0x180082740 (LdrpResReportResourceAccessInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword
    || (keyword & *((_QWORD *)hProvider + 2)) != 0
    && (keyword & *((_QWORD *)hProvider + 3)) == *((_QWORD *)hProvider + 3) )
  {
    return 1;
  }
  return v2;
}
