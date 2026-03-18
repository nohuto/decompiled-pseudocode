/*
 * XREFs of Template_qpxxxqqxpc @ 0x1C002044C
 * Callers:
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0099C58 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qpxxxqqxpc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  int v14; // [rsp+30h] [rbp-B1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-A1h] BYREF
  char *v16; // [rsp+50h] [rbp-91h]
  __int64 v17; // [rsp+58h] [rbp-89h]
  char *v18; // [rsp+60h] [rbp-81h]
  __int64 v19; // [rsp+68h] [rbp-79h]
  char *v20; // [rsp+70h] [rbp-71h]
  __int64 v21; // [rsp+78h] [rbp-69h]
  char *v22; // [rsp+80h] [rbp-61h]
  __int64 v23; // [rsp+88h] [rbp-59h]
  int *v24; // [rsp+90h] [rbp-51h]
  __int64 v25; // [rsp+98h] [rbp-49h]
  char *v26; // [rsp+A0h] [rbp-41h]
  __int64 v27; // [rsp+A8h] [rbp-39h]
  char *v28; // [rsp+B0h] [rbp-31h]
  __int64 v29; // [rsp+B8h] [rbp-29h]
  char *v30; // [rsp+C0h] [rbp-21h]
  __int64 v31; // [rsp+C8h] [rbp-19h]
  char *v32; // [rsp+D0h] [rbp-11h]
  __int64 v33; // [rsp+D8h] [rbp-9h]
  int v34; // [rsp+118h] [rbp+37h] BYREF

  v34 = a4;
  UserData.Ptr = (ULONGLONG)&v34;
  *(_QWORD *)&UserData.Size = 4LL;
  v14 = 0;
  v16 = &a5;
  v17 = 8LL;
  v18 = &a6;
  v19 = 8LL;
  v20 = &a7;
  v22 = &a8;
  v24 = &v14;
  v26 = &a10;
  v28 = &a11;
  v30 = &a12;
  v32 = &a13;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 8LL;
  v31 = 8LL;
  v33 = 1LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventReportSegment, 0LL, 0xAu, &UserData);
}
