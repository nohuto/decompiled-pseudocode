/*
 * XREFs of LdrpFatalExceptionFilter @ 0x1800D2D5C
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x1800784A0 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007AEE0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReportSilentProcessExit @ 0x180007300 (RtlReportSilentProcessExit.c)
 *     RtlDecodePointer @ 0x180051BD0 (RtlDecodePointer.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall LdrpFatalExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  struct _TEB *v2; // rcx
  NTSTATUS ExceptionCode; // edi
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
