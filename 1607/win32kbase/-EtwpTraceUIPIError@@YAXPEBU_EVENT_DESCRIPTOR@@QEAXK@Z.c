/*
 * XREFs of ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00B4CF0
 * Callers:
 *     EtwTraceUIPIMsgError @ 0x1C007A660 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPIInputError @ 0x1C007B180 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPISystemError @ 0x1C007B520 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C007EED0 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0080F58 (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00B6280 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00B6350 (EtwTraceUIPIHookError.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceUIPIError(PCEVENT_DESCRIPTOR EventDescriptor, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  v3.Ptr = a2;
  v3.Size = a3;
  v3.Reserved = 0;
  EtwWrite(Microsoft_Windows_Win32kHandle, EventDescriptor, &W32kControlGuid, 1u, &v3);
}
