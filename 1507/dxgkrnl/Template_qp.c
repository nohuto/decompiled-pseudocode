/*
 * XREFs of Template_qp @ 0x1C000A3C0
 * Callers:
 *     DxgkStatusChangeNotify @ 0x1C00ACF40 (DxgkStatusChangeNotify.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qp(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6.Ptr = (ULONGLONG)&v9;
  v5 = 0LL;
  v7 = &v5;
  *(_QWORD *)&v6.Size = 4LL;
  v8 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &Dxgk_PerfTrack_StatusChangeNotify, 0LL, 2u, &v6);
}
