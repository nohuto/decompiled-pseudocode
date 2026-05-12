/*
 * XREFs of Template_qcccjqqbqt @ 0x1C003B840
 * Callers:
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C0039E7C (StorEtwHwTimeoutDetectedEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjqqbqt(
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
        char a12,
        char a13)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-A1h] BYREF
  char *v15; // [rsp+40h] [rbp-91h]
  __int64 v16; // [rsp+48h] [rbp-89h]
  char *v17; // [rsp+50h] [rbp-81h]
  __int64 v18; // [rsp+58h] [rbp-79h]
  char *v19; // [rsp+60h] [rbp-71h]
  __int64 v20; // [rsp+68h] [rbp-69h]
  __int64 v21; // [rsp+70h] [rbp-61h]
  __int64 v22; // [rsp+78h] [rbp-59h]
  char *v23; // [rsp+80h] [rbp-51h]
  __int64 v24; // [rsp+88h] [rbp-49h]
  int *v25; // [rsp+90h] [rbp-41h]
  __int64 v26; // [rsp+98h] [rbp-39h]
  __int64 v27; // [rsp+A0h] [rbp-31h]
  int v28; // [rsp+A8h] [rbp-29h]
  int v29; // [rsp+ACh] [rbp-25h]
  char *v30; // [rsp+B0h] [rbp-21h]
  __int64 v31; // [rsp+B8h] [rbp-19h]
  char *v32; // [rsp+C0h] [rbp-11h]
  __int64 v33; // [rsp+C8h] [rbp-9h]
  int v34; // [rsp+108h] [rbp+37h] BYREF

  v34 = a4;
  UserData.Ptr = (unsigned __int64)&v34;
  *(_QWORD *)&UserData.Size = 4LL;
  v29 = 0;
  v15 = &a5;
  v16 = 1LL;
  v17 = &a6;
  v19 = &a7;
  v21 = a8;
  v23 = &a9;
  v25 = &a10;
  v27 = a11;
  v28 = a10;
  v30 = &a12;
  v32 = &a13;
  v18 = 1LL;
  v20 = 1LL;
  v22 = 16LL;
  v24 = 4LL;
  v26 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitHwTimeout, a3, 0xAu, &UserData);
}
