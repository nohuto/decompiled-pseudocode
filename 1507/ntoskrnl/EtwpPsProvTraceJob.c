/*
 * XREFs of EtwpPsProvTraceJob @ 0x1406E4C18
 * Callers:
 *     EtwTraceJob @ 0x1406E3A0C (EtwTraceJob.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceJob(__int64 a1, __int64 a2, int a3, __int16 a4)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-C0h]
  __int64 v8; // [rsp+48h] [rbp-B8h]
  int *v9; // [rsp+50h] [rbp-B0h]
  __int64 v10; // [rsp+58h] [rbp-A8h]
  __int64 v11; // [rsp+3B8h] [rbp+2B8h] BYREF
  int v12; // [rsp+3C0h] [rbp+2C0h] BYREF

  v12 = a3;
  v11 = a2;
  if ( a4 == 1824 )
  {
    v4 = &JobStart;
  }
  else
  {
    if ( a4 != 1825 )
      return result;
    v4 = (const EVENT_DESCRIPTOR *)&JobTerminate;
  }
  *(_QWORD *)&UserData.Size = 16LL;
  UserData.Ptr = a1 + 1232;
  v8 = 8LL;
  v7 = &v11;
  v9 = &v12;
  v10 = 4LL;
  return EtwWrite(EtwpPsProvRegHandle, v4, 0LL, 3u, &UserData);
}
