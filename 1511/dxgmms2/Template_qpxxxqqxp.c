/*
 * XREFs of Template_qpxxxqqxp @ 0x1C001E8FC
 * Callers:
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0084FF4 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qpxxxqqxp(
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
        char a12)
{
  int v13; // [rsp+30h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-89h] BYREF
  char *v15; // [rsp+50h] [rbp-79h]
  __int64 v16; // [rsp+58h] [rbp-71h]
  char *v17; // [rsp+60h] [rbp-69h]
  __int64 v18; // [rsp+68h] [rbp-61h]
  char *v19; // [rsp+70h] [rbp-59h]
  __int64 v20; // [rsp+78h] [rbp-51h]
  char *v21; // [rsp+80h] [rbp-49h]
  __int64 v22; // [rsp+88h] [rbp-41h]
  int *v23; // [rsp+90h] [rbp-39h]
  __int64 v24; // [rsp+98h] [rbp-31h]
  char *v25; // [rsp+A0h] [rbp-29h]
  __int64 v26; // [rsp+A8h] [rbp-21h]
  char *v27; // [rsp+B0h] [rbp-19h]
  __int64 v28; // [rsp+B8h] [rbp-11h]
  char *v29; // [rsp+C0h] [rbp-9h]
  __int64 v30; // [rsp+C8h] [rbp-1h]
  int v31; // [rsp+108h] [rbp+3Fh] BYREF

  v31 = a4;
  UserData.Ptr = (ULONGLONG)&v31;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = 0;
  v15 = &a5;
  v16 = 8LL;
  v17 = &a6;
  v18 = 8LL;
  v19 = &a7;
  v21 = &a8;
  v23 = &v13;
  v25 = &a10;
  v27 = &a11;
  v29 = &a12;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 8LL;
  v30 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventReportSegment, 0LL, 9u, &UserData);
}
