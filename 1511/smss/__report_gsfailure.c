/*
 * XREFs of __report_gsfailure @ 0x14000BFF0
 * Callers:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 * Callees:
 *     NtTerminateProcess @ 0x14000C2AC (NtTerminateProcess.c)
 *     RtlCaptureContext @ 0x14000C2FC (RtlCaptureContext.c)
 *     RtlLookupFunctionEntry @ 0x14000C308 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x14000C314 (RtlVirtualUnwind.c)
 *     RtlUnhandledExceptionFilter @ 0x14000C320 (RtlUnhandledExceptionFilter.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  struct _RUNTIME_FUNCTION *FunctionEntry; // [rsp+40h] [rbp-48h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-40h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-30h] BYREF
  PVOID HandlerData[5]; // [rsp+60h] [rbp-28h] BYREF
  DWORD64 retaddr; // [rsp+88h] [rbp+0h]
  uintptr_t v7; // [rsp+90h] [rbp+8h] BYREF

  v7 = StackCookie;
  RtlCaptureContext(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&v7;
  }
  qword_14001F670 = ContextRecord.Rip;
  ContextRecord.Rcx = v7;
  dword_14001F660 = -1073740791;
  dword_14001F664 = 1;
  dword_14001F678 = 1;
  unk_14001F680 = 1LL;
  HandlerData[2] = (PVOID)qword_14001F008;
  RtlUnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
