/*
 * XREFs of _TlgKeywordOn @ 0x140013514
 * Callers:
 *     SmpSendPlatformBinaryStatus @ 0x140012EB8 (SmpSendPlatformBinaryStatus.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (qword_140024030 & 0x400000000000LL) != 0 && (qword_140024038 & 0x400000000000LL) == qword_140024038;
}
