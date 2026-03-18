/*
 * XREFs of Template_cppppqqqqq @ 0x1C00AD164
 * Callers:
 *     EtwTraceBeginSendMessage @ 0x1C006E950 (EtwTraceBeginSendMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cppppqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  int v14; // [rsp+30h] [rbp-C1h] BYREF
  __int64 v15; // [rsp+38h] [rbp-B9h] BYREF
  __int64 v16; // [rsp+40h] [rbp-B1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-A1h] BYREF
  char *v18; // [rsp+60h] [rbp-91h]
  __int64 v19; // [rsp+68h] [rbp-89h]
  char *v20; // [rsp+70h] [rbp-81h]
  __int64 v21; // [rsp+78h] [rbp-79h]
  __int64 *v22; // [rsp+80h] [rbp-71h]
  __int64 v23; // [rsp+88h] [rbp-69h]
  __int64 *v24; // [rsp+90h] [rbp-61h]
  __int64 v25; // [rsp+98h] [rbp-59h]
  int *v26; // [rsp+A0h] [rbp-51h]
  __int64 v27; // [rsp+A8h] [rbp-49h]
  char *v28; // [rsp+B0h] [rbp-41h]
  __int64 v29; // [rsp+B8h] [rbp-39h]
  char *v30; // [rsp+C0h] [rbp-31h]
  __int64 v31; // [rsp+C8h] [rbp-29h]
  char *v32; // [rsp+D0h] [rbp-21h]
  __int64 v33; // [rsp+D8h] [rbp-19h]
  char *v34; // [rsp+E0h] [rbp-11h]
  __int64 v35; // [rsp+E8h] [rbp-9h]
  char v36; // [rsp+128h] [rbp+37h] BYREF

  v36 = a4;
  UserData.Ptr = (ULONGLONG)&v36;
  *(_QWORD *)&UserData.Size = 1LL;
  v14 = 0;
  v18 = &a5;
  v20 = &a6;
  v22 = &v15;
  v16 = 0LL;
  v24 = &v16;
  v26 = &v14;
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  v34 = &a13;
  v15 = 0LL;
  v19 = 8LL;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 8LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &BeginSendMessage, &W32kControlGuid, 0xAu, &UserData);
}
