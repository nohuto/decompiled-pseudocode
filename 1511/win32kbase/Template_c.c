/*
 * XREFs of Template_c @ 0x1C00ACD38
 * Callers:
 *     EtwTraceConvertTimeOutToBlocking @ 0x1C00AB930 (EtwTraceConvertTimeOutToBlocking.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_c(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  v5.Ptr = (ULONGLONG)&v6;
  v5.Size = 1;
  v5.Reserved = 0;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &ConvertTimeOutToBlocking, &W32kControlGuid, 1u, &v5);
}
