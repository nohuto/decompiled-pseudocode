/*
 * XREFs of ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00AB5E8
 * Callers:
 *     EtwTraceUIPIMsgError @ 0x1C0076400 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPIInputError @ 0x1C00765E0 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPISystemError @ 0x1C00778E0 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C007AC30 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C007C70C (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00ACAD0 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00ACBB0 (EtwTraceUIPIHookError.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceUIPIError(PCEVENT_DESCRIPTOR EventDescriptor, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  v3.Ptr = a2;
  v3.Size = a3;
  v3.Reserved = 0;
  EtwWrite(Microsoft_Windows_Win32kHandle, EventDescriptor, &W32kControlGuid, 1u, &v3);
}
