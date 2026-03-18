/*
 * XREFs of Template_cppqp @ 0x1C00A8EB0
 * Callers:
 *     EtwTraceQueueInputMessage @ 0x1C000B4C4 (EtwTraceQueueInputMessage.c)
 *     EtwTraceRetrieveQueueEventMessage @ 0x1C000E1C0 (EtwTraceRetrieveQueueEventMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cppqp(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  char *v10; // [rsp+40h] [rbp-19h]
  __int64 v11; // [rsp+48h] [rbp-11h]
  char *v12; // [rsp+50h] [rbp-9h]
  __int64 v13; // [rsp+58h] [rbp-1h]
  char *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  char *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  char v18; // [rsp+B8h] [rbp+5Fh] BYREF

  v18 = a4;
  UserData.Ptr = (ULONGLONG)&v18;
  *(_QWORD *)&UserData.Size = 1LL;
  v10 = &a5;
  v11 = 8LL;
  v12 = &a6;
  v14 = &a7;
  v16 = &a8;
  v13 = 8LL;
  v15 = 4LL;
  v17 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 5u, &UserData);
}
