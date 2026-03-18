/*
 * XREFs of RtlRaiseException @ 0x140211E04
 * Callers:
 *     RaiseException @ 0x1401514D8 (RaiseException.c)
 *     HvlpGetRegister128 @ 0x1401C1340 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x1401C13BC (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401C1460 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x140213778 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x1400B3138 (RtlVirtualUnwind.c)
 *     RtlDispatchException @ 0x1400F4D00 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x1400F6220 (RtlLookupFunctionEntry.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x14015C6E0 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x140166F00 (RtlpCaptureContext.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  NTSTATUS v2; // ebx
  DWORD64 Rip; // rsi
  struct _RUNTIME_FUNCTION *v4; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-528h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-520h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-518h] BYREF
  CONTEXT Context; // [rsp+60h] [rbp-508h] BYREF

  v2 = -1073741786;
  RtlpCaptureContext();
  Rip = Context.Rip;
  v4 = RtlLookupFunctionEntry(Context.Rip, &ImageBase, 0LL);
  if ( !v4 )
LABEL_4:
    RtlRaiseStatus(v2);
  RtlVirtualUnwind(0, ImageBase, Rip, v4, &Context, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = (void *)Context.Rip;
  if ( !RtlDispatchException(ExceptionRecord, &Context) )
  {
    v2 = ZwRaiseException(ExceptionRecord, &Context, 0);
    goto LABEL_4;
  }
}
