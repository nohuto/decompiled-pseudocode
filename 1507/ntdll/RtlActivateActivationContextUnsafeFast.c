/*
 * XREFs of RtlActivateActivationContextUnsafeFast @ 0x180021D00
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrShutdownThread @ 0x180021810 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180021AB8 (LdrpInitializeThread.c)
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18003B9F0 (TppAlpcpExecuteCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003C274 (TppCleanupGroupMemberCallbackProlog.c)
 *     LdrpProcessDetachNode @ 0x180043728 (LdrpProcessDetachNode.c)
 *     LdrShutdownProcess @ 0x180044620 (LdrShutdownProcess.c)
 *     LdrpInitializeNode @ 0x180044DE4 (LdrpInitializeNode.c)
 *     LdrpQuerySxSMUIFile @ 0x18006E354 (LdrpQuerySxSMUIFile.c)
 *     RtlDispatchAPC @ 0x180077790 (RtlDispatchAPC.c)
 *     LdrpLoadForwardedDll @ 0x18007A1FC (LdrpLoadForwardedDll.c)
 *     RtlpTpWorkCallback @ 0x18007C030 (RtlpTpWorkCallback.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

void __fastcall RtlActivateActivationContextUnsafeFast(__int64 a1, __int64 a2)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r9
  unsigned __int64 ActiveFrame; // r8
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h]

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  if ( *(_QWORD *)a1 >= 0x48uLL )
  {
    *(_QWORD *)(a1 + 40) = ~ActiveFrame;
    *(_QWORD *)(a1 + 48) = ~a2;
    *(_QWORD *)(a1 + 56) = retaddr;
  }
  if ( !ActiveFrame || (*(_DWORD *)(ActiveFrame + 16) & 0x70) == 0x20 )
  {
    *(_QWORD *)(a1 + 24) = a2;
    *(_QWORD *)(a1 + 16) = ActiveFrame;
    *(_DWORD *)(a1 + 32) = 32;
    if ( ActiveFrame )
    {
      if ( *(_QWORD *)(ActiveFrame + 8) == a2 )
        goto LABEL_8;
    }
    else if ( !a2 )
    {
LABEL_8:
      *(_DWORD *)(a1 + 32) = 48;
      return;
    }
    ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)(a1 + 16);
    return;
  }
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 4;
  ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
  ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
  ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
  ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
  ExceptionRecord.ExceptionCode = -1072365548;
  ExceptionRecord.ExceptionFlags = 1;
  RtlRaiseException(&ExceptionRecord);
}
