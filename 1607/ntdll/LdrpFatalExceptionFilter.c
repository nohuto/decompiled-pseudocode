/*
 * XREFs of LdrpFatalExceptionFilter @ 0x1800D2C9C
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x1800784B0 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007AEF0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReportSilentProcessExit @ 0x180007310 (RtlReportSilentProcessExit.c)
 *     RtlDecodePointer @ 0x180051BE0 (RtlDecodePointer.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall LdrpFatalExceptionFilter(_DWORD **a1)
{
  struct _TEB *v2; // rcx
  void (__fastcall *v3)(_DWORD **); // rax

  v2 = NtCurrentTeb();
  if ( **a1 == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit(-1LL, -1073741571);
  }
  else
  {
    v3 = (void (__fastcall *)(_DWORD **))RtlDecodePointer(RtlpUnhandledExceptionFilter);
    if ( v3 )
      v3(a1);
    else
      RtlUnhandledExceptionFilter2(a1, &unk_18010C822);
  }
  ZwTerminateProcess();
  return 0LL;
}
