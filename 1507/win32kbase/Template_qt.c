/*
 * XREFs of Template_qt @ 0x1C00AAF8C
 * Callers:
 *     EtwTraceSmoothRotationStop @ 0x1C00A7D50 (EtwTraceSmoothRotationStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qt(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (ULONGLONG)&v10;
  v6.Reserved = 0;
  v6.Size = 4;
  v7 = &a5;
  v9 = 0;
  v8 = 4;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &SmoothRotationStop, &W32kControlGuid, 2u, &v6);
}
