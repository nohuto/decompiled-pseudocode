/*
 * XREFs of RtlDeactivateActivationContext @ 0x180063B20
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlReleaseActivationContext @ 0x18003D9D0 (RtlReleaseActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180063C28 (RtlpFreeActivationContextStackFrame.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 */

void __cdecl RtlDeactivateActivationContext(ULONG Flags, ULONG_PTR Cookie)
{
  struct _TEB *v3; // rax
  unsigned __int64 *ActivationContextStackPointer; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rcx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-C8h] BYREF

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() called with invalid flags 0x%08lx\n", "RtlDeactivateActivationContext", Flags);
    RtlRaiseStatus(-1073741811);
  }
  if ( Cookie )
  {
    if ( Cookie >> 60 != 1 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie type 0x%08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie);
      RtlRaiseStatus(-1073741811);
    }
    v3 = NtCurrentTeb();
    if ( ((HIDWORD(Cookie) ^ v3->ActivationContextStackPointer->StackId) & 0xFFFFFFF) != 0 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie tid 0x%08Ix - should be %08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie,
        v3->ActivationContextStackPointer->StackId & 0xFFFFFFF);
      RtlRaiseStatus(-1073741811);
    }
    ActivationContextStackPointer = (unsigned __int64 *)v3->ActivationContextStackPointer;
    v5 = *ActivationContextStackPointer;
    if ( *ActivationContextStackPointer )
    {
      if ( (*(_DWORD *)(v5 + 16) & 8) != 0
        && *(_QWORD *)((v5 & -(__int64)((*(_DWORD *)(v5 + 16) & 8) != 0)) + 0x18) == Cookie )
      {
        v6 = *(_QWORD *)v5;
      }
      else
      {
        v8 = *(_QWORD *)v5;
        v9 = 0;
        if ( *(_QWORD *)v5 )
          v10 = v8 & -(__int64)((*(_BYTE *)(v8 + 16) & 8) != 0);
        else
          v10 = 0LL;
        if ( !v8 )
          goto LABEL_31;
        do
        {
          if ( v10 && *(_QWORD *)(v10 + 24) == Cookie )
            break;
          v8 = *(_QWORD *)v8;
          ++v9;
          v10 = v8 ? v8 & -(__int64)((*(_BYTE *)(v8 + 16) & 8) != 0) : 0LL;
        }
        while ( v8 );
        if ( !v8 )
LABEL_31:
          RtlRaiseStatus(-1072365552);
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionInformation[0] = v9;
        ExceptionRecord.NumberParameters = 3;
        ExceptionRecord.ExceptionInformation[1] = v8;
        ExceptionRecord.ExceptionInformation[2] = v5;
        ExceptionRecord.ExceptionCode = -1072365553;
        RtlRaiseException(&ExceptionRecord);
        v6 = *(_QWORD *)v8;
      }
      do
      {
        v7 = *(_QWORD *)v5;
        if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
          RtlReleaseActivationContext(*(PACTIVATION_CONTEXT *)(v5 + 8));
        if ( (*(_BYTE *)(v5 + 16) & 8) != 0 )
          RtlpFreeActivationContextStackFrame(ActivationContextStackPointer, v5);
        v5 = v7;
      }
      while ( v7 != v6 );
      *ActivationContextStackPointer = v6;
    }
  }
}
