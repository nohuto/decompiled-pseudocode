/*
 * XREFs of _TlgKeywordOn @ 0x18004F12C
 * Callers:
 *     LdrpResReportResourceAccessInternal @ 0x18005246C (LdrpResReportResourceAccessInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (qword_180142180 & 0x800000000000LL) != 0 && (qword_180142188 & 0x800000000000LL) == qword_180142188;
}
