/*
 * XREFs of RtlUnwind @ 0x1800F2F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x180035330 (RtlUnwindEx.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  struct _CONTEXT ContextRecord; // [rsp+30h] [rbp-4E8h] BYREF

  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, &ContextRecord, 0LL);
}
