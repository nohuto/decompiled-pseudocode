/*
 * XREFs of Template_cpppqqq @ 0x1C00AD27C
 * Callers:
 *     EtwTraceRetrieveInputMessage @ 0x1C0072E30 (EtwTraceRetrieveInputMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cpppqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10)
{
  int v11; // [rsp+30h] [rbp-79h] BYREF
  __int64 v12; // [rsp+38h] [rbp-71h] BYREF
  __int64 v13; // [rsp+40h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-59h] BYREF
  char *v15; // [rsp+60h] [rbp-49h]
  __int64 v16; // [rsp+68h] [rbp-41h]
  __int64 *v17; // [rsp+70h] [rbp-39h]
  __int64 v18; // [rsp+78h] [rbp-31h]
  __int64 *v19; // [rsp+80h] [rbp-29h]
  __int64 v20; // [rsp+88h] [rbp-21h]
  int *v21; // [rsp+90h] [rbp-19h]
  __int64 v22; // [rsp+98h] [rbp-11h]
  char *v23; // [rsp+A0h] [rbp-9h]
  __int64 v24; // [rsp+A8h] [rbp-1h]
  char *v25; // [rsp+B0h] [rbp+7h]
  __int64 v26; // [rsp+B8h] [rbp+Fh]
  char v27; // [rsp+F8h] [rbp+4Fh] BYREF

  v27 = a4;
  UserData.Ptr = (ULONGLONG)&v27;
  *(_QWORD *)&UserData.Size = 1LL;
  v11 = 0;
  v15 = &a5;
  v17 = &v12;
  v19 = &v13;
  v13 = 0LL;
  v21 = &v11;
  v23 = &a9;
  v25 = &a10;
  v12 = 0LL;
  v16 = 8LL;
  v18 = 8LL;
  v20 = 8LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &RetrieveInputMessage, &W32kControlGuid, 7u, &UserData);
}
