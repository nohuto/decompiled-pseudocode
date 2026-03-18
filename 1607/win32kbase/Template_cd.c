/*
 * XREFs of Template_cd @ 0x1C00B6540
 * Callers:
 *     EtwTraceEndAppMessageProcessing @ 0x1C0074760 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceEndDispatchMessage @ 0x1C0078BA0 (EtwTraceEndDispatchMessage.c)
 *     EtwTraceBeginDispatchMessage @ 0x1C0078BC0 (EtwTraceBeginDispatchMessage.c)
 *     EtwTraceEndTranslateMessage @ 0x1C007D6A0 (EtwTraceEndTranslateMessage.c)
 *     EtwTraceBeginTranslateMessage @ 0x1C007D6C0 (EtwTraceBeginTranslateMessage.c)
 *     EtwTraceWakeDIT @ 0x1C007E140 (EtwTraceWakeDIT.c)
 *     EtwTraceWakeRIT @ 0x1C00B6450 (EtwTraceWakeRIT.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cd(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, char a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  char v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (ULONGLONG)&v10;
  v6.Reserved = 0;
  v6.Size = 1;
  v7 = &a5;
  v9 = 0;
  v8 = 4;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 2u, &v6);
}
