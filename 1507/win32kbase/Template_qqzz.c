/*
 * XREFs of Template_qqzz @ 0x1C00AAE88
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C0018C20 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqzz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // rax
  int v10; // r8d
  const wchar_t *v11; // r10
  const wchar_t *v12; // rax
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v16; // [rsp+40h] [rbp-40h]
  __int64 v17; // [rsp+48h] [rbp-38h]
  const wchar_t *v18; // [rsp+50h] [rbp-30h]
  int v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+5Ch] [rbp-24h]
  const wchar_t *v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+A8h] [rbp+28h] BYREF

  v24 = a4;
  UserData.Ptr = (ULONGLONG)&v24;
  v7 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v16 = &a5;
  v17 = 4LL;
  v8 = 10;
  if ( a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a6[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v19 = v10;
  v11 = L"NULL";
  v20 = 0;
  v12 = L"NULL";
  if ( a6 )
    v12 = a6;
  v18 = v12;
  v13 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v7;
    while ( a7[v7] );
    v8 = 2 * v7 + 2;
    v13 = a7 == 0LL;
  }
  if ( !v13 )
    v11 = a7;
  v22 = v8;
  v21 = v11;
  v23 = 0;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &WindowLayoutChange_Stop, &W32kControlGuid, 4u, &UserData);
}
