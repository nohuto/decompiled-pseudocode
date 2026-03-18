/*
 * XREFs of ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00A7078
 * Callers:
 *     EtwTraceUIPIInputError @ 0x1C00127B0 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPIMsgError @ 0x1C0013F50 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPISystemError @ 0x1C0014BA0 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C0016AD0 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0018A0C (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00A85B0 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00A8690 (EtwTraceUIPIHookError.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceUIPIError(PCEVENT_DESCRIPTOR EventDescriptor, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  v3.Ptr = a2;
  v3.Size = a3;
  v3.Reserved = 0;
  EtwWrite(Microsoft_Windows_Win32kHandle, EventDescriptor, &W32kControlGuid, 1u, &v3);
}
