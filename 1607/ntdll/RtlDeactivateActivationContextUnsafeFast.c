/*
 * XREFs of RtlDeactivateActivationContextUnsafeFast @ 0x180018740
 * Callers:
 *     LdrShutdownProcess @ 0x180006F20 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18000BBF4 (LdrpProcessDetachNode.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpLoadForwardedDll @ 0x1800132F0 (LdrpLoadForwardedDll.c)
 *     LdrShutdownThread @ 0x180015E40 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180016100 (LdrpInitializeThread.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001FF40 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpTpWorkCallback @ 0x18003A1B0 (RtlpTpWorkCallback.c)
 *     LdrpInitializeNode @ 0x180072374 (LdrpInitializeNode.c)
 *     LdrpQuerySxSMUIFile @ 0x18007C1EC (LdrpQuerySxSMUIFile.c)
 *     RtlDispatchAPC @ 0x180086130 (RtlDispatchAPC.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

void __fastcall RtlDeactivateActivationContextUnsafeFast(__int64 a1)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rdi
  unsigned __int64 ActiveFrame; // rdx
  unsigned __int64 v4; // rcx
  int v5; // r8d
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME **v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *v9; // r12
  unsigned int v10; // r15d
  int v11; // ecx
  int v12; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-79h] BYREF
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+5Fh]

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  v4 = *(unsigned int *)(a1 + 32);
  if ( (v4 & 0x40) != 0 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[1] = a1 + 16;
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[0] = 0LL;
    v7 = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365551;
    ExceptionRecord.ExceptionInformation[2] = v7;
    ExceptionRecord.ExceptionFlags = 0;
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  if ( (v4 & 0x20) == 0 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[1] = a1 + 16;
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[0] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365552;
LABEL_26:
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  if ( (v4 & 0x60) != 0x20 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[2] = a1 + 16;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = v4;
    ExceptionRecord.ExceptionCode = -1072365548;
    goto LABEL_26;
  }
  if ( *(_QWORD *)a1 >= 0x48uLL
    && (*(_QWORD *)(a1 + 40) != ~*(_QWORD *)(a1 + 16) || *(_QWORD *)(a1 + 48) != ~*(_QWORD *)(a1 + 24)) )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = a1 + 16;
    ExceptionRecord.ExceptionInformation[3] = v4;
    ExceptionRecord.ExceptionCode = -1072365548;
    goto LABEL_26;
  }
  if ( ActiveFrame )
  {
    v5 = *(_DWORD *)(ActiveFrame + 16);
    if ( (v5 & 0x70) != 0x20
      || (v5 & 8) == 0
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
      goto LABEL_26;
    }
  }
  if ( (v4 & 0x10) == 0 )
  {
    v6 = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME **)(a1 + 16);
    if ( ActiveFrame != a1 + 16 )
    {
      v8 = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      v9 = *v6;
      v10 = 0;
      DbgPrintEx(
        0x33u,
        2u,
        "SXS: %s() Active frame is not the frame being deactivated %p != %p\n",
        "RtlDeactivateActivationContextUnsafeFast",
        ActivationContextStackPointer->ActiveFrame,
        (const void *)(a1 + 16));
      if ( v8 )
      {
        while ( (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v8 != v9 )
        {
          v11 = *(_DWORD *)(v8 + 16);
          if ( (v11 & 0x70) != 0x20
            || (v11 & 8) == 0
            && (*(_QWORD *)(v8 + 24) != ~*(_QWORD *)v8 || *(_QWORD *)(v8 + 32) != ~*(_QWORD *)(v8 + 8)) )
          {
            ExceptionRecord.ExceptionRecord = 0LL;
            ExceptionRecord.NumberParameters = 4;
            ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
            ExceptionRecord.ExceptionInformation[1] = v8;
            ExceptionRecord.ExceptionInformation[2] = a1 + 16;
            ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(v8 + 16);
            ExceptionRecord.ExceptionCode = -1072365548;
            ExceptionRecord.ExceptionFlags = 1;
            RtlRaiseException(&ExceptionRecord);
            return;
          }
          v8 = *(_QWORD *)v8;
          ++v10;
          if ( !v8 )
            break;
        }
      }
      ExceptionRecord.ExceptionInformation[0] = v10;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 3;
      ExceptionRecord.ExceptionInformation[1] = a1 + 16;
      ExceptionRecord.ExceptionInformation[2] = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      if ( v8 )
      {
        ExceptionRecord.ExceptionFlags = 0;
        v12 = -1072365553;
        if ( !v10 )
          v12 = -1072365551;
        ExceptionRecord.ExceptionCode = v12;
      }
      else
      {
        ExceptionRecord.ExceptionCode = -1072365552;
        ExceptionRecord.ExceptionFlags = 1;
      }
      RtlRaiseException(&ExceptionRecord);
    }
    ActivationContextStackPointer->ActiveFrame = *v6;
  }
  *(_DWORD *)(a1 + 32) |= 0x40u;
  if ( *(_QWORD *)a1 >= 0x48uLL )
    *(_QWORD *)(a1 + 64) = retaddr;
}
