/*
 * XREFs of __report_gsfailure @ 0x180026270
 * Callers:
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x180026228 (__raise_securityfailure.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *FunctionEntry; // [rsp+40h] [rbp-48h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-40h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-30h] BYREF
  PVOID HandlerData[5]; // [rsp+60h] [rbp-28h] BYREF

  RtlCaptureContext(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
    ContextRecord.Rsp += 8LL;
  }
  qword_18003A610 = ContextRecord.Rip;
  ContextRecord.Rcx = StackCookie;
  dword_18003A600 = -1073740791;
  dword_18003A604 = 1;
  dword_18003A618 = 3;
  qword_18003A620[0] = 2LL;
  qword_18003A620[1] = _security_cookie;
  qword_18003A620[2] = qword_18003A078;
  HandlerData[2] = (PVOID)qword_18003A078;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
