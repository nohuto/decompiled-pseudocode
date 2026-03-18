/*
 * XREFs of Template_cppppqqq @ 0x1C00A8BE0
 * Callers:
 *     EtwTraceRetrievePostMessage @ 0x1C000BAE0 (EtwTraceRetrievePostMessage.c)
 *     EtwTraceRetrievePseudoMessage @ 0x1C0010C80 (EtwTraceRetrievePseudoMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cppppqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11)
{
  int v12; // [rsp+30h] [rbp-91h] BYREF
  __int64 v13; // [rsp+38h] [rbp-89h] BYREF
  __int64 v14; // [rsp+40h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-71h] BYREF
  char *v16; // [rsp+60h] [rbp-61h]
  __int64 v17; // [rsp+68h] [rbp-59h]
  char *v18; // [rsp+70h] [rbp-51h]
  __int64 v19; // [rsp+78h] [rbp-49h]
  __int64 *v20; // [rsp+80h] [rbp-41h]
  __int64 v21; // [rsp+88h] [rbp-39h]
  __int64 *v22; // [rsp+90h] [rbp-31h]
  __int64 v23; // [rsp+98h] [rbp-29h]
  int *v24; // [rsp+A0h] [rbp-21h]
  __int64 v25; // [rsp+A8h] [rbp-19h]
  char *v26; // [rsp+B0h] [rbp-11h]
  __int64 v27; // [rsp+B8h] [rbp-9h]
  char *v28; // [rsp+C0h] [rbp-1h]
  __int64 v29; // [rsp+C8h] [rbp+7h]
  char v30; // [rsp+108h] [rbp+47h] BYREF

  v30 = a4;
  UserData.Ptr = (ULONGLONG)&v30;
  *(_QWORD *)&UserData.Size = 1LL;
  v12 = 0;
  v16 = &a5;
  v18 = &a6;
  v20 = &v13;
  v14 = 0LL;
  v22 = &v14;
  v24 = &v12;
  v26 = &a10;
  v28 = &a11;
  v13 = 0LL;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 8u, &UserData);
}
