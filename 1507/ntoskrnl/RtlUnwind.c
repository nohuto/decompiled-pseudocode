/*
 * XREFs of RtlUnwind @ 0x1402469EC
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x14001C500 (RtlUnwindEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  struct _CONTEXT ContextRecord; // [rsp+30h] [rbp-4E8h] BYREF

  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, &ContextRecord, 0LL);
}
