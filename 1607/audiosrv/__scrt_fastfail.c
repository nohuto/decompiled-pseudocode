/*
 * XREFs of __scrt_fastfail @ 0x180036850
 * Callers:
 *     dllmain_crt_process_attach @ 0x180035C18 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x180035D34 (dllmain_crt_process_detach.c)
 *     __scrt_initialize_onexit_tables @ 0x180036244 (__scrt_initialize_onexit_tables.c)
 * Callees:
 *     memset @ 0x180036D30 (memset.c)
 *     IsProcessorFeaturePresent_0 @ 0x180037CE2 (IsProcessorFeaturePresent_0.c)
 */

LONG __fastcall _scrt_fastfail(unsigned int a1)
{
  ULONG64 Rip; // rbx
  struct _RUNTIME_FUNCTION *v3; // rax
  bool v4; // bl
  LONG result; // eax
  _EXCEPTION_POINTERS ExceptionInfo; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v7[20]; // [rsp+50h] [rbp-B0h] BYREF
  CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  DWORD64 retaddr; // [rsp+5C8h] [rbp+4C8h]
  __int64 v10; // [rsp+5D0h] [rbp+4D0h] BYREF
  unsigned __int64 ImageBase; // [rsp+5D8h] [rbp+4D8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+5E0h] [rbp+4E0h] BYREF
  PVOID HandlerData; // [rsp+5E8h] [rbp+4E8h] BYREF

  if ( IsProcessorFeaturePresent_0(0x17u) )
    __fastfail(a1);
  _scrt_debugger_hook_flag = 0;
  memset(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v3 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v3 )
    RtlVirtualUnwind(0, ImageBase, Rip, v3, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v10;
  memset(v7, 0, 0x98uLL);
  v7[2] = retaddr;
  v7[0] = 0x140000015LL;
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v7;
  v4 = IsDebuggerPresent();
  ExceptionInfo.ContextRecord = &ContextRecord;
  SetUnhandledExceptionFilter(0LL);
  result = UnhandledExceptionFilter(&ExceptionInfo);
  if ( !result )
  {
    result = -v4;
    _scrt_debugger_hook_flag &= result;
  }
  return result;
}
