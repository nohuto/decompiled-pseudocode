/*
 * XREFs of Template_qpxxtqqq @ 0x1C0020368
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0064640 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qpxxtqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        int a7,
        char a8,
        int a9,
        char a10)
{
  int v11; // [rsp+30h] [rbp-91h] BYREF
  int v12; // [rsp+38h] [rbp-89h] BYREF
  __int64 v13; // [rsp+40h] [rbp-81h] BYREF
  __int64 v14; // [rsp+48h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-71h] BYREF
  char *v16; // [rsp+60h] [rbp-61h]
  __int64 v17; // [rsp+68h] [rbp-59h]
  __int64 *v18; // [rsp+70h] [rbp-51h]
  __int64 v19; // [rsp+78h] [rbp-49h]
  __int64 *v20; // [rsp+80h] [rbp-41h]
  __int64 v21; // [rsp+88h] [rbp-39h]
  char *v22; // [rsp+90h] [rbp-31h]
  __int64 v23; // [rsp+98h] [rbp-29h]
  int *v24; // [rsp+A0h] [rbp-21h]
  __int64 v25; // [rsp+A8h] [rbp-19h]
  char *v26; // [rsp+B0h] [rbp-11h]
  __int64 v27; // [rsp+B8h] [rbp-9h]
  int *v28; // [rsp+C0h] [rbp-1h]
  __int64 v29; // [rsp+C8h] [rbp+7h]
  int v30; // [rsp+108h] [rbp+47h] BYREF

  v30 = a4;
  UserData.Ptr = (ULONGLONG)&v30;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = 0;
  v16 = &a5;
  v18 = &v13;
  v20 = &v14;
  v11 = 0;
  v22 = &a8;
  v24 = &v11;
  v26 = &a10;
  v28 = &v12;
  v14 = 0LL;
  v13 = 0LL;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 8LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventStartReserveResource, 0LL, 8u, &UserData);
}
