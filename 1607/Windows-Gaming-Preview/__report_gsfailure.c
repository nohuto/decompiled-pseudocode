/*
 * XREFs of __report_gsfailure @ 0x180026130
 * Callers:
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x1800260C4 (__raise_securityfailure.c)
 *     capture_previous_context @ 0x180026208 (capture_previous_context.c)
 *     IsProcessorFeaturePresent_0 @ 0x1800271AA (IsProcessorFeaturePresent_0.c)
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
  qword_180038260 = retaddr;
  ContextRecord.Rcx = v2;
  dword_180038250 = -1073740791;
  dword_180038254 = 1;
  dword_180038268 = 1;
  unk_180038270 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
