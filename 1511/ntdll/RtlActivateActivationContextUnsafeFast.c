/*
 * XREFs of RtlActivateActivationContextUnsafeFast @ 0x1800151C0
 * Callers:
 *     LdrpProcessDetachNode @ 0x18000554C (LdrpProcessDetachNode.c)
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180009F20 (TppCleanupGroupMemberCallbackProlog.c)
 *     LdrpLoadForwardedDll @ 0x180010DF8 (LdrpLoadForwardedDll.c)
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180012D60 (LdrpInitializeThread.c)
 *     TppWorkpExecuteCallback @ 0x18002D420 (TppWorkpExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18002E130 (TppAlpcpExecuteCallback.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpQuerySxSMUIFile @ 0x18003CFD0 (LdrpQuerySxSMUIFile.c)
 *     LdrShutdownProcess @ 0x18005B1A0 (LdrShutdownProcess.c)
 *     LdrpInitializeNode @ 0x180071F68 (LdrpInitializeNode.c)
 *     RtlDispatchAPC @ 0x180081AF0 (RtlDispatchAPC.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
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
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
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
    return;
  }
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
}
