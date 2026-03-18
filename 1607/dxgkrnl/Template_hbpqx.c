/*
 * XREFs of Template_hbpqx @ 0x1C002FFC8
 * Callers:
 *     DpiDxgkDdiQueryChildRelations @ 0x1C00F75E0 (DpiDxgkDdiQueryChildRelations.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_hbpqx(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  __int64 v10; // [rsp+40h] [rbp-19h]
  int v11; // [rsp+48h] [rbp-11h]
  int v12; // [rsp+4Ch] [rbp-Dh]
  char *v13; // [rsp+50h] [rbp-9h]
  __int64 v14; // [rsp+58h] [rbp-1h]
  char *v15; // [rsp+60h] [rbp+7h]
  __int64 v16; // [rsp+68h] [rbp+Fh]
  char *v17; // [rsp+70h] [rbp+17h]
  __int64 v18; // [rsp+78h] [rbp+1Fh]
  unsigned __int16 v19; // [rsp+B8h] [rbp+5Fh] BYREF

  v19 = a4;
  UserData.Ptr = (ULONGLONG)&v19;
  v10 = a5;
  v11 = a4;
  *(_QWORD *)&UserData.Size = 2LL;
  v13 = &a6;
  v15 = &a7;
  v17 = &a8;
  v12 = 0;
  v14 = 8LL;
  v16 = 4LL;
  v18 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 5u, &UserData);
}
