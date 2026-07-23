/*
 * XREFs of LdrpFatalExceptionFilter @ 0x1800C0E8C
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x18006C130 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18006CF40 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReportSilentProcessExit @ 0x180044890 (RtlReportSilentProcessExit.c)
 *     RtlDecodePointer @ 0x180066340 (RtlDecodePointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E3F90 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall LdrpFatalExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  struct _TEB *v2; // rcx
  NTSTATUS ExceptionCode; // esi
  void (__fastcall *v4)(PEXCEPTION_POINTERS); // rax

  v2 = NtCurrentTeb();
  ExceptionCode = ExceptionPointers->ExceptionRecord->ExceptionCode;
  if ( ExceptionCode == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741571);
  }
  else
  {
    v4 = (void (__fastcall *)(PEXCEPTION_POINTERS))RtlDecodePointer(RtlpUnhandledExceptionFilter);
    if ( v4 )
      v4(ExceptionPointers);
    else
      RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
  }
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionCode);
  return 0LL;
}
