/*
 * XREFs of Template_szzqqq @ 0x1C00AB118
 * Callers:
 *     EtwTraceTimerNoCoalescing @ 0x1C00A7DB0 (EtwTraceTimerNoCoalescing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_szzqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7,
        char a8,
        char a9)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG v11; // ecx
  const char *v12; // rax
  int v13; // r9d
  __int64 v14; // rax
  int v15; // r8d
  const wchar_t *v16; // r10
  const wchar_t *v17; // rax
  bool v18; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  const wchar_t *v21; // [rsp+40h] [rbp-31h]
  int v22; // [rsp+48h] [rbp-29h]
  int v23; // [rsp+4Ch] [rbp-25h]
  const wchar_t *v24; // [rsp+50h] [rbp-21h]
  int v25; // [rsp+58h] [rbp-19h]
  int v26; // [rsp+5Ch] [rbp-15h]
  char *v27; // [rsp+60h] [rbp-11h]
  __int64 v28; // [rsp+68h] [rbp-9h]
  char *v29; // [rsp+70h] [rbp-1h]
  __int64 v30; // [rsp+78h] [rbp+7h]
  char *v31; // [rsp+80h] [rbp+Fh]
  __int64 v32; // [rsp+88h] [rbp+17h]

  v9 = -1LL;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5;
  }
  UserData.Size = v11;
  v12 = "NULL";
  if ( a4 )
    v12 = a4;
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)v12;
  v13 = 10;
  if ( a5 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a5[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v22 = v15;
  v16 = L"NULL";
  v23 = 0;
  v17 = L"NULL";
  if ( a5 )
    v17 = a5;
  v21 = v17;
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v13 = 2 * v9 + 2;
    v18 = a6 == 0LL;
  }
  if ( !v18 )
    v16 = a6;
  v25 = v13;
  v24 = v16;
  v27 = &a7;
  v26 = 0;
  v29 = &a8;
  v28 = 4LL;
  v31 = &a9;
  v30 = 4LL;
  v32 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &TimerNoCoalescing, &W32kControlGuid, 6u, &UserData);
}
