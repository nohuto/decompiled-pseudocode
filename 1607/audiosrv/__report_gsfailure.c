/*
 * XREFs of __report_gsfailure @ 0x1800365B0
 * Callers:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x180036544 (__raise_securityfailure.c)
 *     capture_previous_context @ 0x180036688 (capture_previous_context.c)
 *     IsProcessorFeaturePresent_0 @ 0x180037CE2 (IsProcessorFeaturePresent_0.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent_0(0x17u) )
    __fastfail(2u);
  capture_previous_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1800CA720 = retaddr;
  ContextRecord.Rcx = v2;
  dword_1800CA710 = -1073740791;
  dword_1800CA714 = 1;
  dword_1800CA728 = 1;
  unk_1800CA730 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
