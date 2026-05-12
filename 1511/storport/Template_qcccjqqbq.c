/*
 * XREFs of Template_qcccjqqbq @ 0x1C0037EF8
 * Callers:
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C0036C14 (StorEtwHwTimeoutDetectedEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjqqbq(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        int a10,
        __int64 a11,
        char a12)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-89h] BYREF
  char *v14; // [rsp+40h] [rbp-79h]
  __int64 v15; // [rsp+48h] [rbp-71h]
  char *v16; // [rsp+50h] [rbp-69h]
  __int64 v17; // [rsp+58h] [rbp-61h]
  char *v18; // [rsp+60h] [rbp-59h]
  __int64 v19; // [rsp+68h] [rbp-51h]
  __int64 v20; // [rsp+70h] [rbp-49h]
  __int64 v21; // [rsp+78h] [rbp-41h]
  char *v22; // [rsp+80h] [rbp-39h]
  __int64 v23; // [rsp+88h] [rbp-31h]
  int *v24; // [rsp+90h] [rbp-29h]
  __int64 v25; // [rsp+98h] [rbp-21h]
  __int64 v26; // [rsp+A0h] [rbp-19h]
  int v27; // [rsp+A8h] [rbp-11h]
  int v28; // [rsp+ACh] [rbp-Dh]
  char *v29; // [rsp+B0h] [rbp-9h]
  __int64 v30; // [rsp+B8h] [rbp-1h]
  int v31; // [rsp+F8h] [rbp+3Fh] BYREF

  v31 = a4;
  UserData.Ptr = (unsigned __int64)&v31;
  *(_QWORD *)&UserData.Size = 4LL;
  v28 = 0;
  v14 = &a5;
  v15 = 1LL;
  v16 = &a6;
  v18 = &a7;
  v20 = a8;
  v22 = &a9;
  v24 = &a10;
  v26 = a11;
  v27 = a10;
  v29 = &a12;
  v17 = 1LL;
  v19 = 1LL;
  v21 = 16LL;
  v23 = 4LL;
  v25 = 4LL;
  v30 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitHwTimeout, a3, 9u, &UserData);
}
