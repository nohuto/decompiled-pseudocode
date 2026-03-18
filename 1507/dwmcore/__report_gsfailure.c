/*
 * XREFs of __report_gsfailure @ 0x180097D60
 * Callers:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x180097D1C (__raise_securityfailure.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  struct _RUNTIME_FUNCTION *FunctionEntry; // [rsp+40h] [rbp-48h]
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
  qword_180192A40 = ContextRecord.Rip;
  ContextRecord.Rcx = StackCookie;
  dword_180192A30 = -1073740791;
  dword_180192A34 = 1;
  dword_180192A48 = 3;
  qword_180192A50[0] = 2LL;
  qword_180192A50[1] = _security_cookie;
  qword_180192A50[2] = _security_cookie_complement;
  HandlerData[2] = (PVOID)_security_cookie_complement;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
