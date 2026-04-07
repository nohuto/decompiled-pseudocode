/*
 * XREFs of __report_gsfailure @ 0x18004F2A0
 * Callers:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x18004F264 (__raise_securityfailure.c)
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
  qword_1800B7730 = ContextRecord.Rip;
  ContextRecord.Rcx = StackCookie;
  dword_1800B7720 = -1073740791;
  dword_1800B7724 = 1;
  dword_1800B7738 = 3;
  qword_1800B7740[0] = 2LL;
  qword_1800B7740[1] = _security_cookie;
  qword_1800B7740[2] = _security_cookie_complement;
  HandlerData[2] = (PVOID)_security_cookie_complement;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
