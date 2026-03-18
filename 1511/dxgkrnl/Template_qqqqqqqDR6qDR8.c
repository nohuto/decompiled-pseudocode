/*
 * XREFs of Template_qqqqqqqDR6qDR8 @ 0x1C0020CF8
 * Callers:
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0157B90 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqqqqDR6qDR8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        int a10,
        __int64 a11,
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
  int *v25; // [rsp+90h] [rbp-41h]
  __int64 v26; // [rsp+98h] [rbp-39h]
  __int64 v27; // [rsp+A0h] [rbp-31h]
  int v28; // [rsp+A8h] [rbp-29h]
  int v29; // [rsp+ACh] [rbp-25h]
  int *v30; // [rsp+B0h] [rbp-21h]
  __int64 v31; // [rsp+B8h] [rbp-19h]
  __int64 v32; // [rsp+C0h] [rbp-11h]
  int v33; // [rsp+C8h] [rbp-9h]
  int v34; // [rsp+CCh] [rbp-5h]
  int v35; // [rsp+108h] [rbp+37h] BYREF

  v35 = a4;
  UserData.Ptr = (ULONGLONG)&v35;
  *(_QWORD *)&UserData.Size = 4LL;
  v16 = 4LL;
  v15 = &a5;
  v17 = &a6;
  v19 = &a7;
  v18 = 4LL;
  v21 = &a8;
  v23 = &a9;
  v25 = &a10;
  v27 = a11;
  v28 = 4 * a10;
  v30 = &a12;
  v32 = a13;
  v33 = 4 * a12;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v29 = 0;
  v31 = 4LL;
  v34 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &Dxgk_Diag_OutputDupl_Process_Present, 0LL, 0xAu, &UserData);
}
