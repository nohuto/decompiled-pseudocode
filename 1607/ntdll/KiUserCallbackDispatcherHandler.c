/*
 * XREFs of KiUserCallbackDispatcherHandler @ 0x1800A9F20
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x180035340 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x1800A64C0 (ZwCallbackReturn.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D17A0 (LdrpLogFatalUserCallbackException.c)
 */

__int64 __fastcall KiUserCallbackDispatcherHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        PCONTEXT ContextRecord)
{
  int ExceptionCode; // [rsp+30h] [rbp-8h]
  int v5; // [rsp+30h] [rbp-8h]

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) != 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
    {
      ExceptionCode = ExceptionRecord->ExceptionCode;
      RtlUnwindEx(
        TargetFrame,
        &KiUserCallbackDispatcherContinue,
        ExceptionRecord,
        (PVOID)(unsigned int)ExceptionRecord->ExceptionCode,
        ContextRecord,
        0LL);
      RtlRaiseStatus(ExceptionCode);
    }
    if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
    {
      v5 = ZwCallbackReturn();
      RtlRaiseStatus(v5);
    }
    return 1LL;
  }
  else
  {
    LdrpLogFatalUserCallbackException(ExceptionRecord, ContextRecord);
    return 0LL;
  }
}
