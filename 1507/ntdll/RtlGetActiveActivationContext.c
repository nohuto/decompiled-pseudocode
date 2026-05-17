/*
 * XREFs of RtlGetActiveActivationContext @ 0x18003DCF0
 * Callers:
 *     LdrpAllocateModuleEntry @ 0x1800402B4 (LdrpAllocateModuleEntry.c)
 * Callees:
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlAddRefActivationContext @ 0x18003E870 (RtlAddRefActivationContext.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGetActiveActivationContext(_QWORD *a1)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rdx
  unsigned __int64 ActiveFrame; // rbx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-59h] BYREF

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( a1 )
  {
    *a1 = 0LL;
    if ( ActivationContextStackPointer )
    {
      ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      if ( ActivationContextStackPointer->ActiveFrame )
      {
        if ( (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20
          || (*(_BYTE *)(ActiveFrame + 16) & 8) == 0
          && *(_QWORD *)(ActiveFrame - 16) >= 0x48uLL
          && (*(_QWORD *)(ActiveFrame + 24) != ~*(_QWORD *)ActiveFrame
           || *(_QWORD *)(ActiveFrame + 32) != ~*(_QWORD *)(ActiveFrame + 8)) )
        {
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.NumberParameters = 4;
          ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
          ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
          ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
          ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
          ExceptionRecord.ExceptionCode = -1072365548;
          ExceptionRecord.ExceptionFlags = 1;
          RtlRaiseException(&ExceptionRecord);
          return 3221225701LL;
        }
        RtlAddRefActivationContext(*(_QWORD *)(ActiveFrame + 8));
        *a1 = *(_QWORD *)(ActiveFrame + 8);
      }
    }
    return 0LL;
  }
  return 3221225485LL;
}
