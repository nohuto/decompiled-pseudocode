/*
 * XREFs of Template_qqqzz @ 0x1C0031098
 * Callers:
 *     DpiMiracastPerfRetireFrame @ 0x1C0030760 (DpiMiracastPerfRetireFrame.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqzz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8)
{
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rax
  int v11; // r8d
  const wchar_t *v12; // r10
  const wchar_t *v13; // rax
  bool v14; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  char *v17; // [rsp+40h] [rbp-19h]
  __int64 v18; // [rsp+48h] [rbp-11h]
  char *v19; // [rsp+50h] [rbp-9h]
  __int64 v20; // [rsp+58h] [rbp-1h]
  const wchar_t *v21; // [rsp+60h] [rbp+7h]
  int v22; // [rsp+68h] [rbp+Fh]
  int v23; // [rsp+6Ch] [rbp+13h]
  const wchar_t *v24; // [rsp+70h] [rbp+17h]
  int v25; // [rsp+78h] [rbp+1Fh]
  int v26; // [rsp+7Ch] [rbp+23h]
  int v27; // [rsp+B8h] [rbp+5Fh] BYREF

  v27 = a4;
  UserData.Ptr = (ULONGLONG)&v27;
  v8 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v17 = &a5;
  v19 = &a6;
  v9 = 10;
  v18 = 4LL;
  v20 = 4LL;
  if ( a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a7[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v22 = v11;
  v12 = L"NULL";
  v23 = 0;
  v13 = L"NULL";
  if ( a7 )
    v13 = a7;
  v21 = v13;
  v14 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v8;
    while ( a8[v8] );
    v9 = 2 * v8 + 2;
    v14 = a8 == 0LL;
  }
  if ( !v14 )
    v12 = a8;
  v25 = v9;
  v24 = v12;
  v26 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventMiracastPerfTrackSourceDroppedFrames, 0LL, 5u, &UserData);
}
