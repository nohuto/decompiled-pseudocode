/*
 * XREFs of Template_dddddddddddd @ 0x1C00A93AC
 * Callers:
 *     EtwTraceTouchTargetingPointerEvent @ 0x1C00A8310 (EtwTraceTouchTargetingPointerEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_dddddddddddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-C9h] BYREF
  char *v17; // [rsp+40h] [rbp-B9h]
  __int64 v18; // [rsp+48h] [rbp-B1h]
  char *v19; // [rsp+50h] [rbp-A9h]
  __int64 v20; // [rsp+58h] [rbp-A1h]
  char *v21; // [rsp+60h] [rbp-99h]
  __int64 v22; // [rsp+68h] [rbp-91h]
  char *v23; // [rsp+70h] [rbp-89h]
  __int64 v24; // [rsp+78h] [rbp-81h]
  char *v25; // [rsp+80h] [rbp-79h]
  __int64 v26; // [rsp+88h] [rbp-71h]
  char *v27; // [rsp+90h] [rbp-69h]
  __int64 v28; // [rsp+98h] [rbp-61h]
  char *v29; // [rsp+A0h] [rbp-59h]
  __int64 v30; // [rsp+A8h] [rbp-51h]
  char *v31; // [rsp+B0h] [rbp-49h]
  __int64 v32; // [rsp+B8h] [rbp-41h]
  char *v33; // [rsp+C0h] [rbp-39h]
  __int64 v34; // [rsp+C8h] [rbp-31h]
  char *v35; // [rsp+D0h] [rbp-29h]
  __int64 v36; // [rsp+D8h] [rbp-21h]
  char *v37; // [rsp+E0h] [rbp-19h]
  __int64 v38; // [rsp+E8h] [rbp-11h]
  int v39; // [rsp+128h] [rbp+2Fh] BYREF

  v39 = a4;
  UserData.Ptr = (ULONGLONG)&v39;
  *(_QWORD *)&UserData.Size = 4LL;
  v17 = &a5;
  v18 = 4LL;
  v19 = &a6;
  v20 = 4LL;
  v21 = &a7;
  v23 = &a8;
  v25 = &a9;
  v27 = &a10;
  v29 = &a11;
  v31 = &a12;
  v33 = &a13;
  v35 = &a14;
  v37 = &a15;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &TouchTargetingPointerEvent, &W32kControlGuid, 0xCu, &UserData);
}
