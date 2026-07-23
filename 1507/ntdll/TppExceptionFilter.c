/*
 * XREFs of TppExceptionFilter @ 0x1800F5B34
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppWorkerpInnerExceptionFilter @ 0x1800F5ED4 (TppWorkerpInnerExceptionFilter.c)
 * Callees:
 *     RtlDecodePointer @ 0x180066340 (RtlDecodePointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlReportException @ 0x1800C7550 (RtlReportException.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E3F90 (RtlUnhandledExceptionFilter2.c)
 */

LONG __fastcall TppExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  __int64 (__fastcall *v2)(PEXCEPTION_POINTERS); // rax
  LONG result; // eax

  v2 = (__int64 (__fastcall *)(PEXCEPTION_POINTERS))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v2 )
    result = v2(ExceptionPointers);
  else
    result = RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
  if ( !result && ExceptionPointers->ExceptionRecord->ExceptionCode == -1073741571 )
  {
    RtlReportException(ExceptionPointers->ExceptionRecord, ExceptionPointers->ContextRecord, 3u);
    return 1;
  }
  return result;
}
