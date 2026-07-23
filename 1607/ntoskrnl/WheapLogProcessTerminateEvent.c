/*
 * XREFs of WheapLogProcessTerminateEvent @ 0x14023104C
 * Callers:
 *     WheaTerminateProcess @ 0x1406BA808 (WheaTerminateProcess.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapLogProcessTerminateEvent(int a1, __int64 a2, int a3)
{
  int v4; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v6; // [rsp+48h] [rbp-28h]
  int v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+54h] [rbp-1Ch]
  const size_t *v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp-10h]

  v4 = a1;
  UserData.Ptr = (ULONGLONG)&v4;
  v6 = a2;
  v9 = &cchOriginalDestLength;
  v7 = a3;
  v8 = 0;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = 2LL;
  return EtwWrite((REGHANDLE)WheapDispatchPtr.DriverObject, &EVENT_WHEA_PROCESS_TERMINATE, 0LL, 3u, &UserData);
}
