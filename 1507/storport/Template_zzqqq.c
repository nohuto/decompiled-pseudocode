/*
 * XREFs of Template_zzqqq @ 0x1C0026ED0
 * Callers:
 *     RaCallMiniportFindAdapter @ 0x1C0007E88 (RaCallMiniportFindAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rax
  unsigned int v11; // edx
  const wchar_t *v12; // r10
  const wchar_t *v13; // rax
  bool v14; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  const wchar_t *v17; // [rsp+40h] [rbp-19h]
  int v18; // [rsp+48h] [rbp-11h]
  int v19; // [rsp+4Ch] [rbp-Dh]
  char *v20; // [rsp+50h] [rbp-9h]
  __int64 v21; // [rsp+58h] [rbp-1h]
  char *v22; // [rsp+60h] [rbp+7h]
  __int64 v23; // [rsp+68h] [rbp+Fh]
  char *v24; // [rsp+70h] [rbp+17h]
  __int64 v25; // [rsp+78h] [rbp+1Fh]

  v8 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  UserData.Size = v11;
  v12 = L"NULL";
  UserData.Reserved = 0;
  v13 = L"NULL";
  if ( a4 )
    v13 = a4;
  UserData.Ptr = (unsigned __int64)v13;
  v14 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v8;
    while ( a5[v8] );
    v9 = 2 * v8 + 2;
    v14 = a5 == 0LL;
  }
  if ( !v14 )
    v12 = a5;
  v18 = v9;
  v17 = v12;
  v20 = &a6;
  v19 = 0;
  v22 = &a7;
  v21 = 4LL;
  v24 = &a8;
  v23 = 4LL;
  v25 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventPortConfigChange, 0LL, 5u, &UserData);
}
