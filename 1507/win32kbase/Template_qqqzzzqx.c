/*
 * XREFs of Template_qqqzzzqx @ 0x1C00AA940
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0050350 (EtwTraceInputProcessDelay.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqzzzqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        char a11)
{
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rax
  int v14; // r9d
  const wchar_t *v15; // r10
  const wchar_t *v16; // rax
  __int64 v17; // rax
  int v18; // r9d
  const wchar_t *v19; // rax
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-71h] BYREF
  char *v23; // [rsp+40h] [rbp-61h]
  __int64 v24; // [rsp+48h] [rbp-59h]
  char *v25; // [rsp+50h] [rbp-51h]
  __int64 v26; // [rsp+58h] [rbp-49h]
  const wchar_t *v27; // [rsp+60h] [rbp-41h]
  int v28; // [rsp+68h] [rbp-39h]
  int v29; // [rsp+6Ch] [rbp-35h]
  const wchar_t *v30; // [rsp+70h] [rbp-31h]
  int v31; // [rsp+78h] [rbp-29h]
  int v32; // [rsp+7Ch] [rbp-25h]
  const wchar_t *v33; // [rsp+80h] [rbp-21h]
  int v34; // [rsp+88h] [rbp-19h]
  int v35; // [rsp+8Ch] [rbp-15h]
  char *v36; // [rsp+90h] [rbp-11h]
  __int64 v37; // [rsp+98h] [rbp-9h]
  char *v38; // [rsp+A0h] [rbp-1h]
  __int64 v39; // [rsp+A8h] [rbp+7h]
  int v40; // [rsp+E8h] [rbp+47h] BYREF

  v40 = a4;
  UserData.Ptr = (ULONGLONG)&v40;
  v11 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v23 = &a5;
  v25 = &a6;
  v12 = 10;
  v24 = 4LL;
  v26 = 4LL;
  if ( a7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a7[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v28 = v14;
  v15 = L"NULL";
  v29 = 0;
  v16 = L"NULL";
  if ( a7 )
    v16 = a7;
  v27 = v16;
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v31 = v18;
  v19 = L"NULL";
  v32 = 0;
  if ( a8 )
    v19 = a8;
  v30 = v19;
  v20 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v11;
    while ( a9[v11] );
    v12 = 2 * v11 + 2;
    v20 = a9 == 0LL;
  }
  if ( !v20 )
    v15 = a9;
  v34 = v12;
  v33 = v15;
  v36 = &a10;
  v35 = 0;
  v38 = &a11;
  v37 = 4LL;
  v39 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &InputProcessDelayEvent, &W32kControlGuid, 8u, &UserData);
}
