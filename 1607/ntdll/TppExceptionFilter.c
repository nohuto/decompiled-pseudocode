/*
 * XREFs of TppExceptionFilter @ 0x180090EF4
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180090ECC (TppWorkerpInnerExceptionFilter.c)
 * Callees:
 *     RtlReportException @ 0x180006A70 (RtlReportException.c)
 *     RtlDecodePointer @ 0x180051BD0 (RtlDecodePointer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
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
