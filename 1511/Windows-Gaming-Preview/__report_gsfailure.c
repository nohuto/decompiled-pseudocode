/*
 * XREFs of __report_gsfailure @ 0x180025DA0
 * Callers:
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x180025D3C (__raise_securityfailure.c)
 *     capture_previous_context @ 0x180025E78 (capture_previous_context.c)
 *     IsProcessorFeaturePresent_0 @ 0x18002695C (IsProcessorFeaturePresent_0.c)
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
  qword_180037280 = retaddr;
  ContextRecord.Rcx = v2;
  dword_180037270 = -1073740791;
  dword_180037274 = 1;
  dword_180037288 = 1;
  unk_180037290 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
