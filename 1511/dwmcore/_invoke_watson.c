/*
 * XREFs of _invoke_watson @ 0x1800BBE80
 * Callers:
 *     _invalid_parameter @ 0x1800BBE74 (_invalid_parameter.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __cdecl __noreturn invoke_watson(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  ULONG64 Rip; // rbx
  struct _RUNTIME_FUNCTION *v6; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-508h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-500h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-4F8h] BYREF
  CONTEXT ContextRecord; // [rsp+60h] [rbp-4E8h] BYREF
  DWORD64 retaddr; // [rsp+548h] [rbp+0h] BYREF

  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v6 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v6 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v6, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  OutputDebugStringA("Invalid parameter passed to C runtime function.\n");
}
