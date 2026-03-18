/*
 * XREFs of Template_qqqqqqqqqDR8 @ 0x1C0021008
 * Callers:
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0157B90 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqqqqqqDR8(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        int a12,
        __int64 a13)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-A1h] BYREF
  char *v15; // [rsp+40h] [rbp-91h]
  __int64 v16; // [rsp+48h] [rbp-89h]
  char *v17; // [rsp+50h] [rbp-81h]
  __int64 v18; // [rsp+58h] [rbp-79h]
  char *v19; // [rsp+60h] [rbp-71h]
  __int64 v20; // [rsp+68h] [rbp-69h]
  char *v21; // [rsp+70h] [rbp-61h]
  __int64 v22; // [rsp+78h] [rbp-59h]
  char *v23; // [rsp+80h] [rbp-51h]
  __int64 v24; // [rsp+88h] [rbp-49h]
  char *v25; // [rsp+90h] [rbp-41h]
  __int64 v26; // [rsp+98h] [rbp-39h]
  char *v27; // [rsp+A0h] [rbp-31h]
  __int64 v28; // [rsp+A8h] [rbp-29h]
  int *v29; // [rsp+B0h] [rbp-21h]
  __int64 v30; // [rsp+B8h] [rbp-19h]
  __int64 v31; // [rsp+C0h] [rbp-11h]
  int v32; // [rsp+C8h] [rbp-9h]
  int v33; // [rsp+CCh] [rbp-5h]
  int v34; // [rsp+108h] [rbp+37h] BYREF

  v34 = a4;
  UserData.Ptr = (ULONGLONG)&v34;
  v33 = 0;
  v15 = &a5;
  *(_QWORD *)&UserData.Size = 4LL;
  v17 = &a6;
  v16 = 4LL;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  v25 = &a10;
  v27 = &a11;
  v29 = &a12;
  v31 = a13;
  v32 = 4 * a12;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0xAu, &UserData);
}
