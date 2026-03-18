/*
 * XREFs of Template_zqzt @ 0x1C00C0494
 * Callers:
 *     EtwFontLoadAttemptEvent @ 0x1C00BFB80 (EtwFontLoadAttemptEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqzt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        const wchar_t *a6,
        char a7)
{
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  ULONG v10; // r8d
  const wchar_t *v11; // r10
  const wchar_t *v12; // rax
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v16; // [rsp+40h] [rbp-40h]
  __int64 v17; // [rsp+48h] [rbp-38h]
  const wchar_t *v18; // [rsp+50h] [rbp-30h]
  int v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+5Ch] [rbp-24h]
  char *v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]

  v7 = -1LL;
  v8 = 10;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  UserData.Size = v10;
  v11 = L"NULL";
  UserData.Reserved = 0;
  v12 = L"NULL";
  if ( a4 )
    v12 = a4;
  UserData.Ptr = (ULONGLONG)v12;
  v16 = &a5;
  v17 = 4LL;
  v13 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v8 = 2 * v7 + 2;
    v13 = a6 == 0LL;
  }
  if ( !v13 )
    v11 = a6;
  v19 = v8;
  v18 = v11;
  v21 = &a7;
  v20 = 0;
  v22 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &FontLoadAttemptEvent, &W32kControlGuid, 4u, &UserData);
}
