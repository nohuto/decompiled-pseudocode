/*
 * XREFs of Template_szsz @ 0x1C00BED7C
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C0019010 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_szsz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5,
        const char *a6,
        const wchar_t *a7)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  ULONG v9; // ecx
  const char *v10; // r10
  const char *v11; // rax
  int v12; // r9d
  __int64 v13; // rax
  int v14; // r8d
  const wchar_t *v15; // r11
  const wchar_t *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  bool v19; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  const wchar_t *v22; // [rsp+40h] [rbp-40h]
  int v23; // [rsp+48h] [rbp-38h]
  int v24; // [rsp+4Ch] [rbp-34h]
  const char *v25; // [rsp+50h] [rbp-30h]
  int v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+5Ch] [rbp-24h]
  const wchar_t *v28; // [rsp+60h] [rbp-20h]
  int v29; // [rsp+68h] [rbp-18h]
  int v30; // [rsp+6Ch] [rbp-14h]

  v7 = -1LL;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5;
  }
  UserData.Size = v9;
  v10 = "NULL";
  v11 = "NULL";
  UserData.Reserved = 0;
  if ( a4 )
    v11 = a4;
  v12 = 10;
  UserData.Ptr = (ULONGLONG)v11;
  if ( a5 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a5[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v23 = v14;
  v15 = L"NULL";
  v24 = 0;
  v16 = L"NULL";
  if ( a5 )
    v16 = a5;
  v22 = v16;
  if ( a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a6[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5;
  }
  v26 = v18;
  if ( a6 )
    v10 = a6;
  v27 = 0;
  v25 = v10;
  v19 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v7;
    while ( a7[v7] );
    v12 = 2 * v7 + 2;
    v19 = a7 == 0LL;
  }
  if ( !v19 )
    v15 = a7;
  v29 = v12;
  v28 = v15;
  v30 = 0;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &TrappedAppContainerRenderEvent, &W32kControlGuid, 4u, &UserData);
}
