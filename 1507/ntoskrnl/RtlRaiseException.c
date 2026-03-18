/*
 * XREFs of RtlRaiseException @ 0x140246A34
 * Callers:
 *     RaiseException @ 0x1401761C8 (RaiseException.c)
 *     HvlpGetRegister128 @ 0x1401F0338 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x1401F03C0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401F0464 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x1402484A0 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlDispatchException @ 0x14001BBB0 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x14001D0C0 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x14012E39C (RtlVirtualUnwind.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x140181970 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x14018B540 (RtlpCaptureContext.c)
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
